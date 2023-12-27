#include <iostream>

using namespace std;
    int n, caja, suma_parcial,respuesta;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>caja;
        suma_parcial = suma_parcial + caja; 
        //suma_parcial +=caja;
        if(suma_parcial<=0){ //la reiniciamos
            suma_parcial = 0;
        }
        respuesta = max(respuesta,suma_parcial);
    }
    cout<<respuesta<<endl;
    return 0;
}