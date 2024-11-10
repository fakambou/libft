/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakambou <fakambou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:30:59 by fakambou          #+#    #+#             */
/*   Updated: 2024/11/10 16:47:56 by fakambou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	i;

	res = (char *)malloc(sizeof (char) * len + 1);
	s_len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (NULL);
	if (res == NULL)
		return (NULL);
	if (start + len >= s_len)
		len = s_len - start;
	if (start >= s_len)
		return (NULL);
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
// int main(void)
// {
// 	char s [] = "fares tony";
// 	char *res = ft_substr(s, 5, 10);
// 	printf(("%s"), res);
// 	free(res);
// }