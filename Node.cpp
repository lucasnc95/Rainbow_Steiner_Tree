#include "Node.h"

Node::Node(){
    
    id = 0;
    terminal = false;
    naSolucao = false;
}

Node::Node( int nodeId ){
    
    id = nodeId;
    terminal = false;
    naSolucao = false;
    
}

// Métodos Get


int Node::getId(){
    
    return id;
}





// Métodos set

void Node::setId(int nodeId){
     id = nodeId;
}

void Node::setVizinhos(vector<int> nodesId){
     vizinhos = nodesId;
}

void Node::addVizinhos(int id){

vizinhos.push_back(id);

}

vector<int> Node::getVizinhos(){
     return vizinhos;
}


void Node::setTerminal(bool t){
     terminal = t;
}

bool Node::getTerminal(){


return terminal;


}


void Node::setNaSolucao(bool s){
     naSolucao = s;
}


bool Node::getNaSolucao(){


return naSolucao;


}