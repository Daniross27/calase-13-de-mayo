#include <iostream>
using namespace std;
int main(){
 int resultado=0,resultadototal=0,neto=0;
 float horas,extra,impuestos,horas2;
 string nombre;
 cout<<"ingrese su nombre: ";
 cin>>nombre;
 cout<<"ingrese sus horas trabajadas: ";
 cin>>horas;  
 if (horas<=160)
 {resultado=10*horas;
    cout<<nombre<<"\n"<<"su pago es de:  "<<resultado<<" libre de impuestos";
    } else if (horas>160)
    {
        horas2=horas-160;
        extra=horas2*15;
        resultadototal=(160*10)+extra;
        cout<<nombre<<"\n"<<"su pago con horas extras es de:  "<<resultadototal<<" libre de impuestos ";

    }
    
 if (resultadototal>=2000 && resultadototal<=2200 )
 {
    impuestos=resultadototal*0.20;
    neto=resultadototal-impuestos;
    cout<<nombre<<"\nsu salario es de:  "<<neto<<" con impuestos";
 }
 else if (resultadototal>=2201)
 {
    impuestos=resultadototal*0.30;
    neto=resultadototal-impuestos;
    cout<<"\n"<<nombre<<"\nsu salario es de:  "<<neto<<" con impuestos";
    
 }
 
 

    return 0;
 }