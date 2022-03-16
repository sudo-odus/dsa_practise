// link to question
// https://nados.io/question/broken-economy?zen=true

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;

    // first find the number then we will se
    int low=0;
    int high=n-1;
    int ans=-1;
    int floor=0;
    int ceil=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==data){
            ans=mid;
        }
        else if(arr[mid]<data){
            low=mid+1;   
            floor=mid;   //keeping track of floow
            // go to right subarray
        }
        else{
            high=mid-1;
            ceil=mid;    //keeping track of ceil
            // go to left subarray
        }
    }
    // cout<<ans;
    if(ans!=-1)
        cout<<arr[ans];
    else
    {

        cout<<arr[ceil]<<endl<<arr[floor];
        // both works
        // cout<<arr[low]<<endl<<arr[high];
    }
    
    // write your code here
    
}