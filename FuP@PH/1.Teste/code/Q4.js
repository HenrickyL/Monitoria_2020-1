A=1
B=1
C=3
//verificar par: A%2==0
if(A%2==0 && B%2==0 && C%2==0){ //ter 3 pares
    console.log("3 pares")
}else if((A%2==0&& B%2==0)||(B%2==0 && C%2==0)||(A%2==0 && C%2==0)){ //ter 2 pares
    console.log("2 pares")
}else if(A%2==0 || B%2==0 || C%2==0){ //ter 1
    console.log("1 par")
}else{ //ter 0
    console.log("0 pares")
}