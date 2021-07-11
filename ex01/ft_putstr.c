/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 09:55:50 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/08 17:05:10 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void fputchar(char c)
{
	write (1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		fputchar(str[i]);
		i++;
	}
}
int main ()
{
	char str[] = "Hello";
	ft_putstr(str);
}
