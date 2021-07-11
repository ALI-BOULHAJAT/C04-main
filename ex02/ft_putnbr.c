/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:13:55 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/09 08:39:17 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void fputchar (char c)
{
	write (1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		fputchar('-');
		fputchar('2');
		ft_putnbr( 147483648 );
	}
	else if (nb < 0)
	{
		fputchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
		fputchar(nb + '0');
	else 
	{
		ft_putnbr(nb / 10);
		fputchar(nb % 10 + '0');
	}
}
int main ()
{
	int nb = -2147483648;
	ft_putnbr(nb);
}

