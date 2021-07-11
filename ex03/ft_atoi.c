/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:23:59 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/11 11:07:51 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	fsign(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i])
	{
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	k;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			k = 0;
			while ((str[i] >= '0') && (str[i] <= '9'))
			{
				k = (str[i] - '0') + (k * 10);
				i++;
			}
			return (k * fsign(str));
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "---dgf-d4587fgdfg---gd";
	printf ("%d", ft_atoi(str));
}
