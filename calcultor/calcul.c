#include<stdio.h>
int main()
{   while (1)
{
    char op;
    double num1,num2,res;
    int i;           
    printf("\nEnter an operator (+, -, *, /, ^) if want to exit press x: ");
    scanf("%c", &op);
    
    if (op == 'x')
    {
        break; 
    }
    printf("Enter two first and second operand: ");
    scanf("%lf %lf", &num1, &num2);    
    while(getchar() != '\n');
    switch (op)
    {
    case '+':
         res = num1 + num2;
         printf("%.1lf + %.1lf = %.1lf",num1,num2,res);
        break;

    case '-':
         res = num1 - num2;
         printf("%.1lf - %.1lf = %.1lf",num1,num2,res);
        break;    
    
    case '*':
         res = num1 * num2;
         printf("%.1lf * %.1lf = %.1lf",num1,num2,res);
        break;
    
    case '/':
        if (num2 == 0)
        {
            printf("inposible \n");
            return 1;
        }
        
         res = num1 / num2;
         printf("%.1lf / %.1lf = %.1lf",num1,num2,res);
        break;

    case '^':
        res = 1;
        for ( i = 0; i < num2; i++)
        {
            res *= num1;
        }
        printf("%.1lf ^ %.1lf = %.1lf",num1,num2,res);
        break;
    }
}    
return 0;    
    
}

