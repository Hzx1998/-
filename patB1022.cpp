#include <cstdio>
#include <stack>
int main()
{
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    int sum = a + b;
    std::stack<int> s;
    //进制转换      **重点do while
    do
    {
        s.push(sum % d);
        sum /= d;
    } while (sum != 0);
    while (!s.empty())
    {
        printf("%d", s.top());
        s.pop();
    }
    return 0;
}