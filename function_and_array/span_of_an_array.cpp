// link to question
// https://nados.io/question/span-of-array?zen=true

#include<iostream>
using namespace std;

int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        // mini=min(mini,arr[i]);
        // maxi=max(maxi,arr[i]);
    }
    // cout<<maxi-mini;
    int mini=arr[0];
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        // cin>>arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi-mini;
    
}