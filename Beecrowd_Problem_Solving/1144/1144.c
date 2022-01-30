
#include<stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {

        int x=i, y=i*i, z=i*i*i;
        printf("%d %d %d\n", x, y, z);

        printf("%d %d %d\n", x, y+1, z+1);

    }

    return 0;

}
