# C06
EX02 SO FAR, NOT DONE


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:42:33 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/21 19:45:02 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(&str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	while ((argc - 1) > 0)
	{
	ft_putstr(argv[argc -1]);
	ft_putchar('\n');
	argc--;
	}
	return (0);
}
