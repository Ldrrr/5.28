int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
  int i=0,j=ASize-1;
  while(i<j)
  {
      while(A[i]%2==0&&i<j)
      {
          i++;
      }
      while(A[j]%2!=0&&i<j)
      {
          j--;
      }
      int t=A[i];
      A[i++]=A[j];
      A[j--]=t;
  }
  * returnSize=ASize;
  return A;
}
