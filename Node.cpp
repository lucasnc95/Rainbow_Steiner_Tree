#include "Node.h"

Node::Node(){
    
    id = 0;
    terminal = false;
}

Node::Node( int nodeId ){
    
    id = nodeId;
    terminal = false;
    
    
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