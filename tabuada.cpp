#include <iostream>

using namespace std;                           

int main (){

    int num, res, cont;

    inicio:

    cout << "\ninsira um número: ";
    cin >> num;

 /*   if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'z'))
    {
        cout << "letras não são permitidas.";
        goto inicio;
    }
    */

    while (cont < 10)
    {
        cont++;
        res = num*cont;
        cout <<num <<"*" <<cont <<" = " <<res <<"\n";
    }
    
    

    return 0;                                  
}