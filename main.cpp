#include <iostream>

using namespace std;

int main()
{
    double salario, reajuste, salarion;
    int percentual;
    cin >> salario;
    if (salario <= 400){
        salarion = salario + ( salario * 0.15 );
        percentual = 15;
    }else{
    if (salario <= 800){
        percentual = 12;
        salarion = salario + ( salario * 0.12 );
    }else{
    if (salario <= 1200){
        percentual = 10;
        salarion = salario + ( salario * 0.1 );
    }else{
    if (salario <= 2000){
        salarion = salario + ( salario * 0.07 );
        percentual = 7;
    }else{
    percentual = 4;
    salarion = salario + ( salario * 0.04 );
    }
    }
    }
    }
    reajuste = salarion - salario;
    cout.precision(2);
    cout << fixed << "Novo salario: " << salarion <<endl;
    cout << fixed << "Reajuste ganho: " << reajuste <<endl;
    cout << "Em percentual: " << percentual << " %" <<endl;
    return 0;
}
