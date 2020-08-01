//quantos são iguais
//console.clear()
//declarar os 3 valores
//receber os 3 valores
//n1 = Number(prompt("Digite o 1º numero:"))
//n2 = Number(prompt("Digite o 2º numero:"))
//n3 = Number(prompt("Digite o 3º numero:"))
n1 = Number(getline())
n2 = Number(getline())
n3 = Number(getline())
    //fazer a verificações
    // toda vez que precisar fazer comparações, verificação -> If (Se - condicional)

//  A  B   C |  
//
//console.log(n1 + ", " + n2 + ", " + n3)


if (n1 === n2 && n2 === n3) { // saber se os 3 sãi iguais
    console.log("3")
} else if ((n1 === n2 || n2 == n3) || n3 == n1) {
    console.log("2")
} else {
    console.log("1")
}