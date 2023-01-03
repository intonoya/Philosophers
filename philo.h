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
	int				n;
	int				m_count;
	bool			is_eating;
	pthread_t		thread;
	long int		last_eat;
	struct s_info	*info;
	pthread_mutex_t	*right_fork;
	pthread_mutex_t	left_fork;
}		t_philo;

typedef struct s_info
{
	int				philo_eat;
	int				n_philo;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				n_eat;
	int				stop;
	long int		t_start;
	t_philo			*philo;
	pthread_mutex_t	print;
	pthread_mutex_t	m_stop;
	pthread_mutex_t	m_eat;
	pthread_mutex_t	dead;
}		t_info;

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void ft_print(t_philo *philo, char *str);
long long	timestamp(void);
void	ft_usleep(int ms);
int	is_dead(t_philo *philo, int num);

int	philo_init(t_info *data);
int	check_num(char **str);
int	var_init(t_info *data, char **av);

void	*check_if_death(void *p);
void	philo_taking_fork(t_philo *philo);
void	philo_eating(t_philo *philo);
void	*philo_life(void *p);

#endif
