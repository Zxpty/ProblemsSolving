#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n; cin>>n;

    if(n>=18){
        cout<<"MAYOR DE EDAD"<<endl;
    }else{
        cout<<"MENOR DE EDAD"<<endl;
    }
    
    return 0;
}