/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:08:46 by hait-hsa          #+#    #+#             */
/*   Updated: 2023/01/03 19:52:09 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_memory(char **tmp)
{
	int	i;

	i = 0;
	if (!tmp)
		exit(0);
	while (tmp[i])
		free(tmp[i++]);
	free(tmp);
}
