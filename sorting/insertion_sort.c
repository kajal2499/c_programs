/**
*  Insertion Sort
*
*
 * ***********/

#include<stdio.h>
// Swap two values by value
// Swap two values by Address
// Swap two values using third variable
// Swap two values without using third variable

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n){
 
    int i, key, j;
    for (i = 1; i <= n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */  
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
   int arr[] = {4, 3, 2, 10, 12 ,5, 1 , 9};
   int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}