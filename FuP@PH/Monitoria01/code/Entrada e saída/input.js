//copia as 3 linhas
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

//seu codigo

var nota1 = Number(getline())
var nota2 = Number(getline())

console.log("Media = ", (nota1+nota2)/2 )