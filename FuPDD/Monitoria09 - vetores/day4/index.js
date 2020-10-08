var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas


function ordena(v){
    //algoritmo do buble sort
    for(let i=0; i<v.length; i++){
        for(let j=0;j<v.length-1; j++){
            if(v[j]> v[j+1]){
                //troca
                let aux = v[j]
                v[j] = v[j+1]
                v[j+1] = aux
            }
        }
    }
    //return v
}

function recebeVec(n){
    let vec = []
    for(let i=0;i<n;i++){
        let aux = Number(getline())
        vec.push(aux)
    }
    return vec
}


function main(){
    let n = Number(getline())
    let v = recebeVec(n)
    // console.log(v)

    ordena(v)
    for(let i=0;i<n;i++)
        console.log(v[i])
    


}

main()

