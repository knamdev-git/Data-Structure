#include <stdio.h>
#include <string.h>

void swap (int *a , int *b){
    int temp; 
    // a = arr[i] , b = arr[j]
    //1. created temp for saving another data
    temp = *a ;
    *a = *b ;
    *b = temp ;
}

int SwitchNumbers(char c){
    switch(c){
        //Red color = 0
        case 'R':
        case 'r':
            return 0 ;
        //white color = 1
        case 'W':
        case 'w':
            return 1 ;
        // blue color = 2
        case 'B':
        case 'b':
            return 2 ;
        default:
            return -1;
    }
}
int main()
{
    int size ;
    printf("Define string size ");
    scanf("%d",&size);
    
    char string[size];
    
    printf("Type Colors randomly ");

    //storing colors name in string
    for (int i = 0 ; i < size ; i++){
        scanf(" %c",&string[i]);
    }
    // convertng the string letters into numbers 
    int ConvertArray[size];
    for (int i = 0 ; i < size ; i++){
        ConvertArray[i] = SwitchNumbers(string[i]);
    }
    
    int start = 0 ,  end = size-1 , mid=0 ;
   
    while(start <= end){
        if (ConvertArray[start] == 0){
            swap( &ConvertArray[start] , &ConvertArray[mid]);
            start++ ;
            mid++ ;
        }
        else if (ConvertArray[start] == 1){
            start ++ ;
        }
        else if (ConvertArray[start] == 2){
            swap(&ConvertArray[start] , &ConvertArray[end]);
            end-- ;
        }
    }    
    
    printf("\nPrintng sorted string ");
     for (int i = 0 ; i < size ; i++){
        printf("%c ",ConvertArray[i]);
    }
    return 0;
}

