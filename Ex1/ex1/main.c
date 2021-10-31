#include"NumClass.h"
#include <stdio.h>
int main (){
    int x,y,min,max;

    printf("enter 2 numbers\n");
    scanf("%d %d",&x, &y);
    max = x>y ? x : y;
    min = x<y ? x : y;
    printf("The Armstrong numbers are:");
    for(int i=min;i<=max;i++){
        if(isArmstrong(i)==1)printf(" %d",i);
    }
    printf("\nThe palindromes are:");
     for(int i=min;i<=max;i++){
         if(isPalindrome(i)==1)printf(" %d",i);
    }
    printf("\nThe Prime numbers are:");
     for(int i=min;i<=max;i++){
         if(isPrime(i)==1)printf(" %d",i);
    }
    printf("\nThe Strong numbers are:");
     for(int i=min;i<=max;i++){
        if(isStrong(i)==1)printf(" %d",i);
    }
    printf("\n");
    return 0;
    }