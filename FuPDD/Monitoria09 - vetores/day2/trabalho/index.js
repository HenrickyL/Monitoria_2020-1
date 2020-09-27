fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift();

function criaEstoque(){
    let estoque = []
    let aux = null
    while(aux!='-'){
        aux = getline()
        if(aux!='-'){
            //usar o split para separar as informações
            let prod = aux.split(' ')
            //["banana", "0.57", "98"]
            let chave = prod[0]
            let preco = prod[1]
            let qtd = prod[2]
            //adicionar no estoque na forma de dicionário
            estoque[ chave ] = [Number(preco), Number(qtd)]

        }
        
    }
    return estoque
}

function Compras(){
    let compras =[]
    let aux=null
    let compra = []
    while(aux != '-'){
        
        aux = getline()
        if(aux!=''){
            compra.push(aux)

        }else if( aux===''|| aux==='-'){
            //ajustar
            let nome = compra[0]
            let k = compra.slice(1,compra.length)
            //salvo
            compras.push([nome, k])
            //limpo o meu vetor
            compra=[]
        }

    }
    return compras
}

function main(){
    let estoque =criaEstoque()
    console.log(estoque)
    let compras = Compras()
    console.log(compras)
    //alterar o estoque com base nas compras


}

main()