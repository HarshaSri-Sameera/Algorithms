#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	// set arrange them in ascending order(sorted order), no duplicates 
	set<int>se;
	se.insert(1); //{1}
	se.insert(2); //{1, 2}
	se.insert(4); //{1,2,4}
	se.emplace(3); //{1,2,3,4}
	auto it=se.find(3);
	cout<<*(it);
	cout<<"\n";
	for(auto it: se)
	{
		cout<<it<<" ";
	}
	
	//unordered_set and multiset
}
