#include "consec.h"
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

void ListaEncadeada::remove_consecutivos(){
  node_t *atual = _inicio;
  node_t *aux;
  while(atual->proximo != nullptr){
    if (atual->proximo->elemento == atual->elemento){
      aux = atual->proximo;
      atual->proximo = aux->proximo;
      aux->proximo->anterior = atual;
      delete aux;
    }
    atual = atual->proximo;
    if (atual->elemento == atual->anterior->elemento){
      node_t *aux = atual->anterior;
      atual->anterior = aux->anterior;
      aux->anterior->proximo = atual;
      delete aux;
    }
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
