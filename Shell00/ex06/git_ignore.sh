find . -type f  | git check-ignore --stdin | sed 's#.*/##'
