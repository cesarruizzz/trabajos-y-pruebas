#include <iostream>
using namespace std;


class Vehiculo {
protected:
    string matricula;
    string modelo;
    int potenciaCV;

public:
   
    Vehiculo(string matricula,string modelo,int potenciaCV){
        this->matricula=matricula;
        this->modelo=modelo;
        this->potenciaCV=potenciaCV;
    }

    
    string getMatricula(){
        return matricula;
    }

    string getModelo(){
        return modelo;
    }

    int getPotenciaCV(){
        return potenciaCV;
    }
};


class Taxi:public Vehiculo{
private:
    string numeroLicencia;

public:
    
    Taxi(string matricula,string modelo,int potenciaCV,string numeroLicencia) 
        :Vehiculo(matricula,modelo,potenciaCV){
        this->numeroLicencia=numeroLicencia;
    }

    
    void setNumeroLicencia(string numeroLicencia){
        this->numeroLicencia=numeroLicencia;
    }

    string getNumeroLicencia(){
        return numeroLicencia;
    }
};


class Autobus:public Vehiculo {
private:
    int numeroPlazas;

public:

    Autobus(string matricula, string modelo, int potenciaCV, int numeroPlazas) 
        : Vehiculo(matricula, modelo, potenciaCV){
        this->numeroPlazas=numeroPlazas;
    }


    void setNumeroPlazas(int numeroPlazas){
        this->numeroPlazas=numeroPlazas;
    }

    int getNumeroPlazas(){
        return numeroPlazas;
    }
};


int main(){
    
    Vehiculo vehiculo("BCW546","toyota corola",100);
    Taxi taxi("CCA567","BMW",110, "SD789");
    Autobus autobus("LHK701","volvo buses",200,50);


    cout<<"Vehiculo: "<<vehiculo.getMatricula()<< ", "<<vehiculo.getModelo()<< ", "<<vehiculo.getPotenciaCV()<<"CV"<<endl;
    cout<<"Taxi: "<<taxi.getMatricula()<<", "<<taxi.getModelo()<< ", "<<taxi.getPotenciaCV() << "CV, Licencia: " << taxi.getNumeroLicencia() << endl;
    cout<<"Autobus: "<<autobus.getMatricula()<<", "<<autobus.getModelo()<<", "<<autobus.getPotenciaCV()<<"CV, Plazas: "<< autobus.getNumeroPlazas()<<endl;

    return 0;
}

