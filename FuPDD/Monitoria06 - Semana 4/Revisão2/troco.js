//declarou variaveis
var valor_compra
var valor_cliente
var troco
// atribuição da svariaveis
valor_compra = Number(getline())
valor_cliente = Number(getline())
troco_do_cliente =   valor_cliente - valor_compra



notas( troco_do_cliente )





function notas( troco ){        
    if (troco < 0 ) { //ser negativo
        troco = - troco // pegar o modulo, o valor positivo

        troco = troco.toFixed(2) // 5.6868997656890 - > 5.69
        console.log( `Valor Insuficiente, faltaram R$ ${troco}` )
    }
    else {
    // TROCO12,47
        // contou quantas notas de 100 tem dentro do troco
        let c100 = parseInt(troco/100) //0,1247
        //retirou do troco as cedulas de 100
        troco = troco - (c100 * 100)
        console.log(`Cédulas de R$100.00: ${c100}`)
    
        let c50 = parseInt(troco/50)// = 0,2494
        troco = troco - (c50 *50)
        console.log(`Cédulas de R$50.00: ${c50}`)
    
        let c20 = parseInt(troco/20)
        troco = troco - (c20 * 20)
        console.log(`Cedulas de R$20.00 : ${c20}`)
    
        let c10 =  parseInt(troco/10) //= 1,247
        troco = troco - (c10 * 10) 
        console.log(`Cédulas de R$10.00: ${c10}`)
    //novo troco: 2,47
        let c5 = parseInt( troco/5) 
        troco = troco - (c5*5) 
        console.log(`cédulas de R$5.00: ${c5}` )
    
        let c2 =  parseInt(troco/2) // = 1,235
        troco = troco - (c2*2) // = 0,50
        console.log(`cédulas de R$2.00: ${c2}`)
    //novo troco: 0,47
            // 1,47 - > 147
        // troco = troco*100
        let M1R = parseInt(troco)
        troco = (troco - 1*M1R) // = 47
        console.log(`Moeda de R$1.00: ${Math.round(M1R)}`)
        // 0.76
        let M50 = parseInt(troco/0.5) 
        troco = troco -  0.50*M50 
        console.log(`Moeda de R$0.50:${Math.round(M50)}`)
    
        let M25 = parseInt(troco/0.25) 
        troco = troco - 0.25*M25 
        console.log(`Moeda de R$0.25: ${Math.round(M25)}`)
    // novo troco : 22
    
        let M10 =  parseInt(troco/0.1) 
        troco = troco-0.1*M10
        console.log(`Moeda de R$0.10: ${Math.round(M10)}`)
    
        let M5 = parseInt(troco/0.05) 
        troco = troco - 0.05*M5
        console.log(`Moeda de R$0.05: ${Math.round(M5)}`)
    
        let M1 = parseInt(troco /0.01) 
        process.stdout.write(`Moeda de R$0.01:${ Math.round(M1)}`)
    }
}