

int countStepsTo1(int n)
{                            // index is acting as number here
    int *a=(int *)calloc((n+1),sizeof(int));
    a[1]=0;   // to make 1 we require 0 steps
    int min;
    for(int i=2;i<=n;i++)
    {
        min=a[i-1];
        if(i%3==0)
        {
            if(a[i/3]<min)
                min=a[i/3];
        }
         if(i%2==0)
        {
            if(a[i/2]<min)
                min=a[i/2];
        }
        a[i]=1+min;
    }
    return a[n];
}
