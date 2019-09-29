#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    int max=-1;
	    cin>>n>>m;
	    char a[n+1],b[m+1];  //as to store null character +1 extra
	    int i;

	    for(i=0;i<n;i++)
	    cin>>a[i];
	    a[i]='\0';

	    for(i=0;i<m;i++)
	    cin>>b[i];
	    b[i]='\0';

	    int res[n+1][m+1];
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=m;j++)
	        {
	            if(i==0||j==0)
	            {
	                res[i][j]=0;
	            }
	            else if(a[i-1]==b[j-1])// here i-1 and j-1 as not i and j
	            {
	                res[i][j]=res[i-1][j-1]+1;
	            }
	            else
	            {
	                if(res[i][j-1]>res[i-1][j])
	                {
	                    res[i][j]=res[i][j-1];
	                }
	                else
	                res[i][j]=res[i-1][j];
	            }
	            if(res[i][j]>max)
	            max=res[i][j];
	        }
	    }
	    cout<<max<<"\n";
	}
	return 0;
}
