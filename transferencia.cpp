#include <iostream>
#include <istream>
#include <iomanip>
#include "transferencia.h"
using namespace std;


Transferencia::Transferencia() {
	cotacao = 0;
	real = 0;
	resultado = 0;
	
}
void Transferencia::pegaCotacao(double cotacao_) {
	cotacao = cotacao_;
}
void Transferencia::pegaReal(double real_) {
	real = real_;
}
void Transferencia::conversao(double real, double dolar) {
	resultado = real/dolar;
	cout << endl << "You are going to receive: CAD$ "<< fixed << setprecision(2) << resultado << " DOLLARS\n";
}

void Transferencia::pause() {
	cout << "(Press Enter to Continue...) ";
	cin.ignore(1000, '\n');
	cin.ignore(1000, '\n');
/*	string line;
	while(true) {
		cout << "(Press Enter to Continue...) ";
		cin.ignore(1000, '\n');
		getline(cin, line);

		if(line == "")
			break;
	}*/
}