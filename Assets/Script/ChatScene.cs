using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChatScene : MonoBehaviour
{
    [SerializeField] GameObject chatTextView;
    [SerializeField] GameObject inputChat;

    // Start is called before the first frame update
    void Start()
    {
        ChatEvents.current.onNewChat += newChat;
    }

    void newChat(string chat)
    {
        Debug.Log("New chat: "+chat);
        this.chatTextView.GetComponent<Text>().text += "\n"+chat;
    }

    public void sendChat()
    {
        ChatEvents.current.sendChat(this.inputChat.GetComponent<InputField>().text);
        this.inputChat.GetComponent<InputField>().text = "";
    }

}
