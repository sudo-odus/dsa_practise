#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int first=0;
    int second=1;
    int third=0;
    for(int row=1 ; row<=n ; row++)
    {
        for(int col=1 ; col<=row ; col++)
        {
            cout<<first<<"\t";
            third=first+second;
            first=second;
            second=third;
        }
        cout<<endl;
    }
    
    //write your code here
    
}