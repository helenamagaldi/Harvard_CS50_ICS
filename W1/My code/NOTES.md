~/ $ make first
clang -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow    first.c  -lcrypt -lcs50 -lm -o first
~/ $ first
bash: first: command not found
~/ $ first.c
bash: first.c: command not found
~/ $ ./firsy
bash: ./firsy: No such file or directory
~/ $ ./first
What's your name? helena
hello, helena world~/ $ 
~/ $ make first
clang -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow    first.c  -lcrypt -lcs50 -lm -o first
~/ $ ./first
What's your name? helena
hello, helena
~/ $ make first
clang -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow    first.c  -lcrypt -lcs50 -lm -o first
first.c:6:5: error: use of undeclared identifier 'string'; did you mean 'stdin'?
    string answer = get_string("What's your name? ");
    ^~~~~~
    stdin
/usr/include/stdio.h:137:14: note: 'stdin' declared here
extern FILE *stdin;             /* Standard input stream.  */
             ^
first.c:6:11: error: expected ';' after expression
    string answer = get_string("What's your name? ");
          ^
          ;
first.c:6:5: error: expression result unused [-Werror,-Wunused-value]
    string answer = get_string("What's your name? ");
    ^~~~~~
first.c:6:12: error: use of undeclared identifier 'answer'
    string answer = get_string("What's your name? ");
           ^
first.c:6:21: error: implicit declaration of function 'get_string' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
    string answer = get_string("What's your name? ");
                    ^
first.c:7:27: error: use of undeclared identifier 'answer'
    printf("hello, %s\n", answer);
                          ^
6 errors generated.
make: *** [<builtin>: first] Error 1
~/ $ ls
first*  first.c
~/ $ ls
first*  first.c  second.c
~/ $ rm hello
rm: cannot remove 'hello': No such file or directory
~/ $ mv hello.c goodbye.c
mv: cannot stat 'hello.c': No such file or directory
~/ $ touch hello.c
~/ $ mv hello.c goodbye.c
~/ $ ls
first*  first.c  goodbye.c  second.c
~/ $ mkd8r lecture
bash: mkd8r: command not found
~/ $ mkdir lecture
~/ $ mv goodbye.c lecture/
~/ $ ls
first*  first.c  lecture/  second.c
~/ $ cd lecture/
~/lecture/ $ ls 
goodbye.c
~/lecture/ $ mv goodbye.c hello.c
~/lecture/ $ ls
hello.c
~/lecture/ $ mv hello.c ..
~/lecture/ $ ls
~/lecture/ $ cd ..
~/ $ ls
first*  first.c  hello.c  lecture/  second.c
~/ $ rm lecture/
rm: cannot remove 'lecture/': Is a directory
~/ $ rmdir lecture/
~/ $ ls
first*  first.c  hello.c  second.c
~/ $ make first
clang -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow    first.c  -lcrypt -lcs50 -lm -o first
~/ $ ls
first*  first.c  hello.c  second.c
~/ $ cd
~/ $ cp
cp: missing file operand
Try 'cp --help' for more information.
~/ $ ls
first*  first.c  hello.c  second.c
~/ $ mkdir
mkdir: missing operand
Try 'mkdir --help' for more information.
~/ $ touch NOTES.md
~/ $ 


