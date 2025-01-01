#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

typedef struct TarefasConcluidas TarefasConcluidas;
typedef struct TarefasOrdenadas TarefasOrdenadas;
typedef struct Alteracao Alteracao;
typedef struct TarefasDoDia TarefasDoDia;

typedef struct TAREFA{
    int id;
    char descricao[300];
    int prioridade; // 1 - Alta, 2 - Média e 3 - Baixa
    char status[20]; 
    struct TAREFA* prox;
}TAREFA;

typedef struct DataTarefa{
    char data[20];
    int cont;
    TAREFA* tarefas;
    struct DataTarefa* prox;
}DataTarefa;

void selectionSort(DataTarefa* listaData);
int comparaString(char* nomeBusca, char* nome);
void buscarTarefaNome(DataTarefa* listaData, char* nomeBusca);
void dataAtual(char* dataHoje);
void carregartarefasDoDia(DataTarefa* listaData, TarefasDoDia* fila);
int calcularId(char* data, int cont);
TAREFA* criarTarefa(char* decricao, int prioridade, char* status, int id);
DataTarefa* criarDataTarefa(char* data);
void inserirTarefa(TAREFA** lista, int id, char* status, char* descricao, int prioridade);
void inserirTarefaData(DataTarefa** listaData, char* data, char* descricao, int prioridade, char* status);
TAREFA* removerTarefa(TAREFA* lista, Alteracao* pilha, int idBusca);
DataTarefa* removerTarefaData(DataTarefa* listaData, Alteracao* pilha, int idBusca);
void editarTarefa(TAREFA* tarefa);
void buscarTarefa(DataTarefa* listaData, Alteracao* pilha, int idbusca);
void concluirTarefa(DataTarefa** listaData, TarefasConcluidas* concluidas, int id);
void imprimirTarefasPorData(DataTarefa* lista);
void liberarTarefas(TAREFA* lista);
void liberarTarefaData(DataTarefa* lista);
int verificarData(char* data);

#endif