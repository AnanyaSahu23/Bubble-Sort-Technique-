// Bubble sort technique: In this technique we swap the adjacent elements repeatedly until we get the correct order in our range of elements.
//In the following program sorting is done in ascending order
//when user enters an unsorted array
//Time complexity for this array is Best Case:O(n)
//Worst Case:O(n^2)

#include <stdio.h>

int main() {
    int n;//no. of elements to be stored
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];//array of n elements initialized
    printf("Enter the elements in this array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//elements entered
    }
    int temp=0;//temporary variables to sort elements
    //Bubble Sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }}
        //Sorted array displayed
        printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        
    return 0;    
    }
   