#include <stdio.h>
#include <string.h>

int is_palindrome(char a[])
{
    int length = strlen(a);
    int val = length - 1;

    int i = 0, j = val;
    int count = 1;

    while (i <= j)
    {
        if (a[i] != a[j])
        {
            count = 0;
        }

        i++, j--;
    }

    if (count == 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    char s[1001];

    scanf("%s", s);

    int num = is_palindrome(s);

    if (num == 1)
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not Palindrome");
    }

    return 0;
}