## Exercise 05 : ft_atoi_base

|               Exercise 05             |
|---------------------------------------|
|             ft_atoi_base                 |
| Turn-in directory : ex05/             |
| Files to turn in : ft_atoi_base.c        |
| Allowed functions : None              |

 ### Objective: 

• Write a function that converts the beginning of the string pointed to by str into a
integer of type int.

• str is in a specific base passed as the second argument of the function.

• With the exception of the base system, this function must reproduce the behavior
by ft_atoi.

• If a parameter contains an error, the function returns 0. An error can be:

* the base is empty or its size is 1;
* the base contains the same character twice;
* the base contains the characters + or - or spaces;

• The prototype of the function should be the following:
```C
int ft_atoi_base(char *str, char *base);
```
