#include <stdio.h>
 
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}
 
int main(void)
{
	int n,x;
	printf("Enter the size of array ");
	scanf("%d",&n);
	
   int arr[n];
   for(int a=0;a<n;a++)
   {
   	printf("enter the %d number ",a+1);
   	scanf("%d",&arr[a]);
   	
   }
   printf("enter the number u want to search ");
   scanf("%d",&x);
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                              result+1);
   return 0;
}
