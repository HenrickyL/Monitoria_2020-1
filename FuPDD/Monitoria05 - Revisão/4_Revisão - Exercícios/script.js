//tenho que receber 2 valores
// var Q = Number( prompt("Digite a quantidade de rolos:") )
// var P = Number( prompt("Digite o preço do pacote: ") )

var Q = Number( getline() )
var P = Number( getline() )

//vou precisar verificar o preço para os pacotes  que tem 4, 8, 12 e 16 rolos

var k = P/Q

console.log( 4*k )
console.log( 8*k )
console.log( 12*k)
console.log( 16*k)
