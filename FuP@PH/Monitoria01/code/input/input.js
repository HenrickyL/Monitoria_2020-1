var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

console.log("Digite dois numeros");
let a = getline()
let b = Number(getline())
console.log(typeof(a),b) //está esperando a entrada
//informa que acabou a entrada com control + D ou control + Z
//assincrono, primeiro toda entrada, depois toda saida