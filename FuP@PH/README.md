
## Introdução JavaScript

*JavaScript é uma linguagem de programação que permite **implementar funcionalidades mais complexas em páginas web**. Sempre que uma página web faz **mais do que** apenas mostrar **informações estáticas** para você - ela mostra em tempo real conteúdos atualizados, mapas interativos, animações gráficas em 2D/3D, vídeos, etc. -  você pode apostar que o Javascript provavelmente está envolvido.*


* Em web temos 3 ramos principais, e por trás deles as seguintes linguagens:
    * **Conteúdo:** HTML
    * **Estilo ou Aparência:** CSS
    * **Interatividade:** JavaScript


* JavaScript é uma linguagem interpretada

- **Tipos de Dados:**
    * **Number:** encloba int e o float, ou seja todo tipo numérico
    * **String:** engloba char e o string, logo todo tipo texto.
    * **Boolean:** tipo verdadeiro ou falso.

- **Fundamentos:**
    - [ ] **Comentários**
    ~~~javascript 
    // comentário de linha
    /*
        comentário de bloco
    */
    ~~~
    - [ ] **Entrada* e saída de dados**
    ~~~javascript 
    //saída
    console.log("Hello world!")
    //entrada (HTML)
    var x = prompt("texto") // caixa de entrada com texto padrão
    // saída (HTML)
    alert("texto",x)
        //ou
    document.write("texto",x)
    ~~~
    - [ ] **Estrutura de decisão**
        * Controle de fluxo
    ~~~javascript 
    // condicional
    if(condition1){ // Se (Condição)
        //bloco de codigo
    }else if(condition2){ //senão se (condição)
        // bloco de codigo
    }else{ // Senão
        //bloco de codigo
    }
    //Switch case
    int var; // precisa de uma variável para comparar com os casos
    switch(var){
        case compara_com1:
            //bloco de código
            break;
        case compara_com2:
            //bloco de código
            break;
        default:
            //bloco de código      
    }
    ~~~
    - [ ] **Repeticão**
        * Loop Infinito
~~~javascript
//Enquanto ( condição )
while(condition){
    //bloco de código
}
//Para
var i;
for( atribuição; condição; interação){
    //bloco de código
}
~~~

    - [ ] **Listas e vetores**
    - [ ] Matrizes
    - [ ] Strings
    - [ ] Funções

**OBS:** JavaScript $\neq$ Java

### Links
- [Repositório GitHub](https://github.com/HenrickyL/Monitoria_2020-1/tree/master/FuP%40PH)
- [JavaScript](https://developer.mozilla.org/pt-BR/docs/Aprender/JavaScript)
