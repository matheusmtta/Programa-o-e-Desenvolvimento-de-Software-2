#include "listaencadeada.h"
#include <iostream>
#include <math.h>

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

bool ListaEncadeada::checa_palindromo(){
  int k=0;
  node_t *atualA = _inicio;
  node_t *atualB = _fim;
  k = ceil(_numero_de_elementos/2);
  while(k > 0){
    if(atualA->elemento != atualB->elemento) return false;
    atualA = atualA->proximo;
    atualB = atualB->anterior;
    k--;
  }
  return true;
}

void ListaEncadeada::remover_iesimo(int i) {
  if (i >= _numero_de_elementos) {
    return;
  }
  node_t *atual = _inicio;
  for (int j = 0; j < i; j++)
    atual = atual->proximo;
  if (atual->proximo != nullptr)
    atual->proximo->anterior = atual->anterior;
  if (atual->anterior != nullptr)
    atual->anterior->proximo = atual->proximo;
  if (i == 0)
    _inicio = atual->proximo;
  if (i == _numero_de_elementos - 1)
    _fim = atual->anterior;
  _numero_de_elementos--;
  delete atual;
}

void ListaEncadeada::imprimir(){
  node_t *atual = _inicio;
  while(atual != nullptr){
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
