#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura de um vértice
struct Vertex
{
    int id;
    struct Vertex *next;
};

// Estrutura de um grafo
struct Graph
{
    int numVertices;
    struct Vertex **adjacencyList;
};

// Função para criar um novo vértice
struct Vertex *createVertex(int id)
{
    struct Vertex *vertex = (struct Vertex *)malloc(sizeof(struct Vertex));
    vertex->id = id;
    vertex->next = NULL;
    return vertex;
}

// Função para criar um novo grafo
struct Graph *createGraph(int numVertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->adjacencyList = (struct Vertex **)malloc(numVertices * sizeof(struct Vertex *));

    int i;
    for (i = 0; i < numVertices; i++)
    {
        graph->adjacencyList[i] = NULL;
    }

    return graph;
}

// Função para adicionar uma aresta entre dois vértices
void addEdge(struct Graph *graph, int src, int dest)
{
    // Adiciona a aresta de src para dest
    struct Vertex *vertex = createVertex(dest);
    vertex->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = vertex;

    // Adiciona a aresta de dest para src (grafo não direcionado)
    vertex = createVertex(src);
    vertex->next = graph->adjacencyList[dest];
    graph->adjacencyList[dest] = vertex;
}
//===========================================FIM DA CRAIÇÃO DO LABIRINTO===========================================//

int consequencia(char comando, int rotacao, int posicao, struct Graph *graph)
{
    int sensor;

    switch (comando)
    {
    case 'l':
        if (rotacao == 0)
        {
            rotacao = 3;
            return rotacao;
        }

        else
        {
            rotacao--;
            return rotacao;
        }
        break;

    case 'r':
        if (rotacao == 3)
        {
            rotacao = 0;
            return rotacao;
        }

        else
        {
            rotacao++;
            return rotacao;
        }

    case 's':
        scanf("&d", sensor);
        return sensor;

        break;

    default:
        break;
    }

    return 400;
}

void player(struct Graph *graph)
{
    int rotacao = 0;
    int posicao = 50000;
    char comando;
    int para = 1;
    int bateu = 0;
    int localiza = 0;
    int bits[4];

    while (para == 1)
    {

        //===========================================ROTACIONANDO===========================================//
        if (comando == 'l' || comando == 'r')
        {
            rotacao = concequencia(comando, rotacao, posicao, graph);
            // Teste
            printf("rotacao: %d\n", rotacao);
            printf("posicao: %d\n", posicao);
            // Teste
            scanf("%d", consequencia);
            printf("%c\n", comando);
        }
        //===========================================ANDANDO===========================================//
        else if (comando == 'm')
        {

            scanf("%d", bateu);

            if (bateu == 0)
            {
                switch (rotacao)
                {

                // olhando para frente
                case 0:
                    posicao -= 1000;
                    addEdge(graph, posicao, posicao + 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando para direita
                case 1:
                    posicao++;
                    addEdge(graph, posicao, posicao - 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra traz
                case 2:
                    posicao += 1000;
                    addEdge(graph, posicao, posicao - 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra esquerda
                case 3:
                    posicao--;
                    addEdge(graph, posicao, posicao + 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;
                }
            }

            if (bateu == 2)
            {
                switch (rotacao)
                {

                // olhando para frente
                case 0:
                    posicao -= 1000;
                    addEdge(graph, posicao, posicao + 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    para = 0;
                    break;

                // olhando para direita
                case 1:
                    posicao++;
                    addEdge(graph, posicao, posicao - 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    para = 0;
                    break;

                // olhando pra traz
                case 2:
                    posicao += 1000;
                    addEdge(graph, posicao, posicao - 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    para = 0;
                    break;

                // olhando pra esquerda
                case 3:
                    posicao--;
                    addEdge(graph, posicao, posicao + 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    para = 0;
                    break;
                }
            }

            else
            {
                // Teste
                printf("rotacao: %d\n", rotacao);
                printf("posicao: %d\n", posicao);
                // Teste
            }
        }

        //===========================================CORRENDO===========================================//
        else if (comando == 'M')
        {

            bateu = concequencia(comando, rotacao, posicao, graph);

            if (bateu == 2)
            {
                switch (rotacao)
                {

                // olhando para frente
                case 0:
                    posicao -= 1000;
                    addEdge(graph, posicao, posicao + 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando para direita
                case 1:
                    posicao++;
                    addEdge(graph, posicao, posicao - 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra traz
                case 2:
                    posicao += 1000;
                    addEdge(graph, posicao, posicao - 1000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra esquerda
                case 3:
                    posicao--;
                    addEdge(graph, posicao, posicao + 1);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;
                }
            }

            if (bateu == 3)
            {
                switch (rotacao)
                {

                // olhando para frente
                case 0:
                    posicao -= 2000;
                    addEdge(graph, posicao, posicao + 2000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando para direita
                case 1:
                    posicao += 2;
                    addEdge(graph, posicao, posicao - 2);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra traz
                case 2:
                    posicao += 2000;
                    addEdge(graph, posicao, posicao - 2000);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;

                // olhando pra esquerda
                case 3:
                    posicao -= 2;
                    addEdge(graph, posicao, posicao + 2);
                    // Teste
                    printf("rotacao: %d\n", rotacao);
                    printf("posicao: %d\n", posicao);
                    // Teste
                    break;
                }
            }

            else
            {
                // Teste
                printf("rotacao: %d\n", rotacao);
                printf("posicao: %d\n", posicao);
                // Teste
            }
        }

        //===========================================RADAR DE PAREDES===========================================//
        else if (comando == 's')
        {
            localiza = concequencia(comando, rotacao, posicao, graph);

            //Função binário
            if (localiza == 0)
            {
                printf("0");
                return;
            }
            else if (localiza == 1)
            {
                printf("1");
                return;
            }

            int i = 0;
            while (localiza > 0)
            {
                bits[i] = localiza % 2;
                localiza = localiza / 2;
                i++;
            }
            //Interpreta binário
            for(int i = 0; i < 4; i++){
                switch (i)
                {
                //Frente
                case 0:
                    if(bits[i] == 0){
                        addEdge(graph, posicao, posicao - 1000);
                    }
                    break;
                //Direita
                case 1:
                    if(bits[i] == 0){
                        addEdge(graph, posicao, posicao + 1);
                    }
                    break;
                //traz
                case 2:
                    if(bits[i] == 0){
                        addEdge(graph, posicao, posicao + 1000);
                    }
                    break;
                //Esquerda
                case 3:
                    if(bits[i] == 0){
                        addEdge(graph, posicao, posicao - 1);
                    }
                    break;
                default:
                    printf("Error");
                    break;
                }
            }

        }

        else
        {
            printf("Comando inválido\n");
        }
    }
}

int main()
{
    int numVertices = 1000000;
    struct Graph *graph = createGraph(numVertices);

    player(graph);

    return 0;
}