#include <stdio.h>
int main()
{
    int i, j, end=1, num=0;
    for(i=9; i>1;i--)
    {
        for(j=9; j>=end;j--)
        {
            if(i%2!=0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", num);
            }
        }
        printf("\n");
        end=end+1;
        num=num+1;
    }
    return 0;
}