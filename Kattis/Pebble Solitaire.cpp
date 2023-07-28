#include<bits/stdc++.h>
using namespace std; 

int ans = INT_MAX; 
map<string,int> vis; 
void solve(string s)
{
	if(vis[s] == 1) return; 
	vis[s] = 1; 
	int n = s.size(); 
	int pebbles = 0;  
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'o') pebbles++; 
		if(i < n - 2 && s[i] == '-' && s[i + 1] == 'o' && s[i + 2] == 'o') 
		{
			string left = s; 
			left[i] = 'o';
			left[i + 1] = '-'; 
			left[i + 2] = '-'; 
			solve(left); 
		}

		if(i < n - 2 && s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == '-')
		{
			string right = s; 
			right[i + 2] = 'o';
			right[i + 1] = '-';
			right[i] = '-'; 
			solve(right);    
		}
	}
	ans = min(pebbles,ans); 
	return; 
}

int main()
{ 
	int t; 
	cin >> t; 
	while(t--)
	{
		ans = INT_MAX; 
		string s; 
		cin >> s; 
		solve(s); 
		cout << ans << endl;  
	} 
}

 
