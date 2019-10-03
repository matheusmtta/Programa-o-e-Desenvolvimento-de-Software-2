#include <iostream>
#include "consec.h"

int main(){
  ListaEncadeada lista; //chamando lista via construtor vazio
  lista.insere_elemento(1);
  lista.insere_elemento(1);
  lista.insere_elemento(2);
  lista.insere_elemento(1);
  lista.insere_elemento(2);
  lista.insere_elemento(2);
  lista.insere_elemento(3);
  lista.insere_elemento(1);
  lista.insere_elemento(3);
  lista.insere_elemento(3);
  lista.insere_elemento(3);
  lista.insere_elemento(2);

  lista.imprimir();
  lista.remove_consecutivos();
  lista.imprimir();

  return 0;
}
