# Exemplo: Socket.IO Unity / Node.JS

Compilação de várias bibliotecas que encontrei para rodar com sucesso, com tudo atualizado (Abril/2021), o Socket.IO no Unity.

Algumas libs que existem hoje deram problemas de versão do Socket, build nos mobiles não funcionavam, problema com thread para atualizar elementos na thread principal dentre outros problemas.

## Para testar local

Usando o NPM e NODE previamente instalados.

```bash
//Abra a pasta Server e execute no terminal
npm install
npm update
node index.js
```

No Unity
- Abra o ChatScene na pasta Scene
- Pode apontar para um IP e porta específicos alterando no Constants.cs
- No exemplo usei eventos para enviar a comunicação do socket para outras classes, (observer patterns).
- Para usar em seu projeto, pode pegar o link do Unity Socket.IO abaixo ou copiar a pasta Plugins deste projeto, junto do UnityThread.cs

## Testes realizados

* .net 4.x (OK)
* Conectado ao servidor com Node.JS usando Socket.io (4.0.1) (OK)
* Servidor rodando em docker (OK)
* Comunicação usando nome de funções customizadas (.On("name"))  e (.Emit("name")) (OK)
* Recebendo e enviando Json (OK)
* Build iOS 14 (OK) (Deve funcionar em versões anteriores)
* Build Android 9 (OK) (Deve funcionar em versões anteriores)
* Atualizar elementos na tela em tempo real (OK)

## Fonts
[Unity-Socket-IO](https://unitylist.com/p/qob/Unity-socket-io)
[Unity Thread](https://stackoverflow.com/questions/41330771/use-unity-api-from-another-thread-or-call-a-function-in-the-main-thread)
