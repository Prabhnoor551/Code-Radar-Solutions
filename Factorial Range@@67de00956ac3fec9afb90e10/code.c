int factorialRange(int n)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        return n*factorialRange(n-1);
    }
}