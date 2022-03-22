#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b==0 && a == 0)
        return 0;
        
    if(a == 0)
    {
        return b;
    }
    else if(b == 0)
    {
        return a;
    }
    
    if(b == 0)
    {
        return a;
    }
    else{
        return gcd(a, b - a);
    }
    
    // if(a == b)
    //     return a;
    // else if(a < b)
    //     return gcd(a, b - a);
    // else
    //     return gcd(a - b, b);
    
}

int main() {
    cout<<__gcd(24, 12);
    int a = 24, b = 12;
    
    cout<<gcd(min(a, b), max(a,b));
    return 0;
}

