//打印字符串图案
#include <cstdio>
int main()
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    //字符元素输入空格不代表结束
    /*eg：scanf("%d%c", &n, &c)  如果输入10 a 则空格输入a未被输入其他没有这项要求都是以空格或换行结束*/
    for (int j = 0; j < (n + 1) / 2; ++j)
    {
        if (j == 0 || j == (n + 1) / 2 - 1)
        {
            for (int i = 0; i < n; ++i)
            {
                putchar(c);
            }
            putchar('\n');
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (i == 0 || i == n - 1)
                {
                    putchar(c);
                }
                else
                {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }

    return 0;
}