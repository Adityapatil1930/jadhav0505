#include<stdio.h>
int main()
{
    int n,l,largest1=0,largest2=0;
    printf("\nEnter the limit:");
    scanf("%d",&l);
    printf("\n Enter the no:");
    while(l>0)
    {
        scanf("%d",&n);
        if(n>largest1)
        {
            largest2=largest1;
            largest1=n;
            
        }
        if(n>largest2&&n<largest1)
        {
            largest2=n;
        }l--;

    }
    printf("\n first largest no:%d",largest1);
    printf("\n second largest no:%d",largest2);
    return 0;
}
