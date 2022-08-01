#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,x,y,z,k,h,l,m,n,o;
	cin >>a>>b>>c>>x>>y>>z;
	k=max(max(a,b),c)
	n=max(max(x,y),z)
	l=min(min(a,b),c)
	h=min(min(x,y),z)
	o=(a+b+c-k-l)*(x+y+z-n-h)
	m=k*n+l*h+o;
	cout<<m;
	
	
	
	
}
