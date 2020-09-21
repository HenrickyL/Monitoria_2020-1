
function charMaiusculo(c){//converter um unico caracter para maiusculo
    //converter apenas caracteres minusculos do alfabeto: a..z
    if(c>='a' && c<='z'){//se é minusculo
        let dif = 'a'.charCodeAt() - 'A'.charCodeAt() // 32
        return String.fromCharCode(c.charCodeAt()-dif)
    }else{

        return c  
    }
}

function convMaiuscolo(texto){//converte todo um texto em maiusculo
    let Maiusculo = ''

    for(let c of texto){
        //Maiusculo = Maiusculo + c
        Maiusculo += charMaiusculo(c)
    }

    return Maiusculo
}


function main(){
    let texto = prompt('Digite algo:')
    let novoTexto = convMaiuscolo(texto)
    console.log(  novoTexto  )

}


main()