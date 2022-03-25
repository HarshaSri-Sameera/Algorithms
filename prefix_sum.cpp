#include <iostream>

using namespace std;

int main() {
    int n;                                      // length of array
    cin>>n; 
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
  
    int prefix[n] = {0};                        // prefix array of same size of arr with zeros
    
    prefix[0] = arr[0];                         // Initialize first element in prefix with first element of arr
    
    for(int i = 1; i<=n; i++)                   // prefix sum 
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    cout<<"The prefix array elements are: \n";
    
    for(int i = 0; i<n; i++)                   // printing prefix sum
    {
        cout<<prefix[i]<<"\n";
    }
    cout<<"\n";
    
    // problem 
    cout<<"Enter the number of quries: ";
    int q;                                      // no. of quries
    cin>>q;
     
    int a, b;                                   // array indices to find the sum between
    
    while(q--)                                  // while quries example: 2 (no. of queries)
    {                                           //                       0 2
        cin>>a>>b;                              //                       3 5 (prints the sum of elements in that range)
        if(a > 0)
            cout<<prefix[b]-prefix[a-1];
        else
            cout<<prefix[b];
    }
    return 0;
}
