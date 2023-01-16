/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:32:30 by intonoya          #+#    #+#             */
/*   Updated: 2023/01/03 15:29:28 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		min;

	i = 0;
	min = 0;
	nbr = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
			i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		min = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (min == 1)
		return (-nbr);
	return (nbr);
}

int	ft_isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	else
		return (0);
}
