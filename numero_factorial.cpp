#include <iostream>
using namespace std;
int main(){
 int n, factorial=1;
 cout << "Ingrese un numero entero: ";
 cin>> n;
 for ( int i=1; i <= n; i++)
 {
    factorial*=i;
 }
 
 cout<<"\nEl factorial del numero es:"<<factorial;

    return 0;
}