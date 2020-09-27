function media(vetor){
    let soma = 0
    for(let x of vetor){
        soma += x
    }
    // console.log(vetor, soma,">>")
    return soma/vetor.length;
}

function recebe(){
    // recebe uma string
    //exemplo: "1.0 2.0 3.0" 
    let vetorString = getline()
    //O split quebra uma string em um vetor de string com base no separador
    //exeplo: string.split(separador)
    let vec = vetorString.split(' ')
    //retorna : ['1','2','3']

    //converter os elementos do vetor para numero
    for(let i=0;i<vec.length;i++){
        vec[i] = Number(vec[i])
    }
    return vec
}

function main(){

    let n = Number(getline())
    let vec = recebe()



    console.log( media(vec))
}

main()