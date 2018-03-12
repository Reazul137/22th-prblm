#include<stdio.h>
int main()
{
    int i, number[5], total=0;

    printf("write the first number : ");
    scanf("%d",&number[0]);

    printf("write the second number : ");
    scanf("%d",&number[1]);

    printf("write the third number : ");
    scanf("%d",&number[2]);

    printf("write the fourth number : ");
    scanf("%d",&number[3]);

    printf("write the fifth number : ");
    scanf("%d",&number[4]);

    for(i = 0; i < 5; i++ )
    {
        if((number[i]%2) !=0)
        {
            total += number[i];
        }
    }
    printf("Sum of all add values : %d ", total);


    return 0;
}
