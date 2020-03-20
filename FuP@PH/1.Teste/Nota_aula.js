//Valor do tipo Booleano
console.log(typeof("True"))
console.log(typeof(True))
console.log(typeof(true))

//Operadores de comparação
// x == y                      x igual y  (Erro Comum: x=y)
// x != y                      x não igual y
// x > y                       x Maior que y
// x < y                       x Menor que y
// x >= y                      x Maior ou igual y
// x <= y                      x Menor ou igual y

//Operadores Lógicos

x = 15
console.log( x > 0 && x < 10 ) // uso do E
console.log( !(x > 0 && x < 10) ) // Negação
console.log( x%2==0 || x%3==0) //uso do OU

//Comando de Seleçaõ COM Senão
var x=16;

if(x%2==0){  //Identação é importanta (tab = 4espaços)
	console.log(x+" é par");
}else {
	console.log(x+" é impar");
}

//Comando de seleção Sem Senão(else)
if(x < 0) console.log("O numero é negativo "+x+" não é válido aqui.")
console.log("Isto é sempre impresso");

//comandos de Seleção Encadeados
var x = 10
var y = 10
if(x < y)
	console.log("x é menor que y")
else
	if(x > y)
		console.log("x é maior que y")	
	else
		console.log("x igual a y")
//tambem pode ser escrito assim
if(x < y)
	console.log("x é menor que y")
else if(x > y)
	console.log("x é maior que y")	
else
	console.log("x igual a y")