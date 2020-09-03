//declarando a variavel N
let N
//receber a quantidade
N = Number(prompt('Digite quantos numeros vc quer receber'))

//media = soma/N
let soma = 0

// let i=0  // 0 1 2 3 4 (N-1)

// while(i<N){
//     console.log('soma: ',soma)
//     let x = Number(prompt("Digite o numero: "))
//     soma = soma+x
//     ////////////////////////
//     i++ // quantidade
// }

for(let i=0; i<N ;i++){
    console.log('soma: ',soma)
    let x = Number(prompt("Digite o numero: "))
    soma = soma+x
}

console.log('soma: ',soma)


let media = soma/N

console.log("media é ", media)


