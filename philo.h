/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:34:33 by intonoya          #+#    #+#             */
/*   Updated: 2022/12/30 20:47:05 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <sys/time.h>
# include <limits.h>

typedef struct	s_philo
{
	struct s_philo *philo;

}				t_philo;

int	ft_atoi(const char *str);
int	ft_isdigit(int c);

void	*check_if_death(void *p);
void	philo_taking_fork(t_philo *philo);
void	philo_eating(t_philo *philo);
void	*philo_life(void *p);

#endif
