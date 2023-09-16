int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     nb;
        long    nbl;

        i = 0;
        sign = 1;
        nbl = 0;
        while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
                i++;
        while (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                        sign = - sign;
                i++;
        }
        while ('0' <= str[i] & str[i] <= '9')
        {
                nbl = nbl * 10 + (str[i] - 48);
                i++;
        }
        nb = nbl * sign;
        return (nb);
}

