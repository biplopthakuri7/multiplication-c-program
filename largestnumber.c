#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c){
        printf("The largest number is : %d",a);
    }
    else if (b>a && a>c){
        printf("The largest number is : %d",b);
    }
    else if(c>a && a>b){
        printf("The Largest number is :%d ",c);
    }
    else{
        printf("All numbers are equal");
    }
    
    return 0;
}