[![MIT license](https://img.shields.io/github/license/bhalut/Tropical-Puzzle.svg)](https://github.com/Bhalut/Tropical-Puzzle/blob/master/LICENSE)
[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)

# PRINTF FUNCTION

This is a a custmom version of the printf fuction, which have the most basic functionalities such as printing a string, a character and also printing an integer number.

## DESCRIPTION

The printf project is a program that is going to print a variety of characters and numbers .

and return the number of characters it is going to print, in the case of a char will be just one.

## HOW DOES IT WORK

Using a composite data type such as **struct** which will contain the declaration of a char pointer `*fmt` and a pointer to a function called `*func`, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (fmt) and the format.

![struture defined](https://i.imgur.com/yp02tVM.png)

So the format is a string which characters will be printed without modification (literally), until the string found the format specifiers which start with the **% character**, and when there is a match between the specifier in the struct and in the format it will indicate the location to the function and this function will print out the string, character or Number, depends the function.

So this is an example of a struct that will call different functions for printing: char, string and numbers depending the match.

![structure](https://i.imgur.com/8xRWeEn.png)

This is example of the string format with the specifiers and the arguments as well.

**Len** is going to be the the number of characters the function _printf is going to print out. 

![code line](https://i.imgur.com/FwfNlEz.png)

This will be the output:

![Output](https://i.imgur.com/Ub9jFY5.png)

We use different functions in order to split the work. We use different functions; for example a function for getting the match between the format and the struct, functions for printing out the string, for printing out a char and a number.

***Example of the function that match the characters***

This is the function that finds the match between the char ("c","s","d","i", "%") in struct `st_format` and the `format` string. and also if there is not match it will print the % and the next character that is different to the ones in the struct

![Example 1](https://i.imgur.com/ZcFOBfA.png)

![Example 2](https://i.imgur.com/gcLsMpq.png)

## HOW TO DOWNLOADED

you can go to the clone or downloaded green botton and copy the link that it will provided

![Clone Repository](https://i.imgur.com/5PrtuPG.png)

or use directly this link:

[https://github.com/Bhalut/printf.git](https://github.com/Bhalut/printf.git)

Go to you terminal and type
```Bash
git clone [link you just copied]
```
then you will have the repository in your computer

Once you do that you can use this main template and fallow the instructions for compilation

**Compilation And example of running the function**

- Your code will be compiled this way:

```Bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

This is a main you can use to tested out the _ptrintf function

```C
    #include <limits.h>
    #include <stdio.h>
    #include "holberton.h"

    /**
     * main - Entry point
     *
     * Return: Always 0
     */
    int main(void)
    {
        int len;
        int len2;
        unsigned int ui;
        void *addr;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        ui = (unsigned int)INT_MAX + 1024;
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        return (0);
    }
```
compile and run the executable

```Bash
    user@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
    user@ubuntu:~/c/printf$ ./printf
    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]
    Character:[H]
    Character:[H]
    String:[I am a string !]
    String:[I am a string !]
    Percent:[%]
    Percent:[%]
    Len:[12]
    Len:[12]
    Unknown:[%r]
    Unknown:[%r]
    user@ubuntu:~/c/printf$
```

You can open a man page and get more information about it.

```Bash
user@ubuntu:~/c/printf$ **man ./man_3_printf**
```
![Man Page](https://i.imgur.com/FleDcIu.png)

## AUTHORS

[Erika Osorio Gerrero](https://github.com/erikaosgue) and [Abdel Mejia](https://github.com/bhalut)

## LICENSE

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details