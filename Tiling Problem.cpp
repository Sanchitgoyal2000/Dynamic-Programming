#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long int n,res;
        cin>>n;
        long long int a=1,b=2;
     if(n==1||n==2)
        {
           res=2;
        }
    else
    {
        for(int i=0;i<n-2;i++)
            {
                res=(a+b);
                a=b;
                b=res;
            }
    }
        cout<<res<<"\n";
    }
	return 0;
}
