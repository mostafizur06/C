
#include<stdio.h>
int main()
{
    float i, x, y, a;
    float res=1;
    scanf("%f",&a);

    for(i=1; i<=a; i++)
    {
        scanf("%f %f", &x, &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            res=x/y;
            printf("%0.1f\n", res);
        }
    }
    return 0;
}
