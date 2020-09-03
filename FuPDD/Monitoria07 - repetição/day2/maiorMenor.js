//receber um valor N e N valores inteiros
//qual o maior e o menor dessa lista
let n = Number(getline())//prompt("Digite quantos numero quer receber:"))
//1 .. 20
//0 .. 19

let maior, menor
for(let i=0; i<n;i++){
    //coloca tudo que vai ser repetido
    //receber os valores
    let v = Number(getline())//prompt(`Digite o ${i+1}º numero:`))
    // console.log(v)
    //se eu estiver na primeira rodada e quero fazer algo
    if(i===0){
        maior=v;
        menor = v;
    }else{
        //cada rodada do meu for vou vericar se o meu numero
        //recebido é maior que o meu numero "maior"
        if(v > maior){
            //troco o valor do meu maior pra o maior que eu encontrei
            maior = v;
        }
        if(v < menor){
            menor = v;
        }
    }
}

console.log(maior,menor)