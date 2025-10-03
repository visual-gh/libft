/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Visual <github.com/visual-gh>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:38:06 by Visual            #+#    #+#             */
/*   Updated: 2025/10/03 04:15:12 by Visual           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (dst);
}
