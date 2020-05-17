//Repeticao
/*
     vou precisar de 3 variaveis, uma para armazenar os valores, uma para
armazenar a soma e uma para armazenar a quantidade de numeros
*/
/*
var n=0, soma=0, qtd=0;

while(n != -999){ // condicao de parada
    //receber o valor do usuário
    n = Number(prompt("Digite o "+(qtd+1)+"º numero:"  ))
    if(n != -999){
        //incremento a quantidade
        qtd++
        //faço a soma usando o valor anterior
        soma += n //soma = soma+n
        // imprime o elemento
        document.write((qtd)+"º numero : "+n + "<br>")
        
    }
}
document.write("<br>QTD: "+ qtd)
document.write("<br>Soma: "+ soma)
*/
//mesmo códifo usando for
document.write("<br><br>:: For ::<br>")

var n, soma=0, qtd;
for( qtd=0 ; n != -999 ; qtd++ ){
    n = Number(prompt("Digite o "+(qtd+1)+"º numero:"  ))
    if(n!=-999){
        soma+=n
        document.write("<br> >> "+(qtd+1)+"º numero: "+n )
    }else{
        qtd--;
    }
}
document.write("<br>QTD: "+ qtd)
document.write("<br>Soma: "+ soma)