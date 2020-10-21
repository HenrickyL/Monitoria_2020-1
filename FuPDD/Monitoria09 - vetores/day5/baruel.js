var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

function repetidor(l) {
    //l -  minha figurinhas
    var repetidas = []

    for (var i = 0; i < l.length; i++ ) {
        if (l[i] == l[i+1]) {
            repetidas.push(l[i])
        }
        
    }
    if (repetidas.length === 0) {
        repetidas = "N"
    }
    return repetidas
}

// 1 1 1 1 2 2 3 5
// 1 2 3 4 5

function faltantes(v, qtd ){
    //v - suas figurinhas
    //qtd - a qtd de figutinhas do album, 1 ..qtd
    let faltam = []
    let album = []
    //criar as figurinhas do album
    for(let i=1; i<= qtd; i++) 
        album.push(i)
    //verificar as que nao estão no album
    for(let a of album){//figurinhas base do album
        // a figurinha do album eu não tenho? se não então adiciona nas faltantes
        
        if( ! pertence(a,v) ){
            faltam.push(a)
        }
    }
    if(faltam.length === 0) 
        faltam = 'N'

    return faltam
}

function pertence(e,v ){
    for(let i=0; i< v.length; i++){
        if(e === v[i]){
            return true
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

function imprime(v){
    for(let i=0;i< v.length; i++){
        process.stdout.write(v[i] + ' ')
    }
    process.stdout.write('\n')
}

function main(){
    let qtdAlbum = Number(getline())
    let n = Number(getline())
    //receber o vetor
    let v = leVetor() // minhas figurinhas
    //chamar as funções para a questão
    let rep = repetidor(v)
    let fal = faltantes(v,qtdAlbum)

    imprime(rep)
    imprime(fal)
}

main()