//Leia um conjunto de dados contendo o n�mero de matr�cula, as tr�s notas e a frequ�ncia de 10 alunos
//Calculo: a nota final de cada aluno; a maior e menor nota da turma, a nota media da turma; o total de alunos reprovados; a porcentagem de alunos reprovados
//por infrequ�ncia

#include <iostream>
#include <locale.h>

using namespace std;

void notasFrequencia (){
	float notaFinal = 0; float maiorNota = 0; float menorNota = 101; float mediaTurma = 0; float porcentagemInfrequencia = 0; float somaNotas = 0;
	float matricula = 0; float nota1 = 0; float nota2 = 0; float nota3 = 0; 
	int frequencia = 0; int alunos = 0; int reprovados = 0; float reprovadoFrequencia = 0;
	
	while (alunos <= 9){
		cout << "Insira o n�mero de matr�cula do aluno: ";
		cin >> matricula;
		cout << "Insira a frequ�ncia do aluno: ";
		cin >> frequencia;
		cout << "Insira a primeira nota: ";
		cin >> nota1;
		cout << "Insira a segunda nota: ";
		cin >> nota2;
		cout << "Insira a terceira nota: ";
		cin >> nota3;
		
		matricula = (nota1 + nota2 + nota3)/3;
		notaFinal = matricula;
		cout << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "A nota final desse aluno �: " << notaFinal << endl << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		alunos ++;
		somaNotas = notaFinal + somaNotas;
		
		if (notaFinal > maiorNota){
			maiorNota = notaFinal;
		}
		if (notaFinal < menorNota){
			menorNota = notaFinal;
		}
		if (frequencia < 20){
			reprovadoFrequencia ++;
		}
		if (notaFinal < 60 || frequencia < 20){
			reprovados ++;
		}
	}
	mediaTurma = somaNotas/alunos;
	porcentagemInfrequencia = (reprovadoFrequencia*100)/alunos;
	
	cout << "A maior nota equivale a: " << maiorNota << endl;
	cout << "A menor nota equivale a: " << menorNota << endl;
	cout << "A media de notas da turma � de: " << mediaTurma << endl;
	cout << "O total de alunos reprovados � de: " << reprovados << endl;
	cout << "A porcentagem de alunos reprovados por frequ�ncia � de: " << porcentagemInfrequencia << "%" << endl << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
}

int main(){
	setlocale (LC_ALL, "Portuguese");
	notasFrequencia ();
	cout << endl << endl;
	system ("pause");
	return 0;
}
