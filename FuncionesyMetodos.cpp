#include <iostream>
using namespace std;
//funcion que sume dos valores
int suma(int num1, int num2){
	int resultado = 0;
	resultado=num1+num2;
	return resultado;
}

int resta(int num1, int num2){
	int resultado = 0;
	resultado=num1-num2;
	return resultado;
}


main(){

cout<< suma(10,20) << endl;
cout<< resta(50,70) << endl;

system("pause");	
}
