#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>


using namespace std;

class Graph {
    
    public:    
        int nVertices;          //numero de vertices
        int nArestas;           // numero de arestas
        int *grau;              // grau dos nós do grafo    
        vector<Node> Nos;       //vetor que armazena os nos do grafo
	vector<Edge> Arestas;   // Vetor de arestas         

    

        Graph(); // Construtor padrão
        vector<Node> getNos();
        void setNArestas(int nA);
        void setNVertices(int nV);
        void addArestas(vector<Edge> arestas);
        void addNos(vector<Node> nos);
        void imprimeArestas();
        void imprimeVizinhos();
        Graph solucao(float alpha);
        


        
        
};

#endif
