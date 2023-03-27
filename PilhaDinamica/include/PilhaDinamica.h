#include <iostream>
#include "No.h"
using namespace std;

class PilhaDinamica {
    int tamAtual;
    No* topo;
public:
    PilhaDinamica();
    bool vazia(); // verifica se a pilha est? vazia
    bool push(int elemento); // insere um elemento no topo da pilha
    int tamPilha(); // retorna o tamanho da pilha
    int top(); // retorna o elemento no topo da pilha
    int pop(); // remove e retorna o elemento do topo da pilha
};