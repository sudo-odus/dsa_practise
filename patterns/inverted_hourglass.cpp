// link to question
// https://nados.io/question/pattern-inverted-hour-glass

#include<iostream>
using namespace std;

int main(){
    
 // write your code here
    int n;
    cin>>n;
    int row=1;
    int nspaces=0;
    int nstars=n;
    while(row<=n){
        for(int i=1;i<=nspaces;i++)
            cout<<"\t";
        if(row<n/2+1 || row==n)
        {
            for(int i=1;i<=nstars;i++)
                cout<<"*\t";
            nspaces+=1;
            nstars-=2;
        }
        else{
            for(int i=1;i<=nstars;i++)
            {
                if(i==1 || i==nstars)
                    cout<<"*\t";
                else
                {
                    cout<<"\t";
                }
            }
            nspaces-=1;
            nstars+=2;
        }
        row++;
        cout<<endl;
    }
    
    
}