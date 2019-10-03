#include <iostream>

#include "listaencadeada.h"

ListaEncadeada::ListaEncadeada() {
  _inicio = nullptr;
  _fim = nullptr;
  _num_elementos_inseridos = 0;
}

ListaEncadeada::~ListaEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = _inicio;
  while (proximo != nullptr) {
    anterior = proximo;
    proximo = proximo->proximo;
    delete anterior;
  }
}

void ListaEncadeada::insere_primeiro(int elemento){
  node_t *novo = new node_t;
  if (_inicio == nullptr){
    _inicio = novo;
    _fim = novo;
  }
  else{
    novo->anterior = nullptr;
    novo->elemento = elemento;
    novo->proximo = _inicio;
    _inicio->anterior = novo;
    _inicio = novo;
  }
  _num_elementos_inseridos++;
}

//insere elemento na última posição da lista
void ListaEncadeada::insere_elemento(int elemento) {
  node_t *novo = new node_t();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  novo->anterior = nullptr;
  if (_inicio == nullptr) {
    _inicio = novo;
    _fim = novo;
  }
  else {
    _fim->proximo = novo;
    novo->anterior = _fim;
    _fim = novo;
  }
  _num_elementos_inseridos++;
}

void ListaEncadeada::remover_iesimo(int i) {
  if (i >= _num_elementos_inseridos) {
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
  if (i == _num_elementos_inseridos - 1)
    _fim = atual->anterior;
  _num_elementos_inseridos--;
  delete atual;
}

void ListaEncadeada::imprimir() {
  node_t *atual = _inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}

int ListaEncadeada::tamanho(){
  return _num_elementos_inseridos;
}

int ListaEncadeada::get_iesimo(int i){
  if (i > _num_elementos_inseridos) return 0;
  node_t *atual = _inicio;
  for (int j = 0; j < i; j++){
    atual = atual->proximo;
  }
  return atual->elemento;
}

void ListaEncadeada::remover_elemento(){
  node_t *atual = _fim;
  _fim = atual->anterior;
  atual->anterior->proximo = nullptr;
  atual->anterior = nullptr;
  //_fim = atual->anterior;
  delete atual;
  _num_elementos_inseridos--;
}

void ListaEncadeada::remover_primeiro(){
  node_t *atual = _inicio;
  _inicio = atual->proximo;
  atual->proximo->anterior = nullptr;
  atual->proximo = nullptr;
  delete atual;
  _num_elementos_inseridos--;
}

void ListaEncadeada::inserir_iesimo(int elemento, int i){
  node_t *novo = new node_t();
  node_t *atual = _inicio;
  novo->proximo = nullptr;
  novo->anterior = nullptr;
  novo->elemento = elemento;
  for(int j = 0; j < i-1; j++) atual = atual->proximo;
  novo->proximo = atual->proximo;
  novo->anterior = atual;
  atual->proximo->anterior = novo;
  atual->proximo = novo;
  _num_elementos_inseridos++;
}
