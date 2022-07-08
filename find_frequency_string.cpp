#include<iostream>
#include<map>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    char s[10] = "malayalam";
    int alpha[26] = {0}, i=0, j;
    while(s[i]!='\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            j = s[i] - 'a';
            ++alpha[j];
        }
        ++i;
    }
    
    for(int i=0; i<26; i++)
    {
        if(alpha[i] != 0)
        {
            cout<<char(i+'a')<<" : "<<alpha[i]<<endl;   
        }
    }
    maps();
    return 0;
}


// Using data structure
void maps(){
    map<char, int> mp;
    char s[10] = "malayalam";
    for(int i=0; i<strlen(s); i++)
    {
        mp[s[i]]++;
    }
    for(auto it: mp)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }
}

// Output
// a : 4
// l : 2
// m : 2
// y : 1
