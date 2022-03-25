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
    cout<<"The index value of "<<p<<" in aplhabetical index is: "<<returnVal(p)<<"\n";
    
    cout<<"Enter a alphabet index: \n";
    int i;
    cin>>i;
    char alpha = 96 + i;
    cout<<"the character in the alphabetical series index is: "<<alpha<<"\n";
    
    cout<<"\n"; 
    
    cout<<"Enter a character to get the ASCII value of it: \n";
    char q;
    cin>>q;
    cout<<"The ASCII value of is: "<<int(q)<<"\n";          
    
    cout<<"\n";
    
    cout<<"Enter the character to get the alphabet index: \n";
    char x;
    cin>>x;
    cout<<"The alphabet series index of "<<x<<" is: "<<int(x - 96);                          
    return 0;
}



// In python:
// ord() to get the ascii value (Input value is character example: 'a')
// chr() to get the charater (Input value is ASCII value example: 97)
