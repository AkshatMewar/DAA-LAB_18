// C program to implement iterative Binary Search
#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main(void)
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
  int result = binarySearch(a,0,n-1,key);
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
