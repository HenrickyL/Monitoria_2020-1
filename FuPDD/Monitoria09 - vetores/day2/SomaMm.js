// fs = require("fs"); //biblioteca padrao do NODE
// let __lines = fs.readFileSync(0).toString().split("\n");
// let getline = () => __lines.shift();


function somaMm(vet){
    
    //[1] M=1 m=1
    //[5,3,7,1,8,2] >> M=8 m=1
    let M = vet[0]
    let m = vet[0]

    for(let i=0; i<vet.length;i++ ){
        //saber quem é o maior
        if(vet[i] > M){
            M = vet[i]
        }
        if(vet[i] < m ){
            m = vet[i]
        }

    }
    return M+m
}

function recebe(){
    let v=[]
    for(let i=0; i<5; i++){
        v.push(  Number( getline()   )  )
    }
    return v
}

function main(){
    let vec = recebe()
    let res = somaMm(vec)
    console.log(res)
}

main()