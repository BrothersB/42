/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburtnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:33:20 by aburtnik          #+#    #+#             */
/*   Updated: 2020/01/20 14:59:58 by aburtnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	printf("match(\"%s\", \"%s\") == %d\n", "hello", "hello", match("hello", "hello"));
	printf("match(\"%s\", \"%s\") == %d\n", "hello", "hell", match("hello", "hell"));
	printf("match(\"%s\", \"%s\") == %d\n", "hello", "h*o", match("hello", "h*o"));
	printf("match(\"%s\", \"%s\") == %d\n", "hello", "h**o", match("hello", "h**o"));
	printf("match(\"%s\", \"%s\") == %d\n", "hello world", "hello*world", match("hello world", "hello*world"));
	printf("match(\"%s\", \"%s\") == %d\n", "hellp", "h*o", match("hellp", "h*o"));
	printf("match(\"%s\", \"%s\") == %d\n", "whatisthis", "w***s", match("whatisthis", "w***s"));
	
	printf("match(\"%s\", \"%s\") == %d\n", "aaaaaaabc", "*abc", match("aaaaaaabc", "*abc"));
	printf("match(\"%s\", \"%s\") == %d\n", "abcabc", "*abc", match("abcabc", "*abc"));
	printf("match(\"%s\", \"%s\") == %d\n", "abcdabcdabc", "*abc", match("abcdabcdabc", "*abc"));
	printf("match(\"%s\", \"%s\") == %d\n", "main.c.c", "*.c", match("main.c.c", "*.c"));
	printf("match(\"%s\", \"%s\") == %d\n", "main.c.c", "*****.c", match("main.c.c", "*****.c"));
	printf("match(\"%s\", \"%s\") == %d\n", "a", "*", match("a", "*"));
	printf("match(\"%s\", \"%s\") == %d\n", "**", "*", match("**", "*"));
	printf("match(\"%s\", \"%s\") == %d\n", "*abc", "*b", match("*abc", "*b"));
	printf("match(\"%s\", \"%s\") == %d\n", "a*a", "a*", match("a*a", "a*"));
	printf("match(\"%s\", \"%s\") == %d\n", "**a", "*a", match("**a", "*a"));
	
	return (1);
}
