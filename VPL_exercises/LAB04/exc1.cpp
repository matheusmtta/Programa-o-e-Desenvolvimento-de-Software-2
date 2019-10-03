#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

	int n, solucao;
	string sequencia;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> sequencia;
		if (sequencia[0] == sequencia[2])
			solucao = ((int)(sequencia[0])-48) * ((int)(sequencia[2])-48);
    else if (sequencia[1] <= 122 && sequencia[1] >=97)
			solucao = ((int)(sequencia[0])-48) + ((int)(sequencia[2])-48);
		else
			solucao = ((int)(sequencia[2])-48) - ((int)(sequencia[0])-48);
		cout << solucao << endl;
	}
	return 0;
}
