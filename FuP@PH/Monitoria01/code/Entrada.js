//codigo que sempre tem que usa
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas
//termina aqui

//Seu codigo

var a = Number(getline())
var b = Number(getline())
//Crtl+D
if(a > b){
    console.log(a," é maior que ",b)
}else if(a<b){
    console.log(a," é menor que ",b)
}else{
    console.log(a," é igual a ",b)
}