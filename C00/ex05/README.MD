## Exercise 05 : ft_print_comb

|               Exercise 05             |
|---------------------------------------|
|             ft_print_comb             |
| Turn-in directory : ex05/             |
| Files to turn in : ft_print_comb.c    |
| Allowed functions : write             |

 ### Objective: 

• Write a function that shows, in increasing order, all possible combinations of three different digits in increasing order - yes, repetition is voluntary.

• The result is something like this:

<pre><code>$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$></pre></code>

• 987 is not there because 789 already exists

• 999 is missing because this number does not contain exclusively different digits

• The prototype of the function should be the following:
```C
void ft_print_comb(void);
```
