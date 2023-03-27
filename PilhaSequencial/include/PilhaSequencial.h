#include <iostream>
using namespace std;

class PilhaSequencial {
    int tamMax;
    int topo;
    int *dados;
public:
    PilhaSequencial(int tamanho);
    bool vazia(); // verifica se a pilha está vazia
    bool cheia(); // verifica se a pilha está cheia
    bool push(int elemento); // insere um elemento no topo da pilha
    int tamLista(); // retorna o tamanho da pilha
    int top(); // retorna o elemento do topo da pilha
    int pop(); // remove e imprime o elemento do topo da pilha
};