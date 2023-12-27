#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int row,col; cin>>col;

    for(int i=0; i<col;i++){
        cin>>row;
        for(int j = 0; j<row; j++){
            string x = "\\*";
            cout<<x;
        }
        cout<<endl;
    }
    
    return 0;
}