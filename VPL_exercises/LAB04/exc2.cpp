#include <iostream>
#include <map>

using namespace std;

int main(){
  int n, m;
	char l;
  cin >> n;
	map<int, int> pe_esquerdo;
	map<int, int> pe_direito;
	map<int, int>::iterator it;
  int numero_de_pares_corretos=0;

	for (int i = 0; i<n; i++){
		cin >> m >> l;
		if (l == 'E')
			pe_esquerdo[m]++;
    else pe_direito[m]++;
	}

  for (it=pe_esquerdo.begin(); it!=pe_esquerdo.end(); it++){
    if (pe_direito[it->first] > 0){
      numero_de_pares_corretos+= min(pe_direito[it->first], it->first);
    }
  }

	cout << numero_de_pares_corretos;

  return 0;
}
