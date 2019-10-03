#include <iostream>
#include "listaencadeada.h"

int main(){
    std::cout << "Use o main para testar seu código" << std::endl;
    ListaEncadeada lista;     // chamando lista via construtor vazio
    lista.insere_elemento(4);
    lista.insere_elemento(5);
    lista.insere_elemento(3);
    lista.imprimir();
    lista.inserir_iesimo(4, 1);
    int elemento = lista.get_iesimo(1);
    lista.imprimir();
    std::cout << elemento << std::endl;
    return 0;
}

//ListaEncadeada();
//~ListaEncadeada();
//void insere_elemento(int elemento); //. Insere um elemento no fim da lista.
//void insere_primeiro(int elemento); //. Insere um elemento no inicio da lista.
//void get_iesimo(int i); //. Retorna um elemento na posição i.
//void remover_elemento(); //. Remove um elemento no fim da lista.
//void remover_primeiro(); //. Remove o primeiro elemento da lista.
//void inserir_iesimo(int elemento, int i); //. Insere um elemento na posicão i.
//void remover_iesimo(int i); //Remove um elemento na posição i
//int tamanho(); //Retorna o tamanho da lista.
