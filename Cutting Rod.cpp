#include <iostream>  //cut the rod to maximise the profit
using namespace std;

int main()
{
   int length;
   cin>>length;
   int n;
   cin>>n;
   int price[n];
   for(int i=0;i<n;i++)
    cin>>price[i];
   //int price[4]={2,5,7,8};
   int a[n+1][length+1];
   int p,q;
   for(int i=0;i<=n;i++)
   {
    for(int j=0;j<=length;j++)
    {
     if(i==0||j==0)
     a[i][j]=0;
     else if(j==i)
     {
      a[i][j]=price[i-1];
      if(a[i-1][j]>a[i][j])
       a[i][j]=a[i-1][j];
     }
     else if(i>j)
      a[i][j]=a[i-1][j];
     else
      {
       a[i][j]=a[i][j-i]+a[i][i];
       if(a[i-1][j]>a[i][j])
       a[i][j]=a[i-1][j];
      }
    }
   }

   cout<<a[n][length];  //maximum profit
}
