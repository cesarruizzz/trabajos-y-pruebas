#include <iostream>
#include <cmath>
using namespace std;



int main(){
    double kilo;
    double altura; 
    double bmi;

    cout<<"para desear su calculo de su bmi necesito que coloque su altura en metros:";
    cin>>altura;
    cout<<"Ahora quiero su peso en kilogramos:";
    cin>>kilo;
    bmi=kilo / pow(altura,2);
 if (bmi <= 18.5){
    cout<<"Tienes bajo peso"<<bmi<<endl;
    }else if (bmi>18.5 && bmi<24.9){
     cout<<"Tienes peso normal"<<bmi<<endl;
    }else if (bmi>25 && bmi<29.9){
     cout<<"Tienes sobrepeso"<<bmi<<endl;
    }else if (bmi>30){
     cout<<"Tienes obesidad"<<bmi<<endl;
    }
    return 0;
}
