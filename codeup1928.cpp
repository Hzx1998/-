//求日期差值
#include <cstdio>
bool isLyear(int &year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t1, t2;
    scanf("%d%d", &t1, &t2);
    const int ayear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const int lyear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (t1 > t2)
    {
        int temp = t1;
        t1 = t2;
        t2 = temp;
    }
    int sum = 0;
    int y1 = t1 / 10000, y2 = t2 / 10000;
    int m1 = t1 % 10000 / 100, m2 = t2 % 10000 / 100;
    int d1 = t1 % 100, d2 = t2 % 100;
    for (int i = y1; i < y2; ++i)
    {
        if (isLyear(i))
        {
            sum += 366;
        }
        else
        {
            sum += 365;
        }
    }
    if (m1 <= m2)
    {
        for (int i = m1; i < m2; ++i)
        {
            if (isLyear(y2))
            {
                sum += lyear[i - 1];
            }
            else
            {
                sum += ayear[i - 1];
            }
        }
        if (d1 < d2)
        {
            sum += (d2 - d1 + 1);
        }
        else
        {
            sum -= (d1 - d2 + 1);
        }
    }
    else
    {
        for (int i = m2; i < m1; ++i)
        {
            if (isLyear(y2))
            {
                sum -= lyear[i - 1];
            }
            else
            {
                sum -= ayear[i - 1];
            }
        }
        if (d1 < d2)
        {
            sum += (d2 - d1 + 1);
        }
        else
        {
            sum -= (d1 - d2 + 1);
     
        }
    }
    printf("%d",sum);
    return 0;
}