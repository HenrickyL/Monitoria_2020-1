// temos que receber 2 valores
var P = Number(getline())
var V = Number(getline())

// var P = Number(prompt("Digite o Preço do produto:"))
// var V = Number(prompt("Digite o dinheiro recebido:"))

//subtraio e faço a verificaçaõ
var D = V - P
// console.log("P: "+P)
// console.log("V: "+V)
// console.log("D: "+D)
if(D >= 0){ //se for positivo me deu mais dinheiro que o preço, 
    //logo tenho que dar o troco
    var aux = Number.parseInt(D/100)




    console.log("Cédulas de R$100.00: "+ aux)
    //reaproveito o aux para salvar o resto
    D  = D%100 //quanto do devende depois de dar "aux" notas de 100 
    //recalculo
    aux = Number.parseInt(D/50)

    console.log("Cédulas de R$50.00: " +aux)
    D  = D%50
    aux = Number.parseInt(D/20)
    console.log("Cédulas de R$20.00: " +aux)
    D  = D%20
    aux = Number.parseInt(D/10)



    console.log("Cédulas de R$10.00: " +aux)
    D  = D%10
    aux = Number.parseInt(D/5)
    console.log("Cédulas de R$5.00: " +aux)
    D  = D%5
    aux = Number.parseInt(D/2)
    console.log("Cédulas de R$2.00: " +aux)
    D  = D%2
    aux = Number.parseInt(D/1)
    console.log("Moeda de R$1.00: " +aux)
    D  = D%1


    ///moedas
    aux = Number.parseInt(D/0.5)
    console.log("Moeda de R$0.50: " +aux)
    D  = D%0.5
    aux = Number.parseInt(D/0.25)
    console.log("Moeda de R$0.25: " +aux)
    D  = D%0.25
    aux = Number.parseInt(D/0.10)
    console.log("Moeda de R$0.10: " +aux)
    D  = D%0.10
    aux = Number.parseInt(D/0.05)
    
    console.log("Moeda de R$0.05: " +aux)
    D  = D%0.05
    aux  = Number(D/0.01)
     console.log("Moeda de R$0.01: " +Math.round(aux))

}else{
    console.log("Valor Insuficiente, faltaram R$ "+Number((-D).toFixed(2)))
}


