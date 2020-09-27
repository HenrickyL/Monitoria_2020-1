function somaMaiorMenor(vetor){
    let Ma = vetor[0]
    let me = vetor[0]
    for(let i=1; i<vetor.length;i++){
        let v = vetor[i]
        //verificar se esse valor é maior do que o meu maior antigo
        if(v > Ma){
            Ma = v;
        }
        if(v < me){
            me = v
        }
    }
    return Ma+me
}


function recebe(L){
    let v =[]
    for(let i=0; i< L; i++){
        let aux = Number(prompt())
        v.push(aux)
    }
    console.log(v)
    return v
}

function main(){

    let n = Number(prompt())
    let vec = recebe(n)



    console.log( somaMaiorMenor(vec))
}

main()