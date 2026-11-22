#include<stdio.h>
int main()
{
    int a[10],x,found=0;
    printf("Enter 10 value\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nCheck for value\n");
    scanf("%d", &x);

    for (int n=0; n<10; n++)
    {
        if(a[n] == x)
        {
            printf("index number is %d\n",n);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Not Found");
    }
    return 0;
}
