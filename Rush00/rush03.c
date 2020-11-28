void    ft_putchar(char c);

void    rush(int x, int y)
{
    int px;
    int py;

    px = 0;
    py = 0;

    while (py < y)
    {
        while (px < x)
        {
            if (px == 0 &&  (py < 1 || py == y - 1))
            {
                ft_putchar('A');
            }
            if (px )
            {
                ft_putchar('B');
            }
            if (px == x - 1 && py == y - 1)
            {
                ft_putchar('C');
            }
            if (px > x - 1 && (py == y - 1 || py == y + 1))
            {
                ft_putchar(' ');
            }
            px++;
        }
        py++;
        px = 0;
        ft_putchar('\n');
    }   
}
