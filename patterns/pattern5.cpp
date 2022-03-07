// question link
// https://nados.io/question/pattern-5?zen=true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int row=1;
    int nspaces=n/2;
    int nstars=1;
    while(row<=n)
    {
        for(int i=1;i<=nspaces;i++)
        {
            cout<<"\t";
        }
        for(int i=1;i<=nstars;i++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(row<=n/2)
        {
            nspaces-=1;
            nstars+=2;
        }
        else{
            nspaces+=1;
            nstars-=2;
        }
        row++;
    }
    //write your code here

    
}