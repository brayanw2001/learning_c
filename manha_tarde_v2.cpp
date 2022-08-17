#include <iostream>

using namespace std;                           //namespace(biblioteca) padrão.


//Essa versão inclui o acréscimo dos minutos
int main () {

    int hora, min;

    //variáveis para inserção de hora e minuto
    cout << "Informe a hora: ";
    cin >> hora;

    cout << "Informe os minutos: ";
    cin >> min;

    cout << "A hora inserida foi: " << hora <<"h" <<min <<"\n";         //mostra ao usuário o horário digitado

    //condições de funcionamento
    if (59 < min || min < 00) {                                         //se o minuto for menor que 0 ou maior que 59, retorna erro  
        cout << "\nInsira uma minutagem válida!\n";
    }

    else if (6 <= hora && hora <= 12) {                                 //periodo da manhã: 6h até 12h
        cout << "\nManhã!\n";
    }

    else if (12 < hora && hora < 17) {                                  //periodo da tarde: 12h até 17h
        cout << "\nTarde!\n";
    }

    else if((17 <= hora && hora < 24) || (hora < 6 && hora >= 0)){      //periodo da noite: 17h até 5h
        cout << "\nNoite!\n";
    }
     

    return 0;
}
