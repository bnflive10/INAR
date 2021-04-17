
typedef struct grafo Grafo;

//criando um grafo
Grafo* cria_grafo(int nro_vertices, int grau_max, int eh_ponderado);

void libera_grafo(Grafo* gr);

int insereAresta(Grafo* gr,int orig,int dest, int eh_digrafo, float peso);

int removeAresta(Grafo* gr,int orig,int dest, int eh_digrafo);
