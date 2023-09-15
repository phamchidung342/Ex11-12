#include<stdio.h>
void main(){
    int ary[10];
    int i, total, high;
    for (i = 0; i < 10; i++)
    {
        printf("\n Enter value: %d:", i + 1);
        scanf("%d", &ary[1]);
    }
    {
        printf("\n Highest value entered was %d", high);
        for (i = 0, total = 0; i < 10; i++)
        total = total + ary[i];

        printf("\nThe average of the element of ary is %d", total/i);
    }

}