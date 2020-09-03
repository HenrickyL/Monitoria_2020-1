function maiorMenor(N){
    //para definir o maior e o menor
    let maior, menor

    for(let i=0  ; i<N ; i++){
        let x = Number(getline())//prompt(`digite o ${i+1}º numero:`))

        //verificar quando i=0 para execur uma coisa
        if(i===0){
            maior=x
            menor=x
        }
// 1
// maior = 1, menor= 1
//1 2
//maior=2, menor=1
// 1 2 -3
// maior = 2, menor = -3
        //verificar nos outros
        else{
            //verifica o maior até o momento
            if(x>maior){
                //redefino o maior
                maior = x;
            }
            //verificar o menor até o momento
            if(x<menor){
                menor= x
            }
        }

    }//encerrou o for
    // console.log(`O maior é ${maior} e o menor é ${menor}!\n-------------------------------`)
    console.log(maior, menor)
    //return [maior, menor]
}



function main(){
    let abacaxi = Number(getline())//prompt("n:"))
   /*let list=*/ maiorMenor(abacaxi)
   //console.log(list)
}


main()
