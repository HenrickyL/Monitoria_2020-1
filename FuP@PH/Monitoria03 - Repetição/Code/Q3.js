// quando estamos trabalhando com um intervalo onde sabemos o final é interessante usar o For
//recebo o N
var N = Number(prompt( "Digite a quantidade de Pessoas:" ))
document.write("<b>"+N+ "</b> Pessoas<br>")

var i,n1,n2,med
//para pegar a maior nota vou fazer uma variavel maior e uma menor, comparo e troco se for o caso
var maior, menor

for( i=1;i<=N; i++ ){
    //recebo as duas notas
    n1 = Number(prompt(  "Digite a 1ª nota da "+ i+"ª Pessoa:" ))
    n2 = Number(prompt(  "Digite a 2ª nota da "+ i+"ª Pessoa:" ))
    //calculo a média
    med = (n1+n2)/2
    //para fins de verificaçção
    document.write("<br>"+i+"º  <b>n1:</b> "+n1+ ", <b>n2:</b> "+n2, "    ->    <b>"+ med+"</b>" )

    //verifico
    if(i==1){ // na primeira passangem atribuo para ter uma referencia
        //1a passagem define o maior e o menor
        maior = med
        menor = med
    }else{//verificação da maioridade e menoridade das notas
        if(med > maior){ // a nota atual é a maior de todas
            maior = med
        }
        else if(med < menor){ // ou a menor de todas
            menor = med
        }
    }
}//fim do for
document.write("<br><br>A maior nota é: <b>"+ maior + "</b>")
document.write("<br>A menor nota é: <b>"+ menor+"</b>")