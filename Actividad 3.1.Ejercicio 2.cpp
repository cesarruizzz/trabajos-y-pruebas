#include <iostream>
using namespace std;


class Usuario{
protected:
    string username;
    string password;
    string email;

public:
    
    Usuario(string username,string password,string email) {
        this->username=username;
        this->password=password;
        this->email=email;
    }
    
    
    void registrarse(){
        cout<<username<<"se ha registrado con el email"<<email<<"\n";
    }

    void iniciarSesion(){
        cout<<username<<"ha iniciado sesión.\n";
    }
};


class Administrador:public Usuario{
private:
    string emailAdministrador;

public:
    
    Administrador(string username,string password,string email,string emailAdministrador) 
        : Usuario(username,password,email){
        this->emailAdministrador=emailAdministrador;
    }

    
    void editarProductos(){
       cout<<username<<"está editando productos.\n";
    }

    void eliminarProductos(){
        cout<<username<<"ha eliminado un producto.\n";
    }

    void agregarProductos(){
        cout<<username<<"ha agregado un nuevo producto.\n";
    }
};


class Cliente:public Usuario {
private:
    string informacionTarjetaDeCredito;

public:
    
    Cliente(string username,string password,string email,string informacionTarjetaDeCredito) 
        : Usuario(username,password,email){
        this->informacionTarjetaDeCredito=informacionTarjetaDeCredito;
    }

    
    void comprarProductos(){
        cout<<username<<" ha realizado una compra con la tarjeta "<<informacionTarjetaDeCredito<<"\n";
    }
};


int main(){
    
    Usuario usuario("Cesar Fernado Ruiz Zapata","cesar2005","cr833919@gmail.com");
    Administrador admin("Carlos Alberto Cruz Valle","autoridad420","administradorValle420@hotmail.com","@corporacionyakuza.com");
    Cliente cliente("Kristel Cecilia Oxford","Oxford20","Oxford0101@gmail.com","+504 9012-3456");

    
    usuario.registrarse();
    usuario.iniciarSesion();

    admin.registrarse();
    admin.iniciarSesion();
    admin.agregarProductos();
    admin.editarProductos();
    admin.eliminarProductos();

    cliente.registrarse();
    cliente.iniciarSesion();
    cliente.comprarProductos();

    return 0;
}
