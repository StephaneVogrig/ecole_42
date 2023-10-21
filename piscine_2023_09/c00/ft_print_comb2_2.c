//
//  ft_print_comb2_2.c
//  
//
//  Created by StephaneVogrig on 20/10/2023.
//

#include <unistd.h>

void ft_print_comb2(void)
{
    int    i;
    int    j;
    char    str[5];
    
    str[2] = ' ';
    i = 0;
    while (i <= 98)
    {
        str[0] = i / 10 + '0';
        str[1] = i % 10 + '0';
        j = i + 1;
        while (j <= 99)
        {
            str[3] = j / 10 + '0';
            str[4] = j % 10 + '0';
            write(1, str, 5);
            if(i < 98)
                write(1, ", ", 2);
            j++;
        }
        i++;
    }
}

{
    char    str[5];
    
    str[2] = ' ';
    str[0] = '0';
    while (str[0] <= '9')
    {
        str[1] = '0';
        while (str[1] <= '9')
        {
            str[3] = str[0] + (str[1] == '9');
            while (str[3] <= '9')
            {
                str[4] = '0' + (str[3] == str[0]) * (str[1] - '0' + 1);
                while (str[4] <= '9')
                {
                    write(1, str, 5);
                    if(!(str[0] == '9' && str[1] == '8'))
                        write(1, ", ", 2);
                    ++str[4];
                }
                ++str[3];
            }
            ++str[1];
        }
        ++str[0];
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}

