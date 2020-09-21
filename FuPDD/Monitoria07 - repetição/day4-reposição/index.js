//não primo menos primo

function ePrimo(x){//recebe um numero e retorna se é primo ou não
    if(x === 0 || x===1) return false
    for(let i=2; i<x; i++){ //2 ... x-1
        if(x%i === 0){ //se cair aqui, não é primo
            return false
        }
    }
    return true

}

function somaPrimos(N){
   let soma=0
   for(let i=1; i<=N;i++){
       if(ePrimo(i)){
           soma+=i // soma = soma+i
       }
   }
   return soma

}

function somaNaoPrimo(N){
    let soma =0
    for(let i=1;i<=N; i++){
        if( !ePrimo(i)){
            soma+=i
        }
    }
    return soma
}
///alternativo
function nPrimoMenosPrimo(N){
    let somaP =0
    let somaNP =0
    for(let i=1;i<=N; i++){
        if( ePrimo(i)){
            somaP+=i
        }else{
            somaNP+=i
        }
    }
    return somaNP - somaP
}





function main(){
    let n =  Number(getline())//prompt('N: '))
    // console.log( somaNaoPrimo(n) - somaPrimos(n)  )
    console.log(nPrimoMenosPrimo(n))


}



main()