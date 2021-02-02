/* กิติชัย, Case */ 
#include<stdio.h>

void main(){

    system("cls");

    int num, i , n, choose_option, a, b, c, s, area, fact, number;

    do{
        printf("Choose Your Option\n");
        printf("1. multiplication\n2. Calculate Triagular area\n3. Calculate factorial\n4. Exit\n");
        scanf("%d",&choose_option);

        if(choose_option == 4)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("\nInput number:");
            scanf("%d",&num);
            for(i=1;i<13;i++)
            printf("%d x %d = %d\n",num,i,i*num);
        break;
    
        case 2:
            printf("Enter sides of a triangle\n");
            scanf("%lf%lf%lf", &a, &b, &c);
            s = (a+b+c)/2; 
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of the triangle = %.2lf\n", area);
            return 0;
            break;
            

        case 3:
            printf("Enter a number: ");    
            scanf("%d",&number);    
            for(i=1;i<=number;i++){    
            fact=fact*i;    
            }    
            printf("Factorial of %d is: %d",number,fact);    
            return 0;  
            break;
            

        case 4:
            break;
    
        }

    }while(choose_option != 4);
    
    
}