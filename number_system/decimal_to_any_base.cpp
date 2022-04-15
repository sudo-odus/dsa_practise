// link to question
// https://nados.io/question/decimal-to-any-base

#include<iostream>
using namespace std;
int DecToAny(int n, int b){
//write your code here
    int answer=0;
    int multiplier=1;
    // int rem=0;
    while(n)
    {
        int rem=n%b;
        answer+=rem*multiplier;
        multiplier*=10;
        n/=b;
    }
    return answer;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n,b);
    cout << res << endl;
}