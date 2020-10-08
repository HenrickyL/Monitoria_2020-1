var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas


// function separaPar(vetor){
//     let v =[]
//     for(let e of vetor){
//         if(e%2==0){
//             v.push(e)
//         }

//     }
//     return v
// }
// function separaImpar(vetor){
//     let v =[]
//     for(let i=0; i< vetor.length; i++){
//         if(vetor[i]%2!==0){
//             v.push(vetor[i])
//         }
//     }
//     return v
// }

// function recebeVec(qtd){
//     let v = [] //vetor vazio
//     //vetor de string com os elementos do vetor
//     let strVec = getline().split(' ')
//     // for(let i=0;i<qtd;i++){
//     //     //converter para inteiro 
//     //     strVec[i] = Number(strVec[i])
//     // }
//     //return strVec
//     for(let e of strVec){
//         v.push( Number(e)  )
//     }
//     return v

// }

// function main(){
//     let n = Number(getline())
//     let v = recebeVec(n)
//     let VecPar = separaPar(v)
//     let VecImpar =separaImpar(v)
//     console.log(VecImpar)
//     console.log(VecPar)

// }

// main()



//////////////////////////////////////////////

function impar(n1){
    let v = []
    for(let e of n1){
         if (e%2!==0){
             v.push(e)
         }
     }
     return v
 }
 
 function par(n1){
     let v = []
     for(let e of n1){
         if (e%2===0){
             v.push(e)
         }
     }
     return v
 }
 
 function vetor(n){
     let v = []
     let num = getline().split(' ')
     for (let a of num){
        v.push(Number(a))
 }
 return v
 }
 
 function main(){
 
   let vet = getline()
   vet = Number(vet)
 
   let num = vetor(vet)

   let vPar = par(num)
   let vImpar = impar(num)
 
   console.log(vImpar)
   console.log(vPar)
 }
 main()