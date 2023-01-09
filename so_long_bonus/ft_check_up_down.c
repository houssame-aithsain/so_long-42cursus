/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_up_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:41:09 by hait-hsa          #+#    #+#             */
/*   Updated: 2023/01/02 19:28:05 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_up_down(char *tmp, t_so_long1 *int_v)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (tmp[i] && tmp[i] != '\n')
	{
		if (tmp[i] != '1')
		{
			ft_printf("WALLS ERROR");
			ft_free_memory(int_v->map);
			exit(0);
		}
		i++;
	}
}
