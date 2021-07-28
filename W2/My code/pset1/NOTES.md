## "compile":

- preprocessing -> looks for # and then copies all of its content (libraries) in order to continue te process of compiling
    What is it doing? It replaces those files into code that may be used in the program. It's defining all the functions so that the program knows how to do it
    # contains all the prototipes to the code

- compiling -> transforms code into assembly

- assembling -> transforms the assembly code into machine code (binaries)
    
- linking -> takes the binary codes from my program and from all my libraries (in the case of hello.c :stdio.h and cs50.h) and links all of them together that collectively represents my code hello.c 
 

## debug50

## mv firstname.c wantedname.c
changes the name in the terminal 

## compiling in C (no extension at the end)
> make program
> ./program

## strings are nothing more than an array of characters
a string with 3 characters (like "hi!" will have a \0 at the end - see screen shot, so that the program knows it's ended. So it's not just considering how many characters in the string, but also this one. Therefore , a s tring with 3 characters like "hi" will occupy 4 bites of memory instead of 3)
this \0 is considered 0, which is NULL; if you check on the table, 0 corresponds to null
table -> Decimal ASCII Chart
