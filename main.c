#include"NumClass.h"
#include <stdio.h>
int main (){
    int min,max;

    scanf("%d %d",&min,&max);
    printf("The Armstrong numbers are:");
    for(int i=min;i<=max;i++){
        if(isArmstrong(i)==1)printf(" %d",i);
    }
    printf("\nThe Palindromes are:");
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