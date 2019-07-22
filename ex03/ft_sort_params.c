/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljongman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:18:16 by ljongman          #+#    #+#             */
/*   Updated: 2019/07/22 17:40:21 by ljongman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] - s2[i] > 0)
			return (1);
		else if (s1[i] - s2[i] < 0)
			return (0);
		else
			i++;
	}
	if ((s1[i] == '\0') && s2[i] != '\0')
		return (0);
	else if ((s1[i] != '\0') && (s2 == '\0'))
		return (1);
	else
		return (0);
}

void	ft_sort(char **argv, int argc, int i)
{
	char	*s;
	int		n;

	s = "0";
	while (i < argc)
	{
		n = i + 1;
		while (n < argc)
		{
			if (ft_strcmp(argv[i], argv[n]) == 1)
			{
				s = argv[i];
				argv[i] = argv[n];
				argv[n] = s;
			}
			n++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort(argv, argc, i);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
