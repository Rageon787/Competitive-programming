#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int n,m; 
	cin >> n >> m; 
	vector<long long int> sizes(n,0); 
	vector<long long int> colour(m,0); 
	for(int i=0;i<n;i++) cin >> sizes[i]; 
	for(int i=0;i<m;i++) cin >> colour[i];

	sort(sizes.begin(),sizes.end()); 

	long long int wasteage = 0; 

	for(int i=0;i<colour.size();i++)
	{
		auto it = lower_bound(sizes.begin(),sizes.end(),colour[i]); 
		wasteage += (*it - colour[i]); 
	}

	cout << wasteage << endl; 
}
