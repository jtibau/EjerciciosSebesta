#include<iostream>
using namespace std;
int main(){
	for(int i = 0; i < 10; i++){
		cout << i;
	}
	cout <<i; //Intentar acceder a variable i
return 0;
}

//c5p6.cpp: en la funcion int main():
//c5p6.cpp:8:11 error: la busqueda del nombre de 'i'
//cambio por el nuevo alcance ISO de 'for'
