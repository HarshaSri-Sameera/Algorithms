#include<bits/stdc++.h>
using namespace std;

int n = 50;
int primes[50];
void generate_seive(){
    for (int i=0;i<n;i++)primes[i]=true;
    primes[0]=primes[1]=false;
    for(int i=2; i*i<=n; i++)
    {
        if(primes[i]==true)
        {
            for(int j=i*i;j<n;j+=i)
            {
                primes[j]=false;
            }
        }
    }
}
int main()
{
    generate_seive();
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        if(primes[num] == true)
            cout<<"It is prime number";
        else
            cout<<"It is not prime number";
    }
}
