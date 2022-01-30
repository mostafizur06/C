#include<stdio.h>

int main()
{
    int i=1, j, M, N;
    while(i!=2)
    {
        int sum =0;
        scanf("%d %d", &M, &N);

        if(M<=0 || N<=0 ||N==M)
        {
            i++;
            break;
        }


        if(M>N)
        {
            for (j=N; j<=M; j++)
            {
                sum=sum+j;
                printf("%d ", j);
            }
            printf("sum=%d\n", sum);
        }

        if(N>M)
        {
            for (j=M; j<=N; j++)
            {
                sum=sum+j;
                printf("%d ", j);
            }
            printf("sum=%d\n", sum);

        }

    }
    return 0;
}
