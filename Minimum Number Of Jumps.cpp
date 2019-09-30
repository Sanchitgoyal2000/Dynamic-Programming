#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int res[n];
	    for(int i=0;i<n;i++)
	    res[i]=-1;
	    res[0]=0;
	    if(a[0]==0)
	    {
	        cout<<"-1"<<"\n";
	        continue;
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]+j>=i)
	            {
	            res[i]=res[j]+1;
	            break;
	            }
	        }
	    }
	    cout<<res[n-1]<<"\n";
	}
	return 0;
}
