/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakambou <fakambou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:22:45 by fakambou          #+#    #+#             */
/*   Updated: 2024/11/09 19:10:07 by fakambou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] && len_dest + 1 < size)
		dest[len_dest++] = src[i++];
	return (ft_strlen(src + i) + len_dest);
}
