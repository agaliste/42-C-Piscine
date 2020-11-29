## Exercise 01 : print_groups

|               Exercise 01             |
|---------------------------------------|
|             print_groups.sh           |
| Turn-in directory : ex01/             |
| Files to turn in : print_groups.sh    |
| Allowed functions : None              |

 ### Objective: 

• Enter a command line that determines and displays the list of groups to which
belongs to the user indicated in the FT_USER environment variable, separated by
commas without spaces.

• Examples:

* with FT_USER=nours, the result is "god,root,admin,master,nours,bocal" (without
the quotation marks)
<pre><code>    $>./print_groups.sh
    god,root,admin,master,nours,bocal$></pre></code>

* with FT_USER=daemon, the result is "daemon,bin" (without the quotes)
<pre><code>    $>./print_groups.sh
    daemon,bin$></pre></code>

```diff
! man id
```
