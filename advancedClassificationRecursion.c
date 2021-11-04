#include"NumClass.h"
#include <stdio.h>
#include <math.h>


int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return FALSE;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int length(int num){
    if(num/10==0)  
     {
        return TRUE;
      }
    else
        return length(num/10)+1;
}
int isArmstrong (int num){
    int count=length(num);
if(num==isArmstrong2(num,count)){
    return TRUE;
}
else
    return FALSE;
}
int isArmstrong2 (int num,int count){
if(num>0)
    return (pow(num%10,count) +isArmstrong2(num/10,count));
else
    return FALSE;
}
int isPalindrome(int num)
{
    if(num == reverse(num)){
        return TRUE;
    }   
    else
        return FALSE;
}

