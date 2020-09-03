let x = Number(getline())//prompt('digite x: '))
let y = Number(getline())//prompt('digite y: '))
//x..y
        //0..n
        //x..y
//acumulador
let soma = 0
for(let i=x; i<=y;i++){
    //verificar se o 'valor atual' é impar
    if(i%2!==0){
        soma+=i
    }
}

console.log(soma)