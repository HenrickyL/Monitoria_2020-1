
//acumulador 
function somaImpar(x , y){
    let soma=0
    
    for(let i=x; i<=y ;i++){
        if( i%2!==0 ){//se for impar
            soma = soma+i
            // console.log(i)
        }
    }
    return soma;
}


function main(){
    let x=0,y=0
    while(x!=-999||y!=-999){
        x = Number(prompt("x:"))
        y = Number(prompt("y:"))
        console.log( `A soma dos impares de ${x} até ${y} é  ${ somaImpar(x,y)}`)
    }
}


main()


