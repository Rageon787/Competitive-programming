#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t; 
	cin >> t; 
	while(t--)
	{
		int n; 
		cin >> n; 
		string s; 
		cin >> s; 
		int count = 0; 
		int ans = 0; 
		for(int i=1;i<n;i++) 
		{
			if(s[i] == s[i - 1]) count++; 
			else 
			{
				ans = max(ans,count); 
				count = 0; 
			} 
		}
		ans = max(ans,count); 
		ans+=2;
		cout << ans << endl; 
	}

	return 0; 
}
