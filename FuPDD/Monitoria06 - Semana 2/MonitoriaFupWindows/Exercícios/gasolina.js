// saber qual o que vale a pena
console.clear()
    //declarar as variaveis
var G, A
    // receber os valores
    // G = Number(prompt("Digite o valor da gasolina:"))
    // A = Number(prompt("Digite o valor do alcool:"))
G = Number(getline())
A = Number(getline())

// converter os valores para podermos equilibrar (alcool gasta 30%+)
// deixa o A do jeito que ele era
//converter a gasolida para 30%
G = G * 1.3

//temos que comprar os dois ( maior ou menor ou igual)
if (G < A) {
    console.log("Gasolina")
} else if (A < G) {
    console.log("Alcool")
} else {
    console.log("Empate")
}
//process.stdout.write() usar isso no lugar de console.log