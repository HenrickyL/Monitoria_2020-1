//Cabeçalho - header - definição

//previnir redeclaração
#ifndef CIRCULO_H
#define CIRCULO_H

//em classe chamamos variaveis de atributos, e funções de métodos
struct ponto{
    int x;
    int y;
};

class circulo{
private:
    ponto *_p;
    float _raio;
    bool v=true;
public:
    // serve para inicializar variaveis, alocações
    circulo(ponto *p, int raio); //construtor
    // desaloca o que foi alocado
    ~circulo();//destrutor
    //sobreCarga
    circulo(int raio);

public:
    // printa as informações do circulo
    void printa();


public: //getter e setter
    //atribui novo valor ao raio do cı́rculo
    void setRaio(float r);
    //atribui novo valor à coordenada x
    void setX(float x);
    //atribui novo valor à coordenada y
    void setY(float y);
    ////
    //obtém o raio
    float getRaio();
    //obtém o centro
    ponto* getCentro();
};



#endif
