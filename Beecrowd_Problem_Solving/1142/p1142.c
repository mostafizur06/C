
#include <stdio.h>
int main()
{
    int i=1,j, y, temp=0;
    scanf("%d", &y);
    for(i=1; i<=100000000; i=i+4 )
    {
        for(j=i; j<i+3; j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
        temp++;
        if(temp==y)
            break;
    }
    return 0;
}
