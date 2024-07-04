#include <stdio.h>

int main (){
    // 
    int num , rem , sum ;
    scanf("%d",&num);

    while (num!= 0)
    {
        rem = num % 10;
        sum = sum + rem ;
        num /= 10 ;
    }
    
    printf("\nNumber is %d",sum);
}