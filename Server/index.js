const express   = require('express');
const app 		= express();
var http        = require('http').Server(app);
var io          = require('socket.io')(http,{ pingTimeout: 9999999, pingInterval: 9999999, allowEIO3: true });

io.on("connection", function(socket){
    console.log("connection");

    socket.on("initchat",function(data) {
    	console.log(data);
        data = JSON.parse(data);
    	socket.emit("newchat", {"status":true, "msg": "Node to Unity", "chat": "New user: "+data.nameUser});
    });

    socket.on("sendchat",function(data) {
    	console.log(data);
        data = JSON.parse(data);
    	socket.emit("newchat", {"status":true, "msg": "Node to Unity", "chat": "Received by Node: "+data.chat});
    });

});

http.listen(8090,function(){
	console.log("Connected port: 8090");
});