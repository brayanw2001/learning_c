#include <iostream>
#include <iomanip>              //responsável pelo fixed. precisão das casas decimais

using namespace std;                           

int main (){

    int num;
    double res_u, res_d;

    inicio:                                                                //ponto de retorno do goto

    cout << "insira um número até 999: ";
    cin >> num;

    if (num > 999) {
        cout << "O número deve conter apenas 3 algarismos\n\n";
        goto inicio;                                                       //se a condição for executada, retorna ao inicio
    }

    
    else if (num > 99) {
       res_d = num/100;
       res_d = res_d*100;
       cout << "\nA centena vale: " << res_d;

       res_u = num%10;
       res_d = num - res_d -res_u;
       cout << "\na dezena vale: " <<res_d << "\n";
       cout << "a unidade vale: " <<res_u <<"\n";
    }
    
    else if (num > 10 && num < 99) {
        res_u = num%10;
        res_d = num - res_u;

        cout << "\n\na unidade vale: " <<res_u <<"\n";
        cout << "a dezena vale: " <<res_d << "\n\n";
    }

    return 0;                                  
}
