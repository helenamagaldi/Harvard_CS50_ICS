#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before : ");
    printf("After: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[1] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c\n", s[i]);
        }
    }
    printf("\n");
}