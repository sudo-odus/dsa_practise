#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int row=1; row<=n ;row++)
    {
        // int nst=n+1-row;
        // int nsp=row-1;
        // for(int i=1;i<=nsp;i++)
        //     cout<<"\t";
        // for(int i=1;i<=nst;i++)
        //     cout<<"*\t";
        for(int col=1;col<=n;col++)
        {
            if(col>=row)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl; 
    }
    //write your code here

}