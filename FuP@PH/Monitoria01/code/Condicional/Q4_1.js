//Q4 solução mais simples
document.write("Q4_1")
var n1 = Number(prompt("digite o 1º Numero:"))
var n2 = Number(prompt("digite o 2º Numero:"))
var n3 = Number(prompt("digite o 3º Numero:"))

//condição  // pensar em todos os casos
var qtd = 0;

if(n1%2==0){
    qtd = qtd+1;
}
if(n2%2==0) qtd += 1; // qtd = qtd+1;

if(n3%2==0) qtd++; // qtd += 1;

document.write("<br>",qtd," pares")