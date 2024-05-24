/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:52:25 by rcolorad          #+#    #+#             */
/*   Updated: 2024/01/12 16:06:20 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (src <= dst)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	int source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int destination[10];

	ft_memmove(source + 2, source, sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
		printf("destination[%d] = %d\n", i, destination[i]);

	for (int i = 0; i < 10; i++)
		printf("source[%d] = %d\n", i, source[i]);
}
*/
