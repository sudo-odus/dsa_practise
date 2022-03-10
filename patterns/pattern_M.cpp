// link to question
// https://nados.io/question/pattern-m

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++)
        {
            if(row<=n/2+1)
            {
                if(row==col || row+col==n+1 || col==1 || col==n)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else
            {
                if(col==1 || col==n)  //removed lower diagonals
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}