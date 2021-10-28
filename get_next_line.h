/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:17:40 by abernita          #+#    #+#             */
/*   Updated: 2021/10/28 12:17:46 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define

#include <stdlib.h>

char *get_next_line(int fd);

int ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif