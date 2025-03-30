int factorial(int num)
{
    if( num == 0 || num == 1)
    {
        return 1;
    }

    int fact = 1;

    for(int i=2; i<num ; i++)
    {
        fact *=i;

    }

    return fact;

}

int factorialRange(int start, int end)
{
    if ( start > end || start<0 || end <0)
    {
        printf("Invalid range");
    }
    for (int i = start; end=start; i++)
    {
        printf("%d", factorial(i));
    } 
}