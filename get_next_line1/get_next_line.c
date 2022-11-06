/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:22:53 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/05 15:22:55 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*line;
	int i;
	char *str;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = (char *) malloc(BUFFER_SIZE + 1 * sizeof(char));
	if(str == NULL)
		return (NULL);
	

}