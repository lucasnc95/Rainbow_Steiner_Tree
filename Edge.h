#ifndef EDGE_H
#define EDGE_H
#include <iostream>
#include <vector>
#include <cmath>
#include "Node.h"

using namespace std;
class Edge {

    
   public:  

        int id;         //variavel que identifica a id da aresta
        int cor;
        int i, j;
        int peso;
        float pontos;
         
    
        Edge();
        Edge( int id, int i, int j, int peso, int cor);

        // Métodos Get
       
        int getId();
        

        // Métodos Set
        
        void setId(int nodeId);
        void setPontos(float p);
        float getPontos();
        int getPeso();
        
      
        
};

#endif
