// link to question
// https://nados.io/question/subarray-problem?zen=true

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        // int total_for_this_index=n-i;
        for(int j=i;j<n;j++){
            // print from i to j
            // awesome
            int k=i;
            while(k<=j)
            {
                cout<<arr[k]<<"\t";
                k++;
            }
            cout<<endl;
        }
        // cout<<endl;

    }
    
    // write your code here
    
}