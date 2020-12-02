## Exercise 11 : ft_putstr_non_printable

|               Exercise 11             |
|---------------------------------------|
|             ft_putstr_non_printable                     |
| Turn-in directory : ex11/             |
| Files to turn in : ft_putstr_non_printable.c            |
| Allowed functions : write              |

 ### Objective: 

• Write a function that displays a string of characters on the screen. If this string contains non-printable characters, they must be displayed in
hexadecimal (lowercase) preceded by a backslash.

• For example, with this parameter:
<pre><code>Coucou\ntu vas bien ?</pre></code>
• The function will have to show:
<pre><code>Coucou\0atu vas bien ?</pre></code>
• The prototype of the function should be the following:
```C
void ft_putstr_non_printable(char *str);
```
