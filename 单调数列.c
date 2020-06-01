bool isMonotonic(int* A, int ASize)
{
    int i,cnt=0;
    for(i=0;i<ASize-1;i++)
    {
        if(A[i]<=A[i+1])
        {
            cnt++;
        }
    }
    if(cnt==ASize-1) return true;
    cnt=0;
   for(i=0;i<ASize-1;i++)
    {
        if(A[i]>=A[i+1])
        {
            cnt++;
        }
    }
    if(cnt==ASize-1) return true;
    return false;
}
