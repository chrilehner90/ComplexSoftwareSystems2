var http = require('http');

http.createServer(function(request, response) {
	response.writeHead(200, {"Content-Type": "text/plain"})
	response.write("Hello Chri!\n");
	response.end("Am I supposed to do something else? Well, I guess not...\n");
}).listen(3000);

console.log("Listening to localhost:3000, my friend!");