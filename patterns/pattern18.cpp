// question link
// https://nados.io/question/pattern-18?zen=true

#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int row=1;
    int nspaces=0;
    int nstars=n;
    while(row<=n)
    {
        for(int i=1;i<=nspaces;i++)
            cout<<"\t";
        if(row>1 && row<n/2+1)
        {
            for(int i=1;i<=nstars;i++)
            {
                if(i==1 || i==nstars)
                    cout<<"*\t";
                else
                    cout<<"\t";
                  
            }
        }
        else
        {
            for(int i=1;i<=nstars;i++)
            {
                cout<<"*\t";  
            }
        }  
        
            
        cout<<endl;
        if(row<n/2+1)
        {
            nspaces+=1;
            nstars-=2;
        }
        else{
            nspaces-=1;
            nstars+=2;
        }
        row++;
    }

    //write your code here
    
}