#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int BToI(string s)
{
	int res = 0;
	int size = s.size();
	for (int i=size-1; i>=0; i--)
	{
		res = res + (int(s[i]) - 48)*pow(2,size-1-i); 
	}
	return res;
}

string IToB (int n)
{
	stringstream ss;
	while (n>0)
	{
		ss << n%2;
		n=n/2;
	}
	string s = ss.str();
	for (int i=0; i<s.size()/2; i++)
	{
		swap(s[i],s[s.size()-1-i]);
	}
	return s;
}

int main()
{
	int n;
	cout << "Do u want to BToI or IToB (1 or 2): ";
	cin >> n;
	if (n == 1)
	{
		string s;
		cin >> s;
		cout << BToI(s);
	}
	else 
	{
		int m;
		cin >> m;
		cout << IToB(m);
	}
}
