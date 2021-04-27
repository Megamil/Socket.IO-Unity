using System;
using UnityEngine;

public class ChatEvents : MonoBehaviour
{

    public static ChatEvents current;
    private void Awake() { current = this; }

    //Actions
    public event Action<string> onNewChat;
    public event Action<string> onSendChat;

    //Functions
    public void newChat(string name)
    {
        if (onNewChat != null) { onNewChat(name); }
    }

    public void sendChat(string name)
    {
        if (onSendChat != null) { onSendChat(name); }
    }

}
