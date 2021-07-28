#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    
    int y = get_int("y: ");
    
    // wont work with 4000000000 because it excedes the 32bit avaible for get_int. 
    //what can i do? get_long
    // long x = get_long("x: ");
    // long y = get_long("y: ")
    
    printf("%i\n", x + y);
}