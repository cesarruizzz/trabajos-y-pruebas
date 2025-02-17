#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GestionDias {
private:
    vector<string> dias;

public:

    GestionDias() {
        dias = {"domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado"};
    }

    
    void mostrarDias() {
        cout << "dias de semana:" << endl;
        for (int i = 0; i < dias.size(); i++) {
            cout << i + 1 << ". " << dias[i] << endl;
        }
    }

    
    void obtenerPosicionDia(string dia) {
        
        transform(dia.begin(), dia.end(), dia.begin(), ::tolower);
        for (int i = 0; i < dias.size(); i++) {
            string diaActual = dias[i];
            transform(diaActual.begin(), diaActual.end(), diaActual.begin(), ::tolower);
            
            if (dia == diaActual) {
                cout << "El día " << dias[i] << " está en la posición " << i + 1 << "." << endl;
                return;
            }
        }
        cout << "El día " << dia << " no está en la lista." << endl;
    }
};

int main() {
 
    GestionDias gestion;

 
    gestion.mostrarDias();

 
    string dia;
    cout << "\nintorduce el dia a la lista: ";
    cin >> dia;

   
    gestion.obtenerPosicionDia(dia);

    return 0;
}
