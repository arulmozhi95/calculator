#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    char a;
    scanf("%c",&a);
    int num1,num2;
    scanf("%d,%d",&num1,&num2);
    switch (a){
        case '+':
           return num1+num2;
           break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '%':
            return num1%num2;
            break;
        case '/':
            return num1/num2;
            break;
    }
    return 0;
       
}