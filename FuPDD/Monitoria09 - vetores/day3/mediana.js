var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

function mediana(vetor){
    let mediana
    let len = vetor.length
    //vou verificar se é par ou impar
    if(len %2===0){
        //tenho que fazer a media
        //posso dividir por 2 e pegar um dos 2 elementos do meio
        // 0 1   2 3   4 5
        //[1,2,  3,4  ,5,6]
        //6/2 = 3
        //6/2 -1 = 2
        mediana = (vetor[len/2 -1] + vetor[len/2])/2


    }else{
        //converter para inteiro
        let meio = Number.parseInt(len/2)
        mediana  = vetor[meio]

    }
    return mediana
}

function recebeVec(){
    let v = [] //vetor vazio
    //vetor de string com os elementos do vetor
    let strVec = getline().split(' ')
    
    for(let e of strVec){
        v.push( Number.parseFloat(e)  )
    }
    return v
}

function main(){
    let n = Number(getline())
    let v = recebeVec()
    // console.log(v)
    //ordenar o vetor
    v = v.sort( function(a, b){return a-b} ); // ordena
    // console.log(v)
    
    console.log( mediana(v) )
}

main()

