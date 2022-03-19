// link to question
// https://nados.io/question/difference-of-two-arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1, n2;
    
    cin>>n1;
    vector<int> a1(n1, 0);
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    vector<int> a2(n2, 0);
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }

    int n3=n2;   //because n2 is bigger
    int ans[n3];
    int ptr1=n1-1;
    int ptr2=n2-1;
    // jab same hi size le rhe to
    int ptr3=n3-1;
    int carry=0;
    while(ptr3>=0)
    {
        int val1=(ptr1>=0) ? a1[ptr1] : 0;

        int val2=(ptr2>=0) ? a2[ptr2] : 0;
        val2=val2-carry;
        if(val2<val1){
            val2+=10;
            carry=1;
        }
        else{
            carry=0;
        }
        int val3=val2-val1;
        ans[ptr3]=val3;

        
        ptr1--;
        ptr2--;
        ptr3--;
    }
    int i=0;
    while(ans[i]==0){
        i++;
    }
    for(int j=i;j<n3;j++){
        cout<<ans[j]<<endl;
    }
    
    //write your code here
}