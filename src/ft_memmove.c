/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:39:56 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_p;
	unsigned char		*dest_p;

	dest_p = (unsigned char *)dest;
	src_p = (const unsigned char *)src;
	if (dest < src)
	{
		while (n > 0)
		{
			*(dest_p) = *(src_p);
			dest_p++;
			src_p++;
			n--;
		}
		return (dest);
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			*(dest_p + n - 1) = *(src_p + n - 1);
			n--;
		}
	}
	return (dest);
}
