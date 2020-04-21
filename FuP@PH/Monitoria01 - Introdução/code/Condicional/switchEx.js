/*
    Exemplo de Switch

Você pode usá-lo em menus, verificar teclas, ....

é util para fazer muitas comparações de forma compacta

utiliza-se o break para quebrar o switch, pq se não vai executar todos os comandos

Switch tem uma equivalência com o if else

*/
/*
 // swith no formato de if else
var L = prompt("Digite letra:")

document.write(">> ", L, "<br>")

if( L == "A"){
    document.write("Você digitou A!");
}else if(L == "B"){
    document.write("Você digitou B!");
}else if(L == "C"){
    document.write("Você digitou C!");
}else{
    document.write("Letra inválida");
}
*/





var L = prompt("Digite letra:")
document.write(">> ", L, "<br>")
switch(L){
    case "A":
        document.write("Você digitou A!");
        break; 
    case "B":
        document.write("Você digitou B!");
        break;
    case "C":
        document.write("Você digitou C!");
        break;
    default:
        document.write("Letra inválida");

}