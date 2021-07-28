#include <cs50.h>
#include <stdio.h>

// treating a string as an array

// just prints the input
// int main(void)
// {
//     string s = get_string("Input: ");
//     printf("Output: ");
    
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         printf("%c", s[i]);
//     }
//     printf("\n");
// }

// int main(void)
// {
//     string s = get_string("Input: ");
//     printf("Output: ");
    
//     // strlen : please, figure out the size of the string s 
//     for (int i = 0; i strlen(s); i++)
//     {
//         printf("%c", s[i]);
//     }
//     printf("\n");
// }

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}