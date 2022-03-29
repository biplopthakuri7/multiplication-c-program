#include <stdio.h>
int main()
{
    char name[100];
   
    printf("Enter your name\n");
    scanf("%s",name);

    printf("Good morning %s\n", name);
    return 0;
}