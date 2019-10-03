#include "listaencadeada.h"
#include <iostream>

ListaEncadeada::ListaEncadeada(){
  _inicio = nullptr;
  _fim = nullptr;
  _numero_de_elementos = 0;
}

ListaEncadeada::~ListaEncadeada(){
  node_t *anterior = nullptr;
  node_t *proximo = _inicio;
  while(proximo != nullptr){
    anterior = proximo;
    proximo = proximo->proximo;
  }
  delete anterior;
}

void ListaEncadeada::insere_elemento(int elemento){
  node_t *novo = new node_t();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  novo->anterior = nullptr;
  if (_inicio == nullptr){
    _inicio = novo;
    _fim = novo;
  }
  else{
    _fim->proximo = novo;
    novo->anterior = _fim;
    _fim = novo;
  }
  _numero_de_elementos++;
}

int ListaEncadeada::get_iesimo(int i){
  node_t *atual = _inicio;
  for (int j = 0; j < i; j++){
    atual = atual->proximo;
  }
  return atual->elemento;
}

void ListaEncadeada::k_esimo(bool num, int k){
  if (num){
    node_t *atual = _inicio;
    for (int i = 0; i < k; i++){
      atual = atual->proximo;
    }
    return atual->elemento;
  }
  else if (!num){
    node_t *atual = _fim;
    while(k > 0){
      atual = atual->anterior;
      k--;
    }
    return atual->elemento;
  }
}

void ListaEncadeada::imprimir(){
  node_t *atual = _inicio;
  while(atual != nullptr){
    std::cout << atual->elemento << std::endl;
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
