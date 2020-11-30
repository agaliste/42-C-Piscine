## Exercise 00 : ft_putchar

|               Exercise 00             |
|---------------------------------------|
|             ft_putchar                |
| Turn-in directory : ex00/             |
| Files to turn in : ft_putchar.c       |
| Allowed functions : write             |

 ### Objective: 

• Write a function that displays the character passed as a parameter.

• The prototype of the function should be the following:
```C
void ft_putchar(char c);
```

To display the character, you will have to use the write function as follows.
```C
write(1, &c, 1);
```
