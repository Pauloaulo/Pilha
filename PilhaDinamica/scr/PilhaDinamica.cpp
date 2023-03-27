#include "PilhaDinamica.h"

PilhaDinamica::PilhaDinamica() {
    this->tamAtual = 0;
    this->topo = NULL;
}
    
bool PilhaDinamica::vazia() {
    if (tamAtual == 0) return true;
    else return false;
}

bool PilhaDinamica::push(int elemento) {
    No* novoNo = new No();
    novoNo->setConteudo(elemento);

    novoNo->setProx(topo);

    topo = novoNo;
    tamAtual++;
    return true;
}

int PilhaDinamica::tamPilha() {
    return tamAtual;
}

int PilhaDinamica::top() {
    if (vazia()) return -1;

    return topo->getConteudo();
}

int PilhaDinamica::pop() {
    if (vazia()) return -1;

    No* p = topo;
    int valor = p->getConteudo();

    topo = p->getProx();
    tamAtual--;

    delete p;
    return valor;
}