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
	    int count[n+1];
	    count[0]=0;
	    count[1]=1;
	    count[2]=2;
	    count[3]=3;
	    if(n<=3)
	    {
	        cout<<n<<"\n";
	        continue;
	    }
	    for(int i=4;i<=n;i++)
	    {
	        int ans=i;          //means only number 1 will give answer
	        for(int j=1;j<=i/2;j++)
	        {
	            int k=i-(j*j);
	            if(k>=0)
	            {
	                if(ans>count[k]+1)
	                {
	                    ans=count[k]+1;
	                }
	            }
	        }
	        count[i]=ans;
	    }
	    cout<<count[n]<<"\n";
	}
	return 0;
}
