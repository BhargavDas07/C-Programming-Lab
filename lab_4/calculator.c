#include <stdio.h>

int main() {
    char op;
    float a,b,result;
    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter * for Multiplicatin\n");
    printf("Enter / for Division\n");
    printf("Enter an operation:\n");
    scanf("%c",&op);
    
    printf("enter 1st number:\n");
    scanf("%f",&a);
    printf("enter 2nd number:\n");
    scanf("%f",&b);
    
    switch(op){
    	
    	case'+':
    		result=a+b;
    		printf("%f",result);
    		break;
    		
    	case'-':
    		result=a-b;
    		printf("%f",result);
    		break;
    		
    	case'*':
    		result=a*b;
    		printf("%f",result);
    		break;
    	
		case'/':
    		result=a/b;
    		if(b==0){
    			printf("division by 0 is not possible");
    		}
    		printf("%f",result);
    		break;	
    		
    	default:
		printf("invalid output");
			
	}
	return 0;
}