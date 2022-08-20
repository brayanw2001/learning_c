#include <iostream>

using namespace std;                           

int main (){

    int lin, col, contl, contc;       //linha, coluna, contador para linhas, contador para colunas;

    //variáveis de entrada
    cout << "Insira o valor para linha: ";
    cin >> lin;

    cout << "Insira o valor para coluna: ";
    cin >> col;


    while (contl < lin)              //executa o laço *for* enquanto o número de linhas não é alcançado
    {
        contl ++;

        for (contc = 0; contc < col; contc++)       //imprime * conforme valor inserido na variável coluna
        {
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
} 
