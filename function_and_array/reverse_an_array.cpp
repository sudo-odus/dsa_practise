// link to question
// https://nados.io/question/inverse-of-an-array

#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    // write your code here
    int low=0;
    int high=n-1;
    while(low<=high)
    {   
        int temp=0;
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}