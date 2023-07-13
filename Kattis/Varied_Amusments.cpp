#include<bits/stdc++.h>
using namespace std; 

long long int mod = 1e9 + 7; 
long long int n,a,b,c; 
 
long long int rideA(long long int n); 
long long int rideB(long long int n); 
long long int rideC(long long int n); 
long long int memo[3][51]; 

int main()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<=50;j++) memo[i][j] = -1; 
	}
	cin >> n >> a >> b >> c; 
	long long int ans = (a * rideA(n - 1) + b * rideB(n - 1) + c * rideC(n - 1)) % mod;
	cout << (ans % mod) << endl; 
	return 0; 
}

long long int rideA(long long int n)
{
	if(n == 0) return 1; 
	if(memo[0][n] < 0) memo[0][n] = (b * rideB(n - 1) + c * rideC(n - 1)) % mod;  
	return memo[0][n]; 
}

long long int rideB(long long int n)
{
	if(n == 0) return 1; 
	if(memo[1][n] < 0) memo[1][n] = (a * rideA(n - 1) + c * rideC(n - 1)) % mod; 
	return memo[1][n]; 
}

long long int rideC(long long int n) 
{
	if(n == 0) return 1; 
	if(memo[2][n] < 0) memo[2][n] = (b * rideB(n - 1) + a * rideA(n - 1)) % mod; 
	return memo[2][n]; 
}

 
