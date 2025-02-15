#include <iostream>
#include <vector>
using namespace std;

class Estudiante {
public:
    string nombreEstudiante;
    float calificacion;

    Estudiante(string nombre,float calif):nombreEstudiante(nombre),calificacion(calif) {}

    void mostrarInfo()const{
        cout <<"Estudiante: "<<nombreEstudiante<<", Calificación: "<<calificacion<<endl;
    }
};

int main() {
    vector<Estudiante> listaEstudiantes;
    int opcionSeleccionada;

    do {
        cout << "\nMenu de opciones:\n";

        cout<<"1. Agregar estudiante\n";
        cout<<"2. Mostrar estudiantes\n";
        cout<<"3. Promedio de calificaciones\n";
        cout<<"4. Estudiante con calificación más baja\n";
        cout<<"5. Estudiante con calificación más alta\n";
        cout<<"6. Vaciar lista de estudiantes\n";
        cout<<"7. Salir\n";
        cout<<"Selecciona una opcion: ";
        cin >> opcionSeleccionada;

        switch (opcionSeleccionada) {
            case 1: {
                string nombreEst;
                float califEst;

                cout << "Nombre del estudiante: ";
                cin >> nombreEst;

                cout << "Calificación: ";
                cin >> califEst;
                listaEstudiantes.push_back(Estudiante(nombreEst, califEst));

                break;
            }
            case 2:
                if (listaEstudiantes.empty()) {
                    cout << "No hay estudiantes registrados.\n";
                } else {
                    for (vector<Estudiante>::const_iterator it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
                        it->mostrarInfo();
                    }
                }
                break;
            case 3:
                if (listaEstudiantes.empty()) {
                    cout << "No hay estudiantes para calcular el promedio.\n";
                } else {
                    float sumaCalificaciones = 0;
                    for (vector<Estudiante>::const_iterator it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
                        sumaCalificaciones += it->calificacion;
                    }

                    cout << "Promedio de calificaciones: " << sumaCalificaciones / listaEstudiantes.size() << endl;
                }
                break;
            case 4:
                if (listaEstudiantes.empty()) {
                    cout << "No hay estudiantes.\n";
                } else {
                    const Estudiante* estudianteMenor = &listaEstudiantes[0];
                    for (vector<Estudiante>::const_iterator it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
                        if (it->calificacion < estudianteMenor->calificacion) {
                            estudianteMenor = &(*it);
                        }
                    }
                    cout << "Estudiante con menor calificación: " << estudianteMenor->nombreEstudiante << " (" << estudianteMenor->calificacion << ")\n";
                }
                break;
            case 5:
                if (listaEstudiantes.empty()) {
                    cout << "No hay estudiantes.\n";
                } else {
                    const Estudiante* estudianteMayor = &listaEstudiantes[0];
                    for (vector<Estudiante>::const_iterator it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
                        if (it->calificacion > estudianteMayor->calificacion) {
                            estudianteMayor = &(*it);
                        }
                    }
                    cout << "Estudiante con mayor calificación: " << estudianteMayor->nombreEstudiante << " (" << estudianteMayor->calificacion << ")\n";
                }
                break;
            case 6:
                listaEstudiantes.clear();
                cout << "La lista de estudiantes ha sido vaciada.\n";
                break;
            case 7:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida, por favor selecciona una opción válida.\n";
        }
    } while (opcionSeleccionada != 7);

    return 0;
}