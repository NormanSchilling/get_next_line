/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 13:41:45 by nschilli          #+#    #+#             */
/*   Updated: 2015/02/24 14:22:06 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./Libft/libft.h"

# define BUFF_SIZE 9999

int		get_next_line(const int fd, char **line);

#endif
