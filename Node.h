#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Node {

    private:
        
        int id; 
        vector<int> vizinhos;        
        bool terminal;
       // bool visitado;
        bool naSolucao;
         
    public:
        
        Node();
        Node( int nodeId);
        int getId();
        bool getTerminal();
        vector<int> getVizinhos();
        void setId(int nodeId);
        void setVizinhos(vector<int> nodesId);
        void addVizinhos(int id);
        void setTerminal(bool t);
        void setNaSolucao(bool s);
        bool getNaSolucao();
        
      
        
};

#endif
