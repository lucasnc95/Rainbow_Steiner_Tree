#include "Edge.h"



Edge::Edge(){


id = 0;
cor = 0;
peso = 0;
i = 0;
j = 0;


}


Edge::Edge(int idA, int iA, int jA, int pesoA, int corA  ){


id = idA;
cor = corA;
peso = pesoA;
i = iA;
j = jA;


}

void Edge::setPontos(float p){

pontos = p;


}


float Edge::getPontos(){

return pontos;


}

int Edge::getPeso(){

return peso;


}