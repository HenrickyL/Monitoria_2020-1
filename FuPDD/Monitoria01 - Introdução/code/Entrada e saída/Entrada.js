//copia as 3 linhas
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

//Escreve seu código JS

console.log("Digite seu nome: ")
var nome = getline() // Entrada de dados
console.log("Olá, ",nome," Tudo bem?")