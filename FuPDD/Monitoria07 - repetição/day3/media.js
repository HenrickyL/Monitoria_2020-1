function mediaN(n){
    let soma = 0
    
    for(let i=0; i<n ; i++){
        let x = Number(prompt("x:"))
        soma+=x // soma = soma+x
    }
    console.log(soma/n)
    
}


function main(){
    let n = Number(prompt("n:"))
    mediaN(n)
}

main()