// link to question
// https://nados.io/question/pattern-15?zen=true

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int row=1;
    int nspaces=n/2;
    int count=1;
    int num=1;
    while(row<=n)
    {
        for(int i=1;i<=nspaces;i++)
        {
            cout<<"\t";
        }
        for(int i=1;i<=count;i++)
        {
            cout<<num<<"\t";
            if(i<count/2+1)
                num++;
            else 
                num--;
        }
        num++;

        cout<<endl;
        // updation for next line
        if(row<n/2+1)
        {
            nspaces-=1;
            count+=2;
            num+=1;
        }
        else{
            nspaces+=1;
            count-=2;
            num-=1;
        }
        row++;
    }

    //write your code here
    
}