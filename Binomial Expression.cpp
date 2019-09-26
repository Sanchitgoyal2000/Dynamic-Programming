#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
while(t-->0)
{
 long long int n,k;
  cin>>n>>k;
 long long int a[n+1][k+1];
 for(int i=0;i<n+1;i++)   // i corresponds to n and j corresponds to k
 {
  for(int j=0;j<k+1;j++)
  {
   if(i==j)
    a[i][j]=1;
   else if(j>i)
    a[i][j]=0;
   else if(j==0)
    a[i][j]=1;
    else
   a[i][j]=(a[i-1][j]+a[i-1][j-1])%1000000007;    // nCr= n-1 C r-1 + n-1 C r;formula acc to this
  }
 }
 cout<<a[n][k]<<"\n";
 }
	return 0;
}
