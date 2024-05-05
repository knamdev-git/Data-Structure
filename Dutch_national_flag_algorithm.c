#include <stdio.h>

void swap (int *a , int *b){
    int temp; 
    // a = arr[i] , b = arr[j]
    //1. created temp for saving another data
    temp = *a ;
    *a = *b ;
    *b = temp ;
}

int main (){
    int size ;
    printf("Define Array size ");
    scanf("%d",&size);
    
    int arr[size];
    //2. taking input in array
    printf("\nEnter Values of Array");
    for (int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    
    //3. initialize pointers
    int start = 0 , mid = 0 , end = size-1; 
    while(start <= end){
        if (arr[start] == 0){
            swap( &arr[start], &arr[mid]);
            start++;
            mid++;
        }
        else if (arr[start] == 1){
            start++;
        }
        else if (arr[start] == 2 ){
            swap(&arr[start],&arr[end]);
            end--;
        }
    }
    //printing sorted array
    printf("\nPrintng sorted array ");
     for (int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }
    
}

