/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakambou <fakambou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:45:45 by fakambou          #+#    #+#             */
/*   Updated: 2024/11/09 19:10:39 by fakambou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	while (s[i])
	{
		if (s[i] == (char )c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// int main(void)
// {
// 	char s [] = "mahdi haut niveau";
// 	char c = 'h';
// 	printf("%s",ft_strrchr(s,c));
// }