## Exercise 02 : ft_ultimate_range

|               Exercise 02             |
|---------------------------------------|
|             ft_ultimate_range                 |
| Turn-in directory : ex02/             |
| Files to turn in : ft_ultimate_range.c       |
| Allowed functions : malloc              |

 ### Objective: 

Write a function <code>ft_ultimate_range</code> that allocates memory and data to an array
of int. This array of int will contain all the values between <code>min</code> and <code>max</code>.

• <code>Min</code> included - <code>max</code> excluded.

• The prototype of the function should be the following:
```C
char *ft_strcpy(char *dest, char *src);
```

• It will return the size of <code>range</code> (or -1 in case of problems).

• If the <code>min</code> value is greater than or equal to the <code>max</code> value, range will point to NULL and return
0.
