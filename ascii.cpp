#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int returnVal (char x)                  // to convert character to integer
{
    return int(x - 96);
}

int main()
{
    char p = 'j';
    cout<<"The integer value of "<<p<<" is: "<<returnVal(p)<<"\n"; 
    int q = 'a';
    cout << q<<"\n";                         // will print 97
    int x = 'a';
    cout << x - 96;                          // will print 1
    return 0;
}
