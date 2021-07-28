#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // check if human gave me what I wanted
    if (argc != 2)
    {
        printf("missing command-line argument\n"); // bad human >:(
        return 1;
    }
    printf("hello, %s\n", argv[1]);
}

// echo $
// 1