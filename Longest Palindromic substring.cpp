 string longestPalindrome(string s)
    {
        if(s.length()==0)
        {
            return "";
        }
        int k=s.length();
        int a[k][k];           //declaring array of zero length can give error
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<k;j++)
           {
               a[i][j]=0;                //must intialis with zero
           }
       }
	   for(int i=0;i<s.length();i++)        //base case
	   {
	       a[i][i]=1;
	   }
	   int max=1,p=0,q=0;
	   for(int i=0;i<s.length()-1;i++)
	   {
	       if(s[i]==s[i+1])
	       {
	           a[i][i+1]=1;
	           max=2;
	           p=i;
	           q=i+1;
	       }
	   }
	   for(int i=s.length()-1;i>=0;i--)
	   {
	       for(int j=i+2;j<s.length();j++)
	       {
	           if(s[i]==s[j])
	           {
	               if(a[i+1][j-1]==1)
	               {
	                   a[i][j]=1;
	                   if(j-i+1>max)               //j-i+1 because we have to take length
	                   {
	                       max=j-i+1;              //length of largest substring
	                       p=i;
	                       q=j;
	                   }
	               }
	           }
	       }
	   }
    string s1="";
	   for(int i=p;i<=q;i++)
	   {
	      s1=s1+s[i];
	   }
        return s1;
    }
