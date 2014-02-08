#include <iostream>
using namespace std;

int main(){
  for (int i = 0 ; i<10; i++){
    cout << i;
  }
  cout << i; //Intentar acceder a variable i
  return 0;
}

//Error
//c5p6.cpp: En la función int main():
//c5p6.cpp:8:11: error: la búsqueda de nombre de 'i'
//cambió por el nuevo alcance ISO de 'for'
//[-fpermissive]
