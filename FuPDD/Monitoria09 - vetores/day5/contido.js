var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

function contido (v1,v2){
    let estaContido = true


    for(let i=0; i < v2.length; i++){//vetor2, onde o v1 pode estar contido
        //se o elemento atual é igual o 1º elemento do v1
        if(v2[i] === v1[0] &&  (i+v1.length-1 <v2.length) ){
            estaContido =true
            for(let j=0; j< v1.length; j++){//vetor 1
                //vou verificando um a um
                if(  v2[i + j] !==  v1[j] ){
                    
                    estaContido = false
                    break;
                }
            }
            //se estiver contido
            if(estaContido){
                return true
            }
        }
        
    }
    return false
}

function leVetor() {
    var l = getline().split(" ")
    var v = []
    for(var i = 0; i < l.length; i++) {
        v.push( Number(l[i]) ) 
    }
    return v
}

function main(){
    let n1 = Number(getline())
    let v1 = leVetor()
    let n2 = Number(getline())
    let v2 = leVetor()

    if(contido(v1,v2)){
        console.log('Contido')
    }else{
        console.log('Nao contido')
    }


}

main()