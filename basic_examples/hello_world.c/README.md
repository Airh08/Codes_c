## How "Hello, World!" program works?
- The __include__ is a prepocessor command that tells the compiler to include the contents of __stdio.h__ (standard input and output) file in the program.

- The __stdio.h__ file contains functions such as __scanf()__ and __printf()__ to take input and display output respectively.

- If you use the __printf()__ function without writing 
~~~
#include <stdio.h>
~~~
,the program will not compile.

- The execution for a C program starts from the main() function.
- __printf()__ is a library function to send fromatted ouput to the screen.
- The 
    ~~~ 
    return:0 
    ~~~
    statement is the "Exit status" of the program. In simple terms, the program ends with this statement.
