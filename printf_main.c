/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvallin <nvallin@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:03:36 by nvallin           #+#    #+#             */
/*   Updated: 2023/11/22 12:45:06 by nvallin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				words;
	char			c;
	char			*s;
	unsigned int	u;
	void			*p;	

	c = 'C';
	s = "hello world!";
	u = -2147364748;
	p = "pointer";
	words = ft_printf("\001\002\007\v\010\f\r\n");
	ft_printf("%d\n", words);
	words = printf("\001\002\007\v\010\f\r\n");
	printf("%d\n", words);
	words = ft_printf("");
	ft_printf("%d\n", words);
	words = printf("");
	printf("%d\n", words);
	words = ft_printf(" %%");
	ft_printf("%d\n", words);
	words = printf(" %%");
	printf("%d\n", words);
	words = ft_printf("%%c");
	ft_printf("%d\n", words);
	words = printf("%%c");
	printf("%d\n", words);
	words = ft_printf("%%%c", 'x');
	ft_printf("%d\n", words);
	words = printf("%%%c", 'x');
	printf("%d\n", words);
	words = ft_printf("%s\n", (char *)NULL);
	ft_printf("%d\n", words);
	words = printf("%s\n", (char *)NULL);
	printf("%d\n", words);


	words = ft_printf("hello!\n");
	printf("%d\n", words);
	words = ft_printf("Print char 'C': %c\n", c);
	printf("%d\n", words);
	words = ft_printf("Char 'C': %c, String%% 'hello world!' :%s\n", c, s);
	ft_printf("%d\n", words);
	words = printf("Char 'C': %c, String%% 'hello world!' :%s\n", c, s);
	printf("%d\n", words);
	words = ft_printf("unsigned %u string %s char %c\n", u, s, c);
	ft_printf("%d\n", words);
	words = printf("unsigned %u string %s char %c\n", u, s, c);
	printf("%d\n", words);
	u = 2147483647;
	words = ft_printf("%x\n", u);
	ft_printf("%d\n", words);
	u = 0;
	words = ft_printf("%x\n", u);
	ft_printf("%d\n", words);
	words = printf("%x\n", u);
	printf("%d\n", words);
	u = -2147483648;
	words = ft_printf("%X\n", u);
	ft_printf("%d\n", words);
	words = printf("%X\n", u);
	printf("%d\n", words);
	u = 5874356;
	words = ft_printf("%X\n", u);
	ft_printf("%d\n", words);
	words = ft_printf("%X\n", 0X43F);
	ft_printf("%d\n", words);
	words = printf("%X\n", 0X43F);
	printf("%d\n", words);
	words = ft_printf("%p\n", p);
	ft_printf("%d\n", words);
	words = printf("%p\n", p);
	printf("%d\n", words);
	words = ft_printf("%p\n", (void *)0);
	ft_printf("%d\n", words);
	words = printf("%p\n", (void *)0);
	printf("%d\n", words);
	words = ft_printf("%p\n", (void *)-1);
	ft_printf("%d\n", words);
	words = printf("%p\n", (void *)-1);
	printf("%d\n", words);
	words = ft_printf("%p\n", (void *)-14523);
	ft_printf("%d\n", words);
	words = printf("%p\n", (void *)-14523);
	printf("%d\n", words);
	words = ft_printf("%p\n", "");
	ft_printf("%d\n", words);
	words = printf("%p\n", "");
	printf("%d\n", words);

	ft_printf("%d\n", -1);
	printf("%d\n", -1);
	ft_printf("%    d\n", 0);
	printf("%   d\n", 0);


	ft_printf("%d\n", -2147483648);
	printf("%d\n", -2147483647 + 1);

	words = ft_printf("%d\n", 2147483647 * 1000000000);
	printf("%d\n", words);
	words = printf("%d\n", 2147483647 * 1000000000);
	printf("%d\n", words);	
	return (0);
}
