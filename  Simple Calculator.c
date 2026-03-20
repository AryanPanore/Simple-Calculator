#include<stdio.h>
int main()
{
  char opretor;
  float num1,num2,result;
  printf("Simple calculator \n");
  printf("Enter an oprator (+,-,*,/):");
  scanf("%c",&opretor); 

    printf("Enter two number: \n");
    scanf("%f%f",&num1,&num2);
      
    switch(opretor){
        case '+':
        result = num1+num2;
        printf("Result = %f\n",result);
        break;

       case '-':
        result = num1-num2;
        printf("Result = %f\n",result);
        break; 
        
         case '*':
        result = num1*num2;
        printf("Result = %f\n",result);
        break;

       case '/':
        if(num2!=0){
       result = num1/num2;
        printf("Result = %f\n",result);
        }else
        {
            printf("Error! Division by zero\n");
        }
        
        break; 
          default:
          printf("Invaild oprator! \n");
    }
     return 0;
}