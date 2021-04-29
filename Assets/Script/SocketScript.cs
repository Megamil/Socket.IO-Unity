using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Quobject.SocketIoClientDotNet.Client;
using Newtonsoft.Json;
using System;

public class SocketScript : MonoBehaviour
{
    private Socket socket;
    private bool isConnected = false;

    void Awake()
    {
        //init Thread
        UnityThread.initUnityThread();
    }

    void Start()
    {
        //Add event
        ChatEvents.current.onSendChat += sendChat;

        UnityThread.executeInUpdate(() =>
        {
            this.connectSocket();
            this.socketListener();
        });
    }

    void connectSocket()
    {
        if (socket == null)
        {
            try
            {
                Debug.Log(Constants.URL_SOCKET);
                IO.Options sockopts = new IO.Options();

                sockopts.Reconnection = false;
                sockopts.ReconnectionAttempts = 10000;
                sockopts.ReconnectionDelay = 10000;
                sockopts.ReconnectionDelayMax = 10000;
                sockopts.Timeout = 500;
                sockopts.AutoConnect = false;
                socket = IO.Socket(Constants.URL_SOCKET, sockopts);
                socket.Connect();
            }
            catch (Exception e)
            {
                Debug.Log(e.ToString());
            }
        }
    }

    void socketListener()
    {

        socket.On(Socket.EVENT_CONNECT, () =>
        {
            if(!isConnected)
            {
                initChat obj = new initChat();
                obj.nameUser = "User Unity";
                string jsonData = JsonUtility.ToJson(obj);

                socket.Emit(Constants.EMIT_INITCHAT, jsonData);
                isConnected = true;
            }
        });

        socket.On(Constants.ON_NEWCHAT, data =>
        {
            Debug.Log(data.ToString());
            responseChat response = JsonUtility.FromJson<responseChat>(data.ToString());
            UnityThread.executeInUpdate(() =>
            {
                ChatEvents.current.newChat(response.chat);
            });

        });

    }

    void sendChat(string chat)
    {
        requestChat obj = new requestChat();
        obj.chat = chat;
        string jsonData = JsonUtility.ToJson(obj);

        socket.Emit(Constants.EMIT_CHAT, jsonData);
    }

}
