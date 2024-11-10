/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakambou <fakambou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:36:33 by fakambou          #+#    #+#             */
/*   Updated: 2024/11/10 18:16:42 by fakambou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = (char *)malloc(sizeof (char) * (strlen(s1) + strlen(s2) + 1));
	i = 0;
	j = 0;
	if (res == NULL)
		return(NULL);
	while(s1[i])
	{	
		res[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		res[i++] = s2[j++];
	}
	res[i] = '\0';
	return (res);
}
// int main(void)
// {
// 	 char s1 [] = "fares ";
// 	 char s2 [] = "le marocain";
// 	 char *res  = ft_strjoin(s1, s2);
// 	 printf("%s", res);
// 	 free (res);
// }