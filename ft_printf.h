/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagomez <dagomez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:47:25 by dagomez           #+#    #+#             */
/*   Updated: 2022/06/21 15:33:43 by dagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *src, ...);
void	print(char c);
int		type_c(char c);
int		type_s(char *s);
int		type_p(unsigned long long num);
int		ft_putstr(char *s);
int		print_pointer(unsigned long long num);
int		type_d(int num);
int		type_d_r(int num, int i);
int		type_u(int num);
int		type_u_r(int num, int i);
int		type_x(int num, const char type);
int		type_x_r(int num, const char type, int i);

#endif
