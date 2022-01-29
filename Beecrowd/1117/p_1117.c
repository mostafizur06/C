#include<stdio.h>

int main()
{
    int i=0;
    float a, sum =0;
    while(i!=2)
    {
        scanf("%f", &a);

        if(a>=0 && a<=10)
        {
            sum=sum+a;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    printf("media = %0.2f\n", sum/2);
    return 0;
}
