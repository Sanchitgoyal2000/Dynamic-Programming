#include <iostream>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int b[n];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    int sum;
	    qsort(b,n,sizeof(int),cmp);
	    cin>>sum;
	    int a[n+1][sum+1];
	    for(int i=0;i<sum+1;i++)
	    a[0][i]=0;
  for(int i=1;i<=n;i++)
  {
   for(int j=0;j<sum+1;j++)
   {
    if(j==0)
     a[i][j]=1;
    else if(j<b[i-1])
     a[i][j]=a[i-1][j];
    else
     a[i][j]=a[i-1][j]+a[i][j-b[i-1]];
   }
  }
  cout<<a[n][sum]<<"\n";
	}
	return 0;
}
