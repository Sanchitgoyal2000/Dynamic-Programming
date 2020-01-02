 int climbStairs(int n) {
        if(n<=2)                   //can take only 1 or 2 steps
            return n;
        int count[n+1];
        count[0]=1;
        count[1]=1;
        count[2]=2;
        for(int i=3;i<=n;i++)
        {
            count[i]=count[i-1]+count[i-2];
        }
        return count[n];
    }
