// link to question
// https://nados.io/question/inverse-of-an-array?zen=true

#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    // write your code here
    // we have to return pointer to an array but array name is by default a pointer
    // to the first element
    int *ans_array = new int[n];
    // int ans_array[n];
    // for(int i=0;i<n;i++)
    //     ans_array[i]=0;
    
    for(int i=0;i<n;i++)
    {
        ans_array[*(arr+i)]=i;
        // arr[i] is same as *(arr+i);
    }
    int* ptr=ans_array;
    // cout<<ans_array;
    // cout<<&arr;
    return(ptr);

    // [4,0,2,3,1]
    // [1,4,2,3,0]

    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
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
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}