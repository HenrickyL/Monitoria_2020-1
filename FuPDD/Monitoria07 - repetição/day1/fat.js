//receber um numero e retornamos o fatorial dele

function fat( n ){
    //criar uma acumulador
    let res = 1
    if(n===0) 
        return 1

    for( let i=n; i>1 ; i--){
        res = res*i
    }

    // while(n>1){
    //     res= res*(n-1)
    //     n= n-1
    // }
    return res
}

let x = Number(prompt("Digite um numero"))
console.log( fat(x) )
