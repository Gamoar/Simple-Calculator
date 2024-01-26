#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;
    int y = 0;
    int opt ;
    double op ;

    system("cls");
    printf("Hello i am a smart calculator\n\n");

    printf("Choose your first number:\n");
    scanf("%d",&x);
    system("cls");

    printf("Choose any type of operation below\n");
    printf("(1)Addition (2)Subtraction\n(3)Multiplication (4)Division\n\n");
    scanf("%d",&opt);
    system("cls");
    if (opt<1 || opt>=5){
        printf("Error");
        exit(0);
    }else{
    
    printf("Choose your second number:\n");
    scanf("%d",&y);

    switch(opt){
        case 1:
            op = (x+y);
            break;
        case 2:
            op = (x-y);
            break;
        case 3:
            op = (x*y);
            break;
        case 4:
            if (y==0){
            printf("Error");
            exit(0);
            }else{
            op = (x /(double)y);  
            }
            break;
        default :
            break;
    }
    system("cls");
    printf("%.2f",op);
    }
}
    

