#include <iostream>

/* Q8 */

using namespace std;

int main(int argc, char** argv) {
	double horasTrabalhadas;
	double valorHora;
	
	cout<< "Digite a quantidade de horas trabalhadas:" << endl;
	
	cin >> horasTrabalhadas;
	
	cout<< "Digite o valor da hora trabalhada:" << endl;
	
	cin >> valorHora;
	
	cout << "Salario:" << (horasTrabalhadas * valorHora) << endl;
	system("pause");
	return 0;
}
