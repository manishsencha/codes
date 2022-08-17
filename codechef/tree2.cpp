#include <iostream>
using namespace std;
void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 = r - m; 
  
    /* create temp arrays */
    long long L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] >= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long long arr[], long long l, long long r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
int main()
{
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    long long n,temp;
	    cin >> n;
	    long long arr[n],i,j;
	    for(i=0;i<n;i++) cin >> arr[i];
	    mergeSort(arr,0,n-1);
	    //for( i=0;i<n;i++) cout << arr[i] << " ";
	    //cout << endl;
	    long long c=1,k=0 ;
	    if(arr[k]==0)
	    {
	        cout << "0"<<endl;
	    }
	    else
	    {
	        if(arr[n-1]==0)
	        {
	            c=0;
	        }
	        while(k<n-1)
	        {
	            if(arr[k]!=arr[k+1])
	            {
	                c++;    
	            }
	            k++;
	        }
	        cout << c << endl;
	    }
	}
	return 0;
}
