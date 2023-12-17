#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
#include <omp.h>
#include<random>

using namespace std;

class Graph {
    
    public:    
        int nVertices;          //numero de vertices
        int nArestas;           // numero de arestas
        int *grau;              // grau dos nós do grafo    
        vector<Node> Nos;       //vetor que armazena os nos do grafo
	vector<Edge> Arestas;   // Vetor de arestas    
        std::vector<std::pair<int, int>> mapaCores;   //mapa de cores
        int nCores;  
        int terminais;

    

        Graph(); // Construtor padrão
        vector<Node> getNos();
        void setNArestas(int nA);
        void setNVertices(int nV);
        void addArestas(vector<Edge> arestas);
        void addNos(vector<Node> nos);
        void imprimeArestas();
        void imprimeVizinhos();
        void inicializarMapaCores();
        Graph solucao(float alpha);
        void criarArquivoDot(const std::string& nomeArquivo);
        void preProcessamento();
        void setTerminais(int ter);

        // algoritmo genetico
        void DFS(int node, vector<vector<int>>& graph, vector<bool>& visited);
        int countConnectedComponents(vector<vector<int>>& graph);
        double fitness(const std::vector<int>& individual);
        std::vector<std::vector<int>> initializePopulation(int populationSize, int vectorSize);
        std::vector<int> crossover(const std::vector<int>& parent1, const std::vector<int>& parent2);
        void mutate(std::vector<int>& individual, double mutationRate);
        std::vector<int> geneticAlgorithm(const std::vector<int>& inputVector, int populationSize, int generations, double mutationRate);
        int countCycles(const std::vector<std::vector<int>>& adjMatrix);
        vector<vector<int>> createAdjacencyMatrix(vector<int> edges);
        void dfs(int v, const vector<vector<int>>& adjMatrix, vector<int>& visited) ;
        void dfs2(int v, const vector<vector<int>>& adjMatrix, vector<int>& visited, int component);
        bool isConnected(const vector<vector<int>>& adjMatrix) ;
        std::vector<int> populationConstructive(double alpha);
        int countConnectedComponents(const vector<vector<int>>& adjMatrix);
        bool hasEdges(const vector<int>& row);
        
};

#endif
