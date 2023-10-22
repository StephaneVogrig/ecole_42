//
//  ft_print_comb2_3.c
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

int main(void)
{
    ft_print_comb2();
    return 0;
}