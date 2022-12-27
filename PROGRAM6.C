#include <stdio.h>

int main() {
int n;
 char option;
 do{
    scanf("%d", &n);
    if (n > 0) 
            printf("+ve");
        else if (n<0)
            printf("-ve");
            else
            printf("zero");
            printf("\n\nWant to check more [Y]es/[N]o?");
            scanf("%c",&option);
             scanf("%c",&option);
 }
while(option=='y'|| option=='y');
return 0;
}
