/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:20:55 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/13 13:42:50 by mderuell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char);
void	prt_ligne_une(int x);
void	prt_ligne_mid(int x);
void	prt_ligne_fin(int x);

void	rush(int x,int y)
{
	int i;
	i = 1;
	while(i <= y)
	{
		if(i == 1)
			prt_ligne_une(x);
		else if (i > 1 && i < y)
			prt_ligne_mid(x);
		else 
			prt_ligne_fin(x);
	i++;
	}
	if (x <= 0 || y <= 0)
		write(1,"not ok\n",7);
	else
		ft_putchar(0);
}

void	prt_ligne_une(int x)
{
	int j;
	j = 1;

	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(47);
		}
		else if (j > 1 && j < x)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(92);
		}
		j++;
	}
	ft_putchar(10);
}

void	prt_ligne_mid(int x)
{
	int j;
	j = 1;

	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(42);
		}
		else if (j > 1 && j < x)
		{

			ft_putchar(32);
		}
		else
		{
			ft_putchar(42);
		}
		j++;
	}
	ft_putchar(10);
}

void	prt_ligne_fin(int x)
{
	int j;
	j = 1;

	while (j <= x)
	{
		if (j == 1)
		{
			ft_putchar(92);
		}
		else if (j > 1 && j < x)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(47);
		}
		j++;
	}
	ft_putchar(10);
}
