/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:12:07 by myerturk          #+#    #+#             */
/*   Updated: 2023/02/11 14:12:12 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while (src[e] != '\0' && e < n)
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}
