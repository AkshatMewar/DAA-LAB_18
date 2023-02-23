#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int target)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[step - 1] < target)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
        {
            return -1;
        }
    }
    while (arr[prev] < target)
    {
        prev++;
        if (prev == fmin(step, n))
        {
            return -1;
        }
    }

    if (arr[prev] == target) {
        return prev;
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
    int result = jumpSearch(a, n, key);
    if (result==-1)
    {
        printf("Element not found in the array.");
    }
    else
    {
        printf("Element found at index %d.",result);
    }
    return 0;
}
