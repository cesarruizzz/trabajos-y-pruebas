#include <iostream>

using namespace std;

int main() {
    int numeroCuenta;
    int saldoInicial;
    int totalCargos;
    int totalCreditos;
    int limiteCredito;
    
    
    cout <<"numero de cuenta:";
    cin >> numeroCuenta;
    cout << "deme el saldo inicial del mes: ";
    cin >> saldoInicial;
    cout << "su total de cargos del mes: ";
    cin >> totalCargos;
    cout << "el total de cr�ditos del mes: ";
    cin >> totalCreditos;
    cout << "el l�mite de cr�dito permitido: ";
    cin >> limiteCredito;
    
    
    int nuevoSaldo = saldoInicial + totalCargos - totalCreditos;
    

    cout<<"\nNumero de cuenta:"<<numeroCuenta<<endl;
    cout<<"nuevo saldo:"<<nuevoSaldo<<endl;
    
   
    if (nuevoSaldo>limiteCredito) {
        cout<<"se excedi� el l�mite de su cr�dito."<<endl;
    }
    
    return 0;
}

