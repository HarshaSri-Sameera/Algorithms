#include <iostream>
using namespace std;

int main() {             //   l  h
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 5;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int l = 0;
    int h = len;
    
    do{
        int m = (l + (h-l)/2);  // 5
        int val = arr[m];  // 6
        // cout<<"val "<<val<<"\n";
        
        if(val == n)
        {
            cout<<"found on position "<<m<<"\n";
            break;
        }
        else if(val > n)
        {
            h = m;
        }
        else
        {
            l = m + 1;   // 4
        }
    }while(l < h);
    return 0;
}

// output: found on position 4
