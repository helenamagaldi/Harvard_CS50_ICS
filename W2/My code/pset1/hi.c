#include <cs50.h>
#include <stdio.h>


// int main(void)
// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';
    
//     printf("%c%c%c\n", c1, c2, c3); // this is boring, it will just print Hi!
// }


// int main(void)
// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';
    
//     printf("%i %i %i\n", c1, c2, c3); // output: 72, 23, 74, which are the corrrespondent to the letters H I and !
// }

int main(void)
{
    string s = "HI!";
    
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[]);
    // in this case the output will consider that last character 0 (null) and print it out
    
}