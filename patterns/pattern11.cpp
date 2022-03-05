#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int count=1;
    for(int row=1 ; row<=n ; row++)
    {
        for(int i=1 ; i<=row ; i++)
        {
            cout<<count++<<"\t";
        }
        cout<<endl;
    }
    //write your code here
    
}