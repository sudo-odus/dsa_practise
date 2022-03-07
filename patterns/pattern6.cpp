// question link
// https://nados.io/question/pattern-6?zen=true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int row=1;
    int nstars=(n/2)+1;
    int nspaces=1;
    while(row<=n){
        // code for each row
        for(int i=1;i<=nstars;i++)
            cout<<"*\t";
        for(int i=1;i<=nspaces;i++)
            cout<<"\t";
        for(int i=1;i<=nstars;i++)
            cout<<"*\t";
        cout<<endl;
        // preparation for next row
        if(row<=n/2)
        {
            nstars-=1;
            nspaces+=2;
        }
        else{
            nstars+=1;
            nspaces-=2;
            
        }
        row++;
    }

    //write your code here
    
}