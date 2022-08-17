#include <iostream>

using namespace std;                           

int main (){

    int A, B, copy;

    //entrada dos valores a serem avaliados
    cout << "Insira o primeiro número: ";
    cin >> A;
    cout << "\nInsira o segundo número: ";
    cin >> B;

    //caso o segundo valor seja maior que o primeiro, eles serão invertidos para que seja feita a divisão
    if (B>A){
        copy = B;               //cópia recebe o valor de B
        B = A;                  //B recebe o valor de A || o valor inserido em A agora pertence a B  
        A = copy;               //A recebe o valor de cópia(B)
    }
    
    if (A%B == 0){
        cout << "\nsão múltiplos\n";
    }else{
        cout << "não são múltiplos\n";
    }
    

    return 0;                                 
}