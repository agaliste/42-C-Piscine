## Exercise 03 : ft_strjoin

|               Exercise 03             |
|---------------------------------------|
|             ft_strjoin                 |
| Turn-in directory : ex03/             |
| Files to turn in : ft_strjoin.c        |
| Allowed functions : malloc              |

 ### Objective: 

• Write a function that concatenates the set of pointed character strings
by <code>strs</code>, separating them by <code>sep</code>.

• <code>size</code> represents the size of <code>strs</code>.

• If <code>size</code> is 0, it will be necessary to return an empty character string that we can
<code>free()</code>.

• The prototype of the function should be the following:
```C
char *ft_strjoin(int size, char **strs, char *sep);
```
