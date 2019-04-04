#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
	long int t,n,a,b,k,w,g,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;
		g=__gcd(a,b);
		l=a*b/g;
		w=n/a+n/b-2*(n/l);
		if(w>=k)
			cout<<"Win";
		else
			cout<<"Lose";
	}
}
