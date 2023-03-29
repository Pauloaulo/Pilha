#include "PilhaSequencial.h"
#include <cstdlib>
#include <ctime>

int main () {
    setlocale(LC_ALL, "portuguese");

    /*
    Gera e testa todas as fun��es para uma pilha sequencial
    */
    srand(time(NULL));
    int tamanhoPilha = 10;

    cout << "Gerando pilha de tamanho 10..." << endl;
    PilhaSequencial minhaPilha(tamanhoPilha);
    if (minhaPilha.vazia()) {
        cout << "Pilha gerada com sucesso!" << endl;
    } else {
        cout << "Ocorreu um erro na cria��o da pilha!" << endl;
    }

    cout << "Preenchendo 5 posi��es da pilha..." << endl;
    for (int i = 0; i < 5; i++) {
        minhaPilha.push(rand()%10+1);
    }
    if (minhaPilha.cheia()) {
        cout << "Sua pilha foi preenchida e se encontra cheia!" << endl;
    } else {
        cout << "Ainda existem espa�os n�o ocupados na pilha!" << endl;
    }

    cout << "Agora sua pilha possui: " << minhaPilha.tamPilha() << " items." << endl;
    cout << "O item no topo �: " << minhaPilha.top() << "." << endl;
    cout << "Removendo item do topo..." << endl;
    minhaPilha.pop();
    cout << "Agora o topo da sua pilha �: " << minhaPilha.top() << "." << endl;

    return 0;
}