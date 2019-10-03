#include <iostream>
#include "listaencadeada.h"

int main(){
  ListaEncadeada lista; //chamando lista via construtor vazio
  lista.insere_elemento(1);
  lista.insere_elemento(2);
  lista.insere_elemento(3);
  lista.insere_elemento(4);
  lista.insere_elemento(3);
  lista.insere_elemento(2);
  lista.insere_elemento(1);
  lista.imprimir();

  std::cout << lista.checa_palindromo() << std::endl;

  lista.remover_iesimo(3);
  lista.imprimir();
  std::cout << lista.checa_palindromo() << std::endl;

  //removendo os dois elementos com valor 3 e lista continua sendo um palíndromo
  lista.remover_iesimo(2);
  lista.remover_iesimo(2);
  lista.imprimir();
  std::cout << lista.checa_palindromo() << std::endl;

  //inserindo elemento pra que lista deixe de ser um palíndromo
  lista.insere_elemento(4);
  lista.imprimir();
  std::cout << lista.checa_palindromo() << std::endl;

  return 0;
}
