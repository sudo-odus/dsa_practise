// link to question
// https://nados.io/question/any-base-addition?zen=true

#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    // given n2>n1
    int carry=0;
    int answer=0;
    int multiplier=1;   //for positioning
    while(n2 || n1)
    {   
        int digit1=n1%10;
        int digit2=n2%10;
        int sum=digit1+digit2+carry;
        // cout<<digit1<<"\t"<<digit2<<endl;
        if(sum>=b)
        {
            sum%=b;
            carry=1;
            // cout<<"x";
        }
        else
        {
            carry=0;
        }
        answer+=sum*multiplier;
        multiplier*=10;
        n1/=10;
        n2/=10;
    }
    if(carry!=0)
    {
        answer+=carry*multiplier;
    }
    return answer;

    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}