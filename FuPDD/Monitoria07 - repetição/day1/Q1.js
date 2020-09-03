let N = Number(prompt("Digite a quantidade"))

let QtdPar = 0

for(let i=0; i<N; i++){
    let x = Number(prompt(`Digite o ${i+1} numero: `))  
    console.log(x)
    if(x%2==0){
        QtdPar = QtdPar+1
    }
}

console.log(`Existem ${QtdPar} de pares!`)