#include <iostream>

using namespace std;


float retornaPorcentagem(float valor, float total){
    float x;
    x = (valor*100)/total;
    return x;
}

int main()
{
   //Variaveis gerais
   //----------------
    int escolha;
    float porcentagem, total = 0;
    float valores[5];
    valores[0] = 67836.43;
    valores[1] = 36678.66;
    valores[2] = 29229.88;
    valores[3] = 27165.48;
    valores[4] = 19849.53;

    //Calcula o valor total
    //--------------------
    for(int i = 0; i<=4; i++){
        total = valores[i]+ total;
    }


    //Menu
    //----
    while(escolha != 6){

    cout << "\nDigite o numero correspondente para ver a porcentagem de cada estado: " << endl;
    cout << " 1 - SP\n 2 - RJ\n 3 - MG\n 4 - ES\n 5 - Outros\n 6 - Para sair\n";
    cin >> escolha;


    switch(escolha){

    case 1:
         porcentagem = retornaPorcentagem(valores[0], total);
         cout << "Contribuicao do estado RJ: " << porcentagem << "%" << endl;
         break;
    case 2:
        porcentagem = retornaPorcentagem(valores[1], total);
        cout << "Contribuicao do estado MG: " << porcentagem << "%" << endl;
         break;
    case 3:
        porcentagem = retornaPorcentagem(valores[2], total);
        cout << "Contribuicao do estado ES: " << porcentagem << "%" << endl;
         break;
    case 4:
        porcentagem = retornaPorcentagem(valores[3], total);
        cout << "Contribuicao do estado ES: " << porcentagem << "%" << endl;
         break;
    case 5:
        porcentagem = retornaPorcentagem(valores[4], total);
        cout << "Contribuicao dos outros estados: " << porcentagem << "%" << endl;
         break;
       }

    }

    return 0;
}
