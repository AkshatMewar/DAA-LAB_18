#include <stdio.h>

int lsearch(int a[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        return i;
    }
    return -1;
}

int main()
{
  int a[100],n;
  int i,key;
  printf("Enter the no. terms = ");
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Enter the key you want to search = ");
  scanf("%d",&key);
  int result = lsearch(a, n, key);
  if(result == -1)
  {
    printf("Element not found");
  }
  else
  {
    printf("Element found at index : %d", result);
  }
  return 0;
}
