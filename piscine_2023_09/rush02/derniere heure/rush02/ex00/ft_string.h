/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 05:01:42 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 05:04:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>

void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);
int		msg_error(int error);

#endif
