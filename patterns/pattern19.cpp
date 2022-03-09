// question link
// https://nados.io/question/pattern-19

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=n;c++)
        {
            if(r==1)
            {
                if(c==n || (c>=1 && c<=n/2+1))
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else if(r>1 && r<n/2+1)
            {
                if(c==n/2+1 || c==n)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else if(r==n/2+1)
            {
                cout<<"*\t";
            }
            else if(r>n/2+1 && r<n)
            {
                if(c==1 || c==n/2+1)
                    cout<<"*\t";
                else
                    cout<<"\t";
            }
            else if(r==n)
            {
                if(c==1 || (c>=n/2+1 && c<=n))
                    cout<<"*\t";
                else
                    cout<<"\t";
            }

        }
        cout<<endl;
    }

    //write your code here
    
}