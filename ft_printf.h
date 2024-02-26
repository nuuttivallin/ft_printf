/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvallin <nvallin@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:33:03 by nvallin           #+#    #+#             */
/*   Updated: 2023/11/20 15:44:48 by nvallin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_iputchar(char c);
int	ft_iputstr(char *str);
int	ft_nbrlen(int n);
int	ft_unbrlen(unsigned int n);
int	ft_iputnbr(int nbr);
int	ft_iputunsigned(unsigned int nbr);
int	ft_iputhexlow(unsigned int n);
int	ft_iputhexup(unsigned int n);
int	ft_iputpointer(unsigned long n);

#endif
