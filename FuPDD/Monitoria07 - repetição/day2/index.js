//primo

let N = Number(prompt("digite um numero"))
//nuemro é primo quando ele é, somente, divisivel por 1 e elemesmo
//7 m não vou ver o 1 e nem o 7

//10
//_ 2 3 4 5 6 _
// let ePrimo= true
// if(N===0 || N==1){
//     console.log('nao')
// }else{

//     for(let i=2; i<N;i++){
//         //estou olhando no intervalo de 2 até o numero anterior de N
//         //fazendo testes para verificar se ele não é primeo
//         if(N%i===0){
//             console.log("nao")
//             ePrimo= false
//             break;
//         }
//         // console.log(i)
//     }
//     if(ePrimo){
//         console.log("sim")
//     }
// }


// COM FUNÇÃO


function isPrimo(num){
    if(num===0 || num===1){
        return 'nao'
    }else{
        for(let i = 2;i<num ; i++ ){
            if(num%i===0){
                return 'nao'
            }
        }
        return 'sim'
    }
}

console.log(isPrimo(N))