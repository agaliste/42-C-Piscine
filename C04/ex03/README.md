## Exercise 03 : ft_atoi

|               Exercise 03             |
|---------------------------------------|
|             ft_strcpy                 |
| Turn-in directory : ex03/             |
| Files to turn in : ft_atoi.c        |
| Allowed functions : None              |

 ### Objective: 

• Write a function that converts the beginning of the string pointed to by str to an integer
of type int

• str can start with an arbitrary number of spaces (as defined by isspace (3))

• Then str can be followed by an arbitrary number of + signs and - signs.

The - sign will change the sign of the returned integer depending on the number of - signs and
whether it is odd or even.

• Finally, str will have to be composed of digits in base 10

• Your function will have to read str, as long as the latter complies with the mentioned rules
above, and it will have to return the number found so far.

• It should not take into account overflows (overflows and underflows), in these cases
the result is considered undefined.

• You can compare its function with the true atoi function, removing the part of the signs
and overflow.

• Here is an example of a program that shows the value returned by atoi:

<p align="left">
  <img src="https://i.imgur.com/fFiVa5N.png" width="760" title="hover text">
</p>

• The prototype of the function should be the following:

```C
int ft_atoi(char *str);
```
