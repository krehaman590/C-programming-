#include<stdio.h>
int main(){
    float a,b,result;
    char op;
    printf("Simple Calculator using switch case\n");
    printf("--------------------------------\n");
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    switch(op){case'+':
    result=a+b;
    printf("Result=%.2f\n",result);
    break;
    case'-':
    result=a-b;
    printf("Result=%.2\n",result);
    break;
    case'*':
    result=a*b;
    printf("Result+%.2f\n");
    break;
    case'/':
    if(b!=0)
    printf("Result=%.2f\n,result");
    else
    printf("Error!Division by zero is not allowed.\n");
    break;
    default:
    printf("Invalid operator!Pleaseuse+,-,*or/.\n");
    }
    return 0;
    
}
