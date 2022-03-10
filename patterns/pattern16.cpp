// link to question
// https://nados.io/question/pattern-16

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int row=1;
    int nspaces=(2*n)-3;
    while(row<=n)
    {
        int num=1;
        while(num<=row)
        {   
            cout<<num++<<"\t";
        }
        // cout<<num<<"\t";
        num--;
        if(row==n)
            num--;
        for(int i=1;i<=nspaces;i++)
            cout<<"\t";
        while(num>=1)
        {
            cout<<num--<<"\t";
        }
        cout<<endl;

        nspaces-=2;
        
        row++;

    }
    //write your code here
    
}