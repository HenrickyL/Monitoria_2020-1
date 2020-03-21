//notas
//copia o codigo


var nota = Number(getline()) //suponto, tem que fazer para todos os casos

if(0<=nota && nota<25){ // 0 - 24 
    console.log("F")
}else if(nota>=25 && nota<45){ // 25 - 44
    console.log("E")
}else if(45<=nota && nota<50){ //45 - 49
    console.log("D")
}else if(50<=nota && nota<60){ // 50 - 59
    console.log("C")
}else if(60<=nota && nota<80){// 60 - 79
    console.log("B")
}else if (nota >= 80){ //>=80
    console.log("A")
}


