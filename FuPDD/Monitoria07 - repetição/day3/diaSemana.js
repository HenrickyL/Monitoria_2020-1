function DiaSemana(dia, mes, ano){
    let A = ano - 1900//quantos anos se passaram
    let B = parseInt(A/4)
    //bissexto para o meu ano
    if(ano%4===0 && ano%100!==0){
        //o ano sendo bissexto
        if((mes =='FEV' || mes==="JAN") && (dia <= 29)){
            B = B-1
        }
    }

    //pegar o numero correspondente do mes
    let C = calcC(mes)

    //pegar o dia
    let D = dia-1

    // console.log(A,B,C,D)
    //switch
    switch((A+B+C+D)%7){
        case 0: return 'SEG'
        case 1:return 'TER'
        case 2:return 'QUA'
        case 3:return 'QUI'
        case 4:return 'SEX'
        case 5:return 'SAB'
        case 6:return 'DOM'

    }
}

function calcC(mes){
    if(mes ==="JAN" || mes==="OUT" )
        return 0
    else if(mes === "AGO")
        return 2
    else if(mes === "MAI")
        return 1
    else if(mes == "FEV"|| mes === "MAR" || mes === "NOV")
        return 3
    else if(mes === "JUN")
        return 4
    else if(mes === "SET" || mes === "DEZ")
        return 5
    else if(mes === "ABR"||mes === "JUL")
        return 6
}


function convertMes(mes){
    switch (mes) {
        case 1: return 'JAN' 
        case 2: return 'FEV' 
        case 3: return 'MAR' 
        case 4: return 'ABR' 
        case 5: return 'MAI' 
        case 6: return 'JUN' 
        case 7: return 'JUL' 
        case 8: return 'AGO' 
        case 9: return 'SET' 
        case 10: return 'OUT' 
        case 11: return 'NOV' 
        case 12: return 'DEZ' 
    }
}


function main(){
    let dia = Number(getline())//prompt("digite o dia:"))
    let mes = Number(getline())//prompt("digite o mes('JAN'):"))
    let ano = Number(getline())//prompt("digite o ano"))

    console.log(DiaSemana(dia, convertMes(mes),ano))
}

main()