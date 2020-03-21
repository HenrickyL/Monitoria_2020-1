//codigo que sempre tem que usa
	//basta copiar essas 3 linha antes do seu código
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas
//Referência: https://youtu.be/fXi9SQ84ibM (ignore o audio)
//termina aqui

//Escreva seu Código apartir daqui--------------------------------

var a = Number(getline())//comando de entrada e conversão para Número
var b = Number(getline())
//Crtl+D
if(a > b){
    console.log(a," é maior que ",b)
}else if(a<b){
    console.log(a," é menor que ",b)
}else{
    console.log(a," é igual a ",b)
}