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
    
    // very intresting solution 
    // one loop for starting character 
    // one loop for ending character
    // and one loop for iterating between start and end

    for(int starting_with=0;starting_with<n;starting_with++)
    {
        for(int end_character=starting_with;end_character<n;end_character++)
        {
            // end_character starts with i because end cannot be before the starting character
            // ex in abcd
            // ba cam never be a subarry
            int iterator=starting_with;
            while(iterator<=end_character){
                cout<<arr[iterator]<<"\t";
                iterator++;
            }
            cout<<endl;
        }
    }


    // write your code here
    
}