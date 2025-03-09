void fibonacciSeries(int n)
{
    int t1=0,t2=1,nt;

    for (int i=1; i<=n; i++)
    {  
        printf("%d ", t1);
        nt = t1+t2;
        t1 = t2;
        t2 = nt;
    }

}