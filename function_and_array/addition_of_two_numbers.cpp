// link to question
// https://nados.io/question/sum-of-two-arrays?zen=true

#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    // for(int i:arr2)
    //     cin>>i;
    
    int n3=max(n1,n2);
    int ans[n3];

    // pointer to get the value in arrays
    // and a carry variable
    int carry=0;
    int ptr1=n1-1;
    int ptr2=n2-1;
    int ptr3=n3-1;
    while(ptr1>=0 || ptr2>=0)
    {
        int val1= (ptr1>=0) ? arr1[ptr1] :0 ;
        int val2= (ptr2>=0) ? arr2[ptr2] :0 ;

        int sum=val1+val2+carry;
        carry=sum/10;
        ans[ptr3]=sum%10;
        ptr1--;
        ptr2--;
        ptr3--;

    }

    // for(int i:arr1)
    //         cout<<i<<endl;

    if(carry==0)
    {
        for(int i:ans)
            cout<<i<<endl;
    }
    else
    {
        int ans_updated[n3+1];
        ans_updated[0]=carry;
        for(int i=0;i<n3;i++)
        ans_updated[i+1]=ans[i];   
        for(int i:ans_updated)
            cout<<i<<endl;
    }

}