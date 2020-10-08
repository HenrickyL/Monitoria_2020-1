var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas



function jkp(j1,j2){
    let op= ['rock','fire','scissors','human','sponge','paper','air','water','gun']
    let posJ1, posJ2 // salvo as posiçõs relativas ao vetor 'op'
    
    //verficar as opções dos jogadores
    for(let i=0;i<op.length;i++){
        if( j1===op[i]) posJ1=i
        if(j2===op[i]) posJ2=i
    }


    //verificar quem ganhou
    if( posJ1 == posJ2  )//essa poisção ganha das proximas 4
        return 'empate'
        //condição para o jogador 1 ganhar
    else if(  posJ2 == (posJ1+1)%9 || posJ2 == (posJ1+2)%9 || 
        posJ2 == (posJ1+3)%9 || posJ2 == (posJ1+4)%9)
        return 'jog1'
    else
        return 'jog2'


}




function main(){
    let jg1= getline()
    let jg2=getline()
    let win = jkp(jg1,jg2)

    console.log(win)
}

main()