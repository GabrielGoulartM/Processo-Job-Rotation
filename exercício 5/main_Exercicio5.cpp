#include <iostream>
using namespace std;

int main() {

  string str = "Cavalo";

  string strInverntida;

  for(int n = str.length()-1; n >= 0; n--){
    strInverntida.push_back(str[n]);
  }
  cout<<"String original: "<< str << endl;
  cout<<"String invertida: "<< strInverntida << endl;

}
