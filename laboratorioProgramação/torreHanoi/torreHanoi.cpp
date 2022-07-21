#include <iostream>
#include <locale.h>

using namespace std;

void moveDisco (int discos, char hasteA, char hasteB, char hasteC){
	if (discos == 1){
		cout << "Mover o disco " << discos << " de " << hasteA << " para " << hasteC << endl;
	} else {
		moveDisco(discos - 1, hasteA, hasteC, hasteB); 
		cout << "Mover o disco " << discos << " de " << hasteA << " para " << hasteC << endl;
		moveDisco(discos - 1, hasteB, hasteA, hasteC);
	}
}


int main (){
	setlocale (LC_ALL, "Portuguese");
	char A, B, C = 0;
	int discos = 0;
	cout << endl;
	cout << "Torre de Hanoi" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Digite o número de discos: ";
	cin >> discos;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	moveDisco (discos, 'A', 'B', 'C');
	cout << endl;
	system ("pause");
	return 0;
}
