## Exercise 04 : ft_putnbr_base

|               Exercise 04             |
|---------------------------------------|
|             ft_putnbr_base                 |
| Turn-in directory : ex04/             |
| Files to turn in : ft_putnbr_base.c        |
| Allowed functions : write              |

 ### Objective: 

• Write a function that displays a number at the handset at a specified base.

• This number is provided in the form of an int and the base in the form of a string
characters.

• The base contains all the symbols that can be used to display the number:

* 0123456789 is the base that is usually used to represent our numbers
decimals;
* 01 is a binary base;
* 0123456789ABCDEF is a hexadecimal base;
* poniguay is an octal base.

• The function must handle negative numbers.

• If a parameter contains an error, the function does not show anything. An error can be:

* the base is empty or its size is 1;
* the base contains the same character twice;
* the base contains the characters + or -.

• The prototype of the function should be the following:
```C
void ft_putnbr_base(int nbr, char *base);
```
