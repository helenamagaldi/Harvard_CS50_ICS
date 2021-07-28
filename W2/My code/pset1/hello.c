#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}

// clang -o hello hello.c -lcs50
// or:    // make hello 
// ./hello 