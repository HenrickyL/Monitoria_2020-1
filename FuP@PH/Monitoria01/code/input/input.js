//Entrada de dados

//codigo que sempre tem que usa
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas
//termina aqui



//seu codigo

console.log("Digite dois numeros: ");

var a = Number(getline())//entrada de dados como string
var b = Number(getline())//transforma string para numero


console.log(a+b) //está esperando a entrada
//informa que acabou a entrada com control + D ou control + Z
//assincrono, primeiro toda entrada, depois toda saida