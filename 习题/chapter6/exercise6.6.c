//第六章习题6
/***********************************************************
- 输出一下的杨辉三角形（要求输出10行）。
- 1
- 1   1
- 1   2   1
- 1   3   3   1
- 1   4   6   4   1
- 1   5  10  10   5   1
- ... ... ... ... ... ...
***********************************************************/

#include <stdio.h>

int main()
{
    int a;
    for(int i=1; i<=10; i++)
    {
        a = 1;
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a);
            a = a*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}
