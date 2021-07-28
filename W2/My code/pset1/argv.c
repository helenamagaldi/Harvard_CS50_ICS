#include <cs50.h>
#include <stdio.h>

// command-line argument
// int main(void)
// argv - arg vector
// argc - arg count
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello world\n");

    }
}

// make argv
// ./ helena
// h
// e
// l
// e
// n
// a
