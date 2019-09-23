#include <iostream>

using namespace std;

	class Transferencia {
		public:
			float cotacao;
			float real;
			float dolar;
			float resultado;
			
			Transferencia();
			void pegaCotacao(double);
			void pegaReal(double);
			void conversao(double, double);
			void pause(void);
	};

