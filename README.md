The ptintf project is collaboration between Simiso Manqele and Palesa Mogale Alx software Engineering School Students

If the program runs successfully, the return value is the amount of chars printed.



Specifier	Output

c	Character

d or i	Signed decimal integer

s	String of characters

b	Signed binary

o	Signed octal

u	Unsigned integer

x	Unsigned hexadecimal

X	Unsigned hexadecimal (uppercase)

p	Pointer address

r	Reverse string of characters

R	ROT13 translation of string

S	String with special chars replaced by their ASCII value

%	Character

Flags	Description	Specifiers

+	Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-).	i, d

(space)	Prints a blank space if the argument is a positive number	i, d

#	Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero	o, x, X

Length	Description	Specifiers

l	Prints a long int or unsigned long int	i, d, o, u, x and X

h	Prints a short int or unsigned short int	i, d, o, u, x and X

#Requirements



Allowed editors: vi, vim, emacs All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 All your files should end with a new line A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl You are not allowed to use global variables No more than 5 functions per file In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples The prototypes of all your functions should be included in your header file called main.h Don’t forget to push your header file All your header files should be include guarded Note that we will not provide the _putchar function for this project GitHub There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.



#Authorized functions and macros



write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

Authors

Simiso Manqele and Palesa Mogale
# printf
