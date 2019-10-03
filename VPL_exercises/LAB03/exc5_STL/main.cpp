#include <string>
#include <iostream>
#include <map>
#include <iomanip>


int main(){
  std::string linha;
  std::map<std::string, int> contagem;
  std::string termo;
  int words = 0;
  std::cout.precision(2);

  while (std::getline(std::cin, linha)) {
    std::istringstream linha_stream(linha);
    while (std::getline(linha_stream, termo, ' ')) {
      if(contagem.count(termo) == 0){
        contagem[termo] = 0;
      }
      contagem[termo]+=1;
      words++;
    }
  }

  for (std::pair<std::string, int> pair : contagem){
    std::cout << pair.first << " " << pair.second << " ";
    float per = pair.second/words;
    std::cout << per;
    std::cout << std::endl;
  }

  return 0;
}
