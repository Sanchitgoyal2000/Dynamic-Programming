int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int length[n];
        for(int i=0;i<n;i++)
        {
            length[i]=1;       //each element itself is longest subsequence
        }
        int max=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                {
                    if(length[j]+1>length[i])
                    {
                        length[i]=length[j]+1;
                    }
                }
            }
            if(length[i]>max)
            {
                max=length[i];
            }
        }
        cout<<max<<"\n";
    }
}
