// question link
// https://nados.io/question/pattern-17?zen=true

#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int row=1;
    int nspaces=n/2;
    int nstars=1;
    while(row<=n)
    {   

        if(row==(n/2)+1)
        {
            for(int i=1;i<=nspaces;i++)
                cout<<"*\t";
        }
        else
        {
            for(int i=1;i<=nspaces;i++)
                cout<<"\t";

        }
        for(int i=1;i<=nstars;i++)
            cout<<"*\t";
        cout<<endl;
        if(row<=n/2)
            nstars++;
        else
            nstars--;
        
        
        row++;

    }
    //write your code here
    
}