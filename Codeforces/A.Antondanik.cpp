#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    char names[n];
    int cA = 0;
    int cD = 0;

    for(int i = 0;i<n;i++){
        cin>>names[i];

        if(names[i] == 'A'){
            cA++;
        }else if(names[i] == 'D'){
            cD++;
        }
        
    }

    if(cA==cD){
        cout<<"Friendship"<<endl;
    }else if( cA>cD){
        cout<<"Anton"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
    
    return 0;
}