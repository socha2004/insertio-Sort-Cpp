#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	
	int cont,i, j, aux;
	const int tam = 5;
	int vetor[tam];
	
	// Inser��o de dados no vetor
	for(cont = 0;cont<tam;cont++){
		cout << "Digite um numero: " << endl;
		cin >> vetor[cont];
	}
	
	// Ordena��o do vetor
	for(i=1;i < tam; i++){
		aux = vetor[i];
		j = i - 1;
		
		while((j >= 0) && (aux < vetor[j])){
			vetor[j+1] = vetor[j]; // aqui se faz a troca de posi��es.
			j--;
		}
		vetor[j+1] = aux; // o menor valor � armazenado no in�cio do vetor.
	}
	
	// Exibi��o do vetor
	for(cont=0;cont<tam;cont++){
		cout << vetor[cont] << ",";
	}
	

	system("PAUSE");
	return 0;
}
