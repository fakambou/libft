/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakambou <fakambou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:57:32 by fakambou          #+#    #+#             */
/*   Updated: 2024/11/10 14:20:45 by fakambou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s++)
	{
		ft_putstr_fd(*s, fd);
		ft_putchar_fd('\n', fd);
	}
}
// int main(void)
// {
// 	char s [] = "fares";
// 	ft_putendl_fd(s, 1);
// }
