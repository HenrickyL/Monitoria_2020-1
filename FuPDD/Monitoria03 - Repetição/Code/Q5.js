//21 

var n, soma=0, aux
//enquanto a soma for menor = que 21
while(soma <= 21 && aux != -999){ // se passar ou se ele parar
    // recebo a carta
    n = prompt("Soma:"+soma+"\n Qual a carte?")
    //printar as cartas

    if(n != "-999")document.write("<br>Carta: "+n)
    //fazer conversão(opcional)
    aux = Number(n) //se numero vai converter, se não vai dar NaN
    if(!isNaN(aux) && 2<=aux && aux <= 10 && aux != -999){ //função que verifica se não é numero
        //isNaN não é numero
        //! isNaN -> é um numero
        soma+= aux
    }else{ //se não é numero é uma letra da carta
        //tem os casos A-1,J-11,Q-12, k-13
        switch(n){
            case 'A':
                soma+=1
                break;
            case 'J':
                soma+=11
                break;
            case 'Q':
                soma+=12
            case 'K':
                soma+=13
                break;
            default:
                alert("Não é uma carta Válida")
        }
    }// fim da conversao (opcional)
    //alert("Soma: "+soma)

}

var teste = 21 - soma
document.write("<br><b>Soma: "+soma+"</b>")
if(soma >21){
    
}else if(soma == 21){
    document.write("<br><b>ganhou</b>")
}else if(teste <= 3 ){
    document.write("<br><b>ganhou</b>")
}else{
    document.write("<br><b>Perdeu</b>")
}
