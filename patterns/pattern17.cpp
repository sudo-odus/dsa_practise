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
            for(int i=1;i<=n;i++)
                cout<<"*\t";
        }
        // code for printing
        else{
            for(int i=1 ; i<=nspaces ; i++)
                cout<<"\t";
            for(int i=1; i<=nstars ;i++)
                cout<<"*\t";
        }
            
        cout<<endl;

        // preparation for next line
        if(row<=n/2)
        {
            nstars+=1;
        }
        else{
            nstars-=1;
            // 4th row me to special case hai uske baad wps whi se chalu hojaega
        }
        row++;
    }
    //write your code here
    
}