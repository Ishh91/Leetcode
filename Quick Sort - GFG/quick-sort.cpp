//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
       static void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int pivot=partition(arr,low,high);
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }
    static int partition(int arr[], int low, int high)
    {
        // your code here
        int pivot=arr[low];
        int i=low+1;
        int j=high;
        while(i<=j)
        {
            while( i<=j && arr[i]<=pivot )
            {
                i++;
            }
            while(arr[j]>pivot )
            {
            
                j--;
            }
                if(i<j)
                {
                swap(arr, i, j);
                }
            
        }
        swap(arr,low,j);
        return j;
    }
    static void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }


};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends