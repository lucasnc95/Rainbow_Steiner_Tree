#include<iostream>
#include<list>
#include<vector>
#include<fstream>
#include <time.h>
#include <chrono>
#include <math.h>
#include <algorithm>
#include "Graph.h"
#include "Node.h"
#include "Edge.h"


using namespace std;
using namespace std::chrono;



Graph leitura(int selecionar){
    ifstream leitor;


    switch (selecionar) // Algumas instâncias escolhidas para testes
    {
        case  0:
            leitor.open("b02.stp");
            break;
        case  1:
            leitor.open("b10.stp");
            break;
        case  2:
            leitor.open("b15.stp");
            break;
        case  3:
            leitor.open("i080-002.stp");
            break;
        case  4:
            leitor.open("i080-012.stp");
            break;
        case  5:            
            leitor.open("i080-021.stp");            
            break;
        case  6:
            leitor.open("p403.stp");
            break;
        case  7:
            leitor.open("p407.stp");
            break;
        case  8:
            leitor.open("p408.stp");
            break;
        case  9:
            leitor.open("p410.stp");
            break;
        
        default:
            break;
    }

    string linha;
    Graph *g = new Graph;
    
    for(int i = 1; i < 10; i++)
    getline(leitor,linha);

    int nVertices;
    int nArestas;
    string auxiliar;
    
    leitor >> auxiliar ;
    leitor >> nVertices;
    
    getline(leitor,linha);
    leitor >> auxiliar ;
    leitor >> nArestas;
    cout<<nVertices<<" "<<nArestas<<endl;
    g->setNArestas(nArestas);
    g->setNVertices(nVertices);

    getline(leitor,linha);

    int auxI, auxJ, auxP, auxC;
    vector<Edge> auxArestas;
    

    for(int j = 1; j <= nArestas; j++){
    
    leitor >> auxiliar;
    leitor >> auxI;
    leitor >> auxJ;
    leitor >> auxP;
    leitor >> auxC;
    Edge *e = new Edge(j, auxI, auxJ, auxP, auxC);
    
   auxArestas.emplace_back(*e);
   
    delete e;
    
    }
    vector<Node> auxVertices;
    
    
    for(int k = 1; k <=nVertices; k++){
    
    Node n(k);
    auxVertices.push_back(n);
    
    }
    
    int nTerminais;

    for(int l = 0; l <4; l++)
    getline(leitor,linha);

    leitor >> auxiliar;
    leitor >> nTerminais;

    for(int m = 0; m < nTerminais; m++){
     int t;   
     leitor >> auxiliar;
     leitor >> t;
     auxVertices.at(t- 1).setTerminal(true);



    }
    
    for(auto e : auxArestas){
        int i = e.i -1;
        int j = e.j -1;
       
        auxVertices.at(i).addVizinhos(j);
        auxVertices.at(j).addVizinhos(i);
    
    }
    

    g->addArestas(auxArestas);
    g->addNos(auxVertices);
    g->setTerminais(nTerminais);
    cout<<"Grafo criado"<<endl;
    return *g;
}











int main(){

   auto startTime = std::chrono::high_resolution_clock::now();
    Graph *g = new Graph; *g = leitura(0); // chama a função para a instância x
     // g->imprimeArestas();
     // g->criarArquivoDot("grafo.dot");
  
    
    g->solucao(0.2);
    cout<<endl;
   
    
     auto endTime = std::chrono::high_resolution_clock::now();

    // Calcula a diferença de tempo
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);

    // Imprime o tempo de execução
    std::cout << "Tempo de execucao: " << duration.count() << " segundos" << std::endl;
  


     delete g;
}






    
   