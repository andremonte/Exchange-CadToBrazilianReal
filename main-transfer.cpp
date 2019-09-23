#include <iostream>
#include "transferencia.h"

using namespace std;
int main(int argc, char *argv[]) {
	
	//variables
		double entrada;
		double real;
		bool continuee = true;
		string answer;
		
		while (continuee) {
			cout << "What is the current exchange rate?" << endl << "> Cad$ ";
			cin >> entrada;
			cin.clear();
			fflush(stdin);
			cout << "How many brazilian reais do you want to exchange?" << endl << "> R$ ";
			cin >> real;
			cin.clear();
			fflush(stdin);
			
			Transferencia transferencia;
			transferencia.pegaCotacao(entrada);
			transferencia.pegaReal(real);
			transferencia.conversao(real, entrada);



			cout << endl << endl << "Do you want to continue? Yes/No " << endl << "> ";
			cin >> answer;
			
			if(answer ==  "Y" || answer ==  "y" || answer == "Yes" || answer == "YES" || answer == "yes") {
				cout << endl;
				continuee = true;
			}
			else if (answer ==  "N" || answer ==  "n" || answer == "No" || answer == "NO" || answer == "no") {
				cout << endl << "***********************************************";
				cout << endl << "* Thank you for using our Exchange Calculator *" << endl;
				cout << "***********************************************" << endl;
				continuee = false;
			}
			cin.clear();
		}

}