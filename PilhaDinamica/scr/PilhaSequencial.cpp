#include "PilhaSequencial.h"

PilhaSequencial::PilhaSequencial(int tamanho) {
    this->tamMax = tamanho;
    this->topo = -1;
    this->dados = new int[tamMax];
}
    
bool PilhaSequencial::vazia() {
    if (topo == -1) return true;
    else return false;
}

bool PilhaSequencial::cheia() {
    if (topo == tamMax-1) return true;
    else return false;
}

bool PilhaSequencial::push(int elemento) {
    if (cheia()) return false;

    topo++;
    dados[topo] = elemento;

    return true;
}

int PilhaSequencial::tamPilha() {
    return topo+1;
}

int PilhaSequencial::top() {
    if(vazia()) return -1;

    return dados[topo];
}

int PilhaSequencial::pop() {
    if (vazia()) return -1;

    int valor = dados[topo];
    topo--;

    return valor;
}