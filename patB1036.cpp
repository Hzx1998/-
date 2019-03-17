#include <cstdio>
int main()
{
    int n;
    char c;
    scanf("%d%c", &n, &c);
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