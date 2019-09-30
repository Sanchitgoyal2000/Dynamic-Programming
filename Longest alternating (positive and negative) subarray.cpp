#include <iostream>   // codechef ALTARAY
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
	 long long int n;
	 cin>>n;
	 long long int a[n];
	 for(int i=0;i<n;i++)
	 cin>>a[i];
	 long long int res[n];
	 res[n-1]=1;
	 for(int i=n-2;i>=0;i--)
	 {
	     if (a[i] * a[i + 1] < 0)
            res[i] = res[i + 1] + 1;
         else
            res[i] = 1;
	 }
	 for(int i=0;i<n;i++)
	 {
	 cout<<res[i];
	 if(i!=n-1)
	 cout<<" ";
	 }
	 if(t!=0)
	 cout<<"\n";
	}
	return 0;
}
