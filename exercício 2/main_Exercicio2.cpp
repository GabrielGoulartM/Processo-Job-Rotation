#include <iostream>
using namespace std;
int main() {

  int n1=0,n2=1,n3,i,numero;
  bool achou;

 cout << "Digite o numero a ser pesquisado na sequencia de Fibonacci: " << endl;
 cin >> numero;


 for(i=0; i<numero; ++i)
 {
  n3=n1+n2; //Soma os 2 primeiros numeros
  if(n3 == numero){
    achou = true; //se encontrar o numero que o usuario digitou, achou vira true e sai do for
    break;
  }
  n1=n2;
  n2=n3;
 }

 if(achou){
    cout << "\n Numero foi encontrado." << endl;
 }else cout << "\n Numero nao foi encontrado." << endl;
   return 0;
   }
