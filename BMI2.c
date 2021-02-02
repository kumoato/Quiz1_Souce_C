/* กิติชัย, BMI index */ 
#include <stdio.h>
int main (){
    system("cls");

    float wei , hei , bmi ;
    char ch;
    while(1)
    {
    printf("Enter the weight :");
    scanf(" %d", &wei);
    printf("Enter the height :");
    scanf(" %d", &hei);
    hei= hei / 100;
    bmi= wei / (hei * hei);
        if(bmi > 30 )
        printf(" fat \n");
        else if( bmi > 25 && bmi < 30  )
            printf(" Overload \n");
            else if( bmi > 20 && bmi < 25 )
            printf(" Good health \n");
            else if ( bmi < 20 )
            printf(" Below the rating \n");  
	break;
    }
}