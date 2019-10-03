struct node_t{
  int elemento;
  node_t *proximo;
  node_t *anterior;
};

struct ListaEncadeada{
  node_t *_inicio;
  node_t *_fim;
  int _numero_de_elementos;

  ListaEncadeada();
  ~ListaEncadeada();

  //insert an element in the last position
  //of the sequence of numbers
  void insere_elemento(int elemento);
  //get the ith element in the list
  int get_iesimo(int i);
  //find consecutive equal numbers
  //and remove them
  void remove_consecutivos();
  void imprimir();
};
