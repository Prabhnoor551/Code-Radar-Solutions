int gateOpen(int threshold, int entryTimes[], int n)
{
    int onTimeCount = 0;

    for(int i=0; i<n; i++)
    {
        if(entryTimes[i] <=0)
        {
            onTimeCount++;
        }
    }
    return (onTimeCount >= threshold) ? 1:0;
    
}