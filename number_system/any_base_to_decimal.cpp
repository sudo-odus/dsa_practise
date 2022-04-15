// link to question
// https://nados.io/question/any-base-to-decimal?zen=true
#include<iostream>
using namespace std;
int AnyToDec(int n,int b){
//write your code here.
    int multiplier=1;    //because 2 ki power 0 is 1 bro
    int answer=0;
    while(n){
        int rem=n%10;
        answer+=rem*multiplier;
        multiplier*=b;
        n/=10;
    }
    return answer;

}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n,b);
    cout<<res<<endl;
}