#include "Graph.h"

Graph::Graph() {
    
   
    nArestas = 0;
    nVertices = 0;
    
}

// Métodos Get
vector<Node> Graph::getNos(){
    return Nos;
}






void Graph::setNArestas(int nA){
   nArestas = nA ;
}

void Graph::setNVertices(int nV){
   nVertices = nV ;
}


void Graph::addArestas(vector<Edge> arestas){
   Arestas = arestas;
}

void Graph::addNos(vector<Node> nos){
   Nos = nos;
}


void Graph::imprimeArestas(){

std::vector<std::string> cores = {
        "[color=red]", "[color=green]", "[color=blue]", "[color=orange]", "[color=purple]",
        "[color=pink]", "[color=brown]", "[color=yellow]", "[color=cyan]", "[color=lime]",
        "[color=maroon]", "[color=darkgreen]", "[color=navy]", "[color=darkorange]", "[color=indigo]",
        "[color=hotpink]", "[color=saddlebrown]", "[color=gold]", "[color=aqua]", "[color=springgreen]",
        "[color=firebrick]", "[color=forestgreen]", "[color=midnightblue]", "[color=darkgoldenrod]", "[color=mediumorchid]",
        "[color=lightpink]", "[color=sienna]", "[color=khaki]", "[color=deepskyblue]", "[color=chartreuse]",
        "[color=crimson]", "[color=limegreen]", "[color=royalblue]", "[color=darkred]", "[color=darkolivegreen]",
        "[color=mediumslateblue]", "[color=peru]", "[color=olive]", "[color=dodgerblue]", "[color=mediumseagreen]",
        "[color=orangered]", "[color=mediumvioletred]", "[color=darkslategray]", "[color=steelblue]", "[color=seagreen]",
        "[color=coral]", "[color=darkcyan]", "[color=darkmagenta]", "[color=darksalmon]", "[color=darkseagreen]",
        "[color=darkturquoise]", "[color=deepskyblue]", "[color=dimgray]", "[color=firebrick]", "[color=forestgreen]",
        "[color=fuchsia]", "[color=gold]", "[color=goldenrod]", "[color=gray]", "[color=greenyellow]",
        "[color=hotpink]", "[color=indianred]", "[color=indigo]", "[color=khaki]", "[color=lawngreen]",
        "[color=lightblue]", "[color=lightcoral]", "[color=lightgreen]", "[color=lightgrey]", "[color=lightseagreen]",
        "[color=lightskyblue]", "[color=lightslategray]", "[color=lightsteelblue]", "[color=limegreen]", "[color=magenta]",
        "[color=mediumaquamarine]", "[color=mediumblue]", "[color=mediumorchid]", "[color=mediumpurple]", "[color=mediumseagreen]",
        "[color=mediumslateblue]", "[color=mediumspringgreen]", "[color=mediumturquoise]", "[color=mediumvioletred]", "[color=midnightblue]",
        "[color=mintcream]", "[color=orangered]", "[color=palegoldenrod]", "[color=palegreen]", "[color=paleturquoise]",
        "[color=palevioletred]", "[color=peru]", "[color=pink]", "[color=plum]", "[color=powderblue]",
        "[color=rosybrown]", "[color=royalblue]", "[color=salmon]", "[color=sandybrown]", "[color=seagreen]",
        "[color=sienna]", "[color=silver]", "[color=skyblue]", "[color=slateblue]", "[color=slategray]",
        "[color=springgreen]", "[color=steelblue]", "[color=tan]", "[color=thistle]", "[color=tomato]",
        "[color=turquoise]", "[color=violet]", "[color=wheat]", "[color=yellowgreen]"
    };
cout<<"Vetor cores criado"<<endl;
for(auto e:Arestas){

//cout<<"iter..."<<endl;

cout<<e.i<<" -- "<<e.j<<" "<<cores.at(e.cor-1)<< endl;


}
cout<<"# Terminais:"<<endl;
for(auto v: Nos){


if(v.getTerminal())
    cout<<v.getId()<<" [shape=box, color=red];"<<endl;


}





}




Graph Graph::solucao(float alpha){


}

