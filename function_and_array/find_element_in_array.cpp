// link to question
// https://nados.io/question/find-element-in-an-array?zen=true

#include<iostream>
using namespace std;



int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            ans=i;
            break;
        }

    }
    cout<<ans;
    
}