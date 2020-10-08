var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas


// let v =[]
// let aux = null

// while(aux !== ''){
//     aux = getline()
//     console.log(Number(aux))
//     v.push(Number(aux))
// }

// console.log(v)


let qtd = Number(getline())
let strVec =  getline().split(' ')
//converter para numero:
for(let i =0 ; i< qtd; i++){
    strVec[i] =  Number(strVec[i])
}
console.log(qtd)
console.log(strVec)


