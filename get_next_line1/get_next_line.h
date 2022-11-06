/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrakik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:23:01 by hrakik            #+#    #+#             */
/*   Updated: 2022/11/05 15:23:02 by hrakik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE 
#define BUFFER_SIZE	10
#endif

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

char *get_next_line(int fd);

#endif