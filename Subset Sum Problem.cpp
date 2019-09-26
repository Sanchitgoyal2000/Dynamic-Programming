#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
 int n=6;
 int b[n]={3,5,7,9,11};
 int sum=35,sum1=0;
 int a[n][sum+1];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<sum+1;j++)
  {
   a[i][j]=0;
  }
 }
 for(int i=0;i<n;i++)
 {
  a[i][0]=1;
  a[i][b[i]]=1;
 }
 int h=0;
 for(int i=0;i<n;i++)
 {
  sum1=sum1+b[i];
  for(int j=0;j<sum+1;j++)
  {
     if(j>sum1)
      a[i][j]=0;
     else if(a[i-1][j-b[i]]==1)
      a[i][j]=1;
      else if(a[i-1][j]==1)
       a[i][j]=1;
  }
  if(a[i][sum]==1)
  {
   h=1;
   break;
  }
 }
 if(h==1)
 {
  cout<<"YES";
 }
 else
  cout<<"NO";
}
