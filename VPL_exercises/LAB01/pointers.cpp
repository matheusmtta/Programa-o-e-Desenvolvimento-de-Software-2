#include <iostream>

int main(){
    long value1=200000;
    long value2;

    long *ptr;

    ptr = &value1;
    //imprima o valor do objeto apontado por long_ptr
    std::cout << *ptr << " ";
    //Imprima o valor de value2
    value2 = value1;
    std::cout << value2 << " ";
    //Imprima o endereço de value1
    std::cout << &value1 << " ";
    //Imprima o endereço armazenado em long_ptr
    std::cout << ptr << " ";
    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    std::cout << (&value1 == ptr) << " ";
    //imprimir os elementos do array values usando notação de array subscrito.
    unsigned int values[] = {2, 4, 6, 8, 10};
    unsigned int *v_ptr;
    v_ptr = &values[0];

    for (int i = 0; i < 5; i++) {
      std::cout << values[i] << " ";
    }
    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    for (int i = 0; i < 5; i++) {
      std::cout << *(v_ptr+i) << " ";
    }
    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    for (int i = 0; i < 5; i++) {
      std::cout << *(v_ptr+i) << " ";
    }
    //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    for (int i = 0; i < 5; i++) {
      std::cout << v_ptr[i] << " ";
    }
    //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    std:: cout << values[4] << " ";
    //a notação de ponteiro/deslocamento com o nome de array como o ponteiro,
    std:: cout << *(v_ptr+4) << " ";
    //a notação de subscrito de ponteiro,
    std:: cout << v_ptr[4] << " ";
    //a notação de ponteiro/deslocamento.
    std:: cout << *(v_ptr+4) << " ";
    std::cout << (v_ptr+3) << " " << *(v_ptr+3) << " ";
    //imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
    std:: cout << (v_ptr-4) << " " << values[0] << " ";

    return 0;
}
