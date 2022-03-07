// question link
// https://nados.io/question/pattern-20?zen=true

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {   if((col==1 || col==n))
                cout<<"*\t";

            else if((row==col || row+col==n+1) && (row>n/2))
                cout<<"*\t";
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    //write your code here

}