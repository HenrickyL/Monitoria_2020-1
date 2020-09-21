//somatorio

function somatorio(N){
    let soma=0 // +
    for(let i=1; i<=N  ; i++){
        soma = soma+i
    }
    return soma
    
}

//fazer a repetição
//for() // maioria dos casos, ou quando sabemos o intevalo da repetição
//while() // quando não sabemos quantas vezes serão reptidos
function main(){
    let n = Number(getline())//prompt("digite um numero:"))
    let res = somatorio(n);
    console.log(res)
}

main()