#include<stdio.h>
int main()
{
    int n, i, j, a, b;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a, &b);

        if(a<=b)
        {
            int sum=0;
            for(j=a+1; j<b; j++)
            {
                if(j%2!=0)
                {
                    sum = sum + j;
                }
            }
            printf("%d\n",sum);
        }

        if(a>b)
        {
            int sum=0;
            for(j=b+1; j<a; j++)
            {
                if(j%2!=0)
                {
                    sum = sum + j;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
