#include<iostream>
using namespace std;
string parImpar(int num); //Prototipo de funcion

int main(){
	int numero;
	string cadena; 
	cout<< "ingrese el numero: ";
	cin>> numero;
	cadena = parImpar(numero);
	cout << " El numero es: " << cadena;
	return 0;
}

string parImpar(int num){
	string resultado;
	if (num%2==0){
		resultado = "par";
	} else if(num%2==1){
		resultado = "impar";
	}
	return resultado;
}