/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:26:06 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:56 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int main()
{
	

	char *a;
	
	a = malloc (10);
	ft_bzero(a,10);
	printf(" memset:\n");

	printf("\t0%s\n", (char *)memset(a, 'a', 1));
	printf("\t1%s\n", (char *)memset(a, 'b', 1));
	printf("\t5%s\n", (char *)memset(a, 'a', 5));
	// printf("\t%s\n", (char *)memset(a, 'a', 500));
	// printf("\t%s\n", (char *)memset(NULL, 'a', 1)); //segfault
	ft_bzero(a,10);
	printf(" ft_memset:\n");

	printf("\t0%s\n", (char *)ft_memset(a, 'a', 1));
	printf("\t1%s\n", (char *)ft_memset(a, 'b', 1));
	printf("\t5%s\n", (char *)ft_memset(a, 'a', 5));
	// printf("\t%s\n", (char *)ft_memset(a, 'a', 500));
	// printf("\t%s\n", (char *)ft_memset(NULL, 'a', 1));
	free (a);
	
	printf(" ft_strlen:\n");
	printf("\t%zu\n", ft_strlen("   \t\r\n\v\f-+123f"));
	printf("\t%zu\n", ft_strlen(""));
	printf("\t%zu\n", ft_strlen("\0"));
	// printf("\t%zu\n", ft_strlen(NULL));
	// printf("\t%zu\n", strlen(NULL)); //segfault
	printf(" strlen:\n");

	printf("\t%zu\n", strlen("   \t\r\n\v\f-+123f"));
	printf("\t%zu\n", strlen(""));
	printf("\t%zu\n", strlen("\0"));
	// printf("\t%zu\n", strlen(NULL));
	// printf("\t%d\n", strlen(NULL)); //segfault
	
	
	printf("putnbr\n:");
	
	printf("\t");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");	
	printf("\t");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");	
	printf("\t");
	ft_putnbr_fd(-10, 1);
	printf("\n");
	printf("putstr\n:");
	
	printf("\t");
	ft_putstr_fd("hello world", 1);
	printf("\n");	
	printf("\t");
	ft_putstr_fd(NULL, 1);
	printf("\n");	
	printf("\t");
	ft_putstr_fd("\0", 1);
	printf("\n");
	printf("putendl\n:");
	
	printf("\t");
	ft_putendl_fd("hello world", 1);
	printf("\n");	
	printf("\t");
	ft_putendl_fd(NULL, 1);
	printf("\n");	
	printf("\t");
	ft_putendl_fd("\0", 1);
	printf("\n");

	printf(" ft_atoi:\n");

	printf("\t%d\n", ft_atoi("   \t\r\n\v\f-+123f"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f--123f"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f-12 3f"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f+123f"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f -2147483648"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f 2147483647"));
	printf("\t%d\n", ft_atoi("   \t\r\n\v\f ++2147483647"));
	printf("\t%d\n", ft_atoi(""));
	// printf("\t%d\n", ft_atoi(NULL)); //segfault
	
	
	printf("\natoi:\n");

	printf("\t%d\n", atoi("   \t\r\n\v\f-+123f"));
	printf("\t%d\n", atoi("   \t\r\n\v\f--123f"));
	printf("\t%d\n", atoi("   \t\r\n\v\f-12 3f"));
	printf("\t%d\n", atoi("   \t\r\n\v\f+123f"));
	printf("\t%d\n", atoi("   \t\r\n\v\f -2147483648"));
	printf("\t%d\n", atoi("   \t\r\n\v\f 2147483647"));
	printf("\t%d\n", atoi("   \t\r\n\v\f ++2147483647"));
	printf("\t%d\n", atoi(""));
	// printf("\t%d\n", atoi(NULL)); //segfault

	printf("\n ft_strjoin:\n");

	a = ft_strjoin("ola bom dia", " a todos aqui");
	printf("\t%s\n", a);
	free (a);
	a = ft_strjoin("ola bom dia", "");
	printf("\t%s\n", a);
	free (a);
	a = ft_strjoin("", "a todos aqui");
	printf("\t%s\n", a);
	free (a);
	a = ft_strjoin("", "");
	printf("\t%s\n", a);
	free (a);
	a = ft_strjoin("ola bom dia", NULL);
	printf("\t%s\n", a);
	free (a);
	a = ft_strjoin(NULL, "a todos aqui");
	printf("\t%s\n", a);
	free (a);

	printf("\n ft_strnstr:\n");

	printf("\t%s\n", ft_strnstr("aaabcdefgh", "de", 10));
	printf("\t%s\n", ft_strnstr("ola bom dia", "la", 10));
	printf("\t%p\n", ft_strnstr("ola bom dia", "!", 10));
	// printf("\t%p\n", ft_strnstr("ola bom dia", NULL, 10)); //segfault
	// printf("\t%p\n", ft_strnstr(NULL, "olasdsd", 10));		//segfault


	printf("\n strnstr:\n");

	printf("\t%s\n", strnstr("aaabcdefgh", "de", 10));
	printf("\t%s\n", strnstr("ola bom dia", "la", 10));
	printf("\t%p\n", strnstr("ola bom dia", "!", 10));
	// printf("\t%p\n", strnstr("ola bom dia", NULL, 10)); //segfault
	// printf("\t%p\n", strnstr(NULL, "olasdsd", 10));

	printf("\n ft_strtrim:\n");

	a = ft_strtrim("ola bom dia", " a");
	printf("\t%s\n", a); 
	free (a);
	a = ft_strtrim("ola bom dia", "ola");
	printf("\t%s\n", a); 
	free (a);
	a = ft_strtrim(" ola bom dia                ", " ");
	printf("\t%s\n", a); 
	free (a);
	a = ft_strtrim("ola bom dia", "");
	printf("\t%s\n", a); 
	free (a);
	a = ft_strtrim("ola bo", NULL);
	printf("\t%s\n", a); 
	free (a);
	a = ft_strtrim(NULL, "a");
	printf("\t%s\n", a); 
	free (a);
	

	printf("\n ft_substr:\n");

	printf("\t%s\n", ft_substr("ola bom dia", 1, 50));
	printf("\t%s\n", ft_substr("ola bom dia", 2, 3));
	printf("\t%s\n", ft_substr("ola bom dia", 3, 7));
	printf("\t%s\n", ft_substr(NULL, ' ', 20));
	printf("\t%s\n", ft_substr("ola bom dia", 33, 20));
	printf("\t%s\n", ft_substr("ola bom dia",5 , 0));

	printf("\n isalnum:\n");

	printf("\t%d\n", isalnum('a'));
	printf("\t%d\n", isalnum('1'));
	printf("\t%d\n", isalnum('B'));
	printf("\t%d\n", isalnum('!'));
	printf("\t%d\n", isalnum('\n'));
	printf("\t%d\n", isalnum(140));

	printf("\n ft_isalnum:\n");

	printf("\t%d\n", ft_isalnum('a'));
	printf("\t%d\n", ft_isalnum('1'));
	printf("\t%d\n", ft_isalnum('B'));
	printf("\t%d\n", ft_isalnum('!'));
	printf("\t%d\n", ft_isalnum('\n'));
	printf("\t%d\n", ft_isalnum(140));
	
	printf("\n isalpha:\n");

	printf("\t%d\n", isalpha('a'));
	printf("\t%d\n", isalpha('1'));
	printf("\t%d\n", isalpha('B'));
	printf("\t%d\n", isalpha('!'));
	printf("\t%d\n", isalpha('\n'));
	printf("\t%d\n", isalpha(127));
	
	printf("\n ft_isalpha:\n");

	printf("\t%d\n", ft_isalpha('a'));
	printf("\t%d\n", ft_isalpha('1'));
	printf("\t%d\n", ft_isalpha('B'));
	printf("\t%d\n", ft_isalpha('!'));
	printf("\t%d\n", ft_isalpha('\n'));
	printf("\t%d\n", ft_isalpha(127));
	
	printf("\n toupper:\n");

	printf("\t%c\n", toupper('a'));
	printf("\t%c\n", toupper('1'));
	printf("\t%c\n", toupper('B'));
	printf("\t%c\n", toupper('!'));
	printf("\t%d\n", toupper('\n'));
	printf("\t%d\n", toupper(127));
	
	printf("\n ft_toupper:\n");

	printf("\t%c\n", ft_toupper('a'));
	printf("\t%c\n", ft_toupper('1'));
	printf("\t%c\n", ft_toupper('B'));
	printf("\t%c\n", ft_toupper('!'));
	printf("\t%d\n", ft_toupper('\n'));
	printf("\t%d\n", ft_toupper(127));
	
	printf("\n tolower:\n");

	printf("\t%c\n", tolower('a'));
	printf("\t%c\n", tolower('1'));
	printf("\t%c\n", tolower('B'));
	printf("\t%c\n", tolower('!'));
	printf("\t%d\n", tolower('\n'));
	printf("\t%d\n", tolower(127));
	
	printf("\n ft_tolower:\n");

	printf("\t%c\n", ft_tolower('a'));
	printf("\t%c\n", ft_tolower('1'));
	printf("\t%c\n", ft_tolower('B'));
	printf("\t%c\n", ft_tolower('!'));
	printf("\t%d\n", ft_tolower('\n'));
	printf("\t%d\n", ft_tolower(127));
	
	printf("\n isascii:\n");

	printf("\t%d\n", isascii('a'));
	printf("\t%d\n", isascii('1'));
	printf("\t%d\n", isascii('B'));
	printf("\t%d\n", isascii('!'));
	printf("\t%d\n", isascii('\n'));
	printf("\t%d\n", isascii(140));
	
	printf("\n ft_isascii:\n");

	printf("\t%d\n", ft_isascii('a'));
	printf("\t%d\n", ft_isascii('1'));
	printf("\t%d\n", ft_isascii('B'));
	printf("\t%d\n", ft_isascii('!'));
	printf("\t%d\n", ft_isascii('\n'));
	printf("\t%d\n", ft_isascii(140));
	
	printf("\n isdigit:\n");

	printf("\t%d\n", isdigit('a'));
	printf("\t%d\n", isdigit('1'));
	printf("\t%d\n", isdigit('B'));
	printf("\t%d\n", isdigit('!'));
	printf("\t%d\n", isdigit('\n'));
	printf("\t%d\n", isdigit(127));
	
	printf("\n ft_isdigit:\n");

	printf("\t%d\n", ft_isdigit('a'));
	printf("\t%d\n", ft_isdigit('1'));
	printf("\t%d\n", ft_isdigit('B'));
	printf("\t%d\n", ft_isdigit('!'));
	printf("\t%d\n", ft_isdigit('\n'));
	printf("\t%d\n", ft_isdigit(127));

	printf("\n isprint:\n");

	printf("\t%d\n", isprint('a'));
	printf("\t%d\n", isprint('1'));
	printf("\t%d\n", isprint('B'));
	printf("\t%d\n", isprint('!'));
	printf("\t%d\n", isprint('\n'));
	printf("\t%d\n", isprint(127));
	
	printf("\n ft_isprint:\n");

	printf("\t%d\n", ft_isprint('a'));
	printf("\t%d\n", ft_isprint('1'));
	printf("\t%d\n", ft_isprint('B'));
	printf("\t%d\n", ft_isprint('!'));
	printf("\t%d\n", ft_isprint('\n'));
	printf("\t%d\n", ft_isprint(127));
	
	printf("\n memchr:\n");

	a = "12345\0";

	printf("\t%s\n", (char *)memchr(a, '1', 5));
	printf("\t%s\n", (char *)memchr(a, '2', 4));
	printf("\t%s\n", (char *)memchr(a, '3', 3));
	printf("\t%s\n", (char *)memchr(a, '1', 1));
	printf("\t%s\n", (char *)memchr(a, 2, 0));
	printf("\t%p\n", memchr(a, '1', 0));
	printf("\t%p\n", memchr(a, 'a', 5));
	printf("\t%p\n", memchr(a, 2 + 256, 3));
	// printf("\t%p\n", memchr(NULL, 'a', 1)); //segfault
	
		char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("\t%s\n", (char *)memchr(s, 2, 3));
	printf("\t%s\n", (char *)memchr(s, 6, 6));
	printf("\t%s\n", (char *)memchr(s, 0, 1));
	printf("\t%s\n", (char *)memchr(s, 0, 0));
	printf("\t%s\n", (char *)memchr(s, 2, 0));
	printf("\t%p\n", memchr(s, '1', 0));
	printf("\t%p\n", memchr(s, 'a', 5));
	printf("\t%p\n", memchr(s, 2 + 256, 3));
	// printf("\t%p\n", memchr(NULL, 'a', 1)); //segfault
	
	printf("\n ft_memchr:\n");


	printf("\t%s\n", (char *)ft_memchr(a, '1', 5));
	printf("\t%s\n", (char *)ft_memchr(a, '2', 4));
	printf("\t%s\n", (char *)ft_memchr(a, '3', 3));
	printf("\t%s\n", (char *)ft_memchr(a, '1', 1));
	printf("\t%s\n", (char *)ft_memchr(a, 2, 0));
	printf("\t%p\n", ft_memchr(a, 'a', 0));
	printf("\t%p\n", ft_memchr(a, 'a', 5));
	printf("\t%p\n", ft_memchr(a, 2 + 256, 3));
	// printf("\t%p\n", ft_memchr(NULL, 'a', 1)); //segfault
	printf("\t%s\n", (char *)ft_memchr(s, 2, 3));
	printf("\t%s\n", (char *)ft_memchr(s, 6, 6));
	printf("\t%s\n", (char *)ft_memchr(s, 0, 1));
	printf("\t%s\n", (char *)ft_memchr(s, 0, 0));
	printf("\t%s\n", (char *)ft_memchr(s, 2, 0));
	printf("\t%p\n", ft_memchr(s, 'a', 0));
	printf("\t%p\n", ft_memchr(s, 'a', 5));
	printf("\t%p\n", ft_memchr(s, 2 + 256, 3));
	// printf("\t%p\n", ft_memchr(NULL, 'a', 1)); //segfault
	printf("\n memcmp:\n");

	printf("\t%d\n", memcmp("ABC", "ABC", 3));
	printf("\t%d\n", memcmp("ABC", "ABC", 2));
	printf("\t%d\n", memcmp("ABC", "ABC", 0));
	printf("\t%d\n", memcmp("ABC", "AB", 3));
	printf("\t%d\n", memcmp("AB", "ABC", 3));
	printf("\t%d\n", memcmp("ABC", "ABp", 3));
	// printf("\t%d\n", memcmp("ABC", NULL, 3)); //segfault
	// printf("\t%d\n", memcmp(NULL, "ABC", 3)); //segfault
	// printf("\t%d\n", memcmp(NULL, NULL, 3)); //segfault
	
	printf("\n ft_memcmp:\n");
	// 
	printf("\t%d\n", ft_memcmp("ABC", "ABC", 3));
	printf("\t%d\n", ft_memcmp("ABC", "ABC", 2));
	printf("\t%d\n", ft_memcmp("BC", "ABC", 0));
	printf("\t%d\n", ft_memcmp("ABC", "AB", 3));
	printf("\t%d\n", ft_memcmp("AB", "ABC", 3));
	printf("\t%d\n", ft_memcmp("ABC", "ABp", 3));
	// printf("\t%d\n", ft_memcmp("ABC", NULL, 3)); //segfault
	// printf("\t%d\n", ft_memcmp(NULL, "ABC", 3)); //segfault
	// printf("\t%d\n", ft_memcmp(NULL, NULL, 3)); //segfault
	// 
		printf("\n ft_strncmp:\n");
	// 
	printf("\t%d\n", ft_strncmp("ABC", "ABC", 3));
	printf("\t%d\n", ft_strncmp("ABC", "ABC", 2));
	printf("\t%d\n", ft_strncmp("ABC", "ABC", 0));
	printf("\t%d\n", ft_strncmp("ABC", "ABC", -1));
	printf("\t%d\n", ft_strncmp("ABC", "AB", 3));
	printf("\t%d\n", ft_strncmp("AB", "ABC", 3));
	printf("\t%d\n", ft_strncmp("ABC", "ABp", 3));
	// printf("\t%d\n", ft_strncmp("ABC", NULL, 3)); //segfault
	// printf("\t%d\n", ft_strncmp(NULL, "ABC", 3)); //segfault
	// printf("\t%d\n", ft_strncmp(NULL, NULL, 3)); //segfault
	// 
	
	printf("\n strncmp:\n");
	// 
	printf("\t%d\n", strncmp("ABC", "ABC", 3));
	printf("\t%d\n", strncmp("ABC", "ABC", 2));
	printf("\t%d\n", strncmp("ABC", "ABC", 0));
	printf("\t%d\n", strncmp("ABC", "ABC",-1));
	printf("\t%d\n", strncmp("ABC", "AB" , 3));
	printf("\t%d\n", strncmp("AB", "ABC", 3));
	printf("\t%d\n", strncmp("ABC", "ABp", 3));
	// printf("\t%d\n", strcmp("ABC", NULL, 3)); //segfault
	// printf("\t%d\n", strcmp(NULL, "ABC", 3)); //segfault
	// printf("\t%d\n", strcmp(NULL, NULL, 3)); //segfault
	// 
	printf("\n memcpy:\n");
	char *b;
	b = malloc(50);
	ft_bzero (b, 50);
// 
	printf("\t%s\n", b = (char *)memcpy(b, "ABC\0", 3));
	printf("\t%s\n", b = (char *)memcpy(b, "hello", 5));
	printf("\t%s\n", b = (char *)memcpy(b, "ret\0", 0));
	printf("\t%s\n", b = (char *)memcpy(b, "ABC\0", 1));
	printf("\t%s\n", b = (char *)memcpy(b, "AB\0", 3));
	printf("\t%s\n", b = (char *)memcpy(b, "ABK\0", 4));
	printf("\t%s\n", b = (char *)memcpy(b, "ABp\0", 3));
	printf("\t%s\n", b = (char *)memcpy(b, "ABp55", 5));
	// printf("\t%s\n", b = (char *)memcpy(b, NULL, 3)); //segfault
	// printf("\t%s\n", b = (char *)memcpy(NULL, "ABC", 3)); //segfault
	// printf("\t%s\n", b = (char *)memcpy(NULL, NULL, 3)); //segfault
	// 
	printf("\n ft_memcpy:\n");
	ft_bzero (b, 50);
	printf("\t%s\n", (char *)ft_memcpy(b, "ABC\0", 3));
	printf("\t%s\n", (char *)ft_memcpy(b, "hello", 5));
	printf("\t%s\n", (char *)ft_memcpy(b, "ret\0", 0));
	printf("\t%s\n", (char *)ft_memcpy(b, "ABC\0", 1));
	printf("\t%s\n", (char *)ft_memcpy(b, "AB\0", 3));
	printf("\t%s\n", (char *)ft_memcpy(b, "ABK\0", 4));
	printf("\t%s\n", (char *)ft_memcpy(b, "ABp\0", 3));
	printf("\t%s\n", (char *)ft_memcpy(b, "ABp55", 5));
	// printf("\t%p\n", (char *)ft_memcpy(b, NULL, 3)); //segfault
	// printf("\t%p\n", (char *)ft_memcpy(NULL, "ABC", 3)); //segfault
	// printf("\t%p\n", (char *)ft_memcpy(NULL, NULL, 3)); //segfault
	printf("\n memmove:\n");
// 
	char c[50] = "memmove pode dar muito geito";
	memmove(c + 23, c + 17, 12);
	printf("\t%s\n", c);
	memmove(c + 17, c + 23, 12);
	printf("\t%s\n", c);
	memmove(c + 17, "pouco", 5);
	printf("\t%s\n", c);
	memmove(c + 23, c + 17, 12);
	printf("\t%s\n", c);
	printf("\t%s\n", c);
	memmove(c + 22, c + 17, 11);
	printf("\t%s\n", c);
	// memmove(NULL, c + 17, 11); // Ssegfault
	// printf("\t%s\n", c);
	// memmove(c + 22, NULL, 11); // Ssegfault
	// printf("\t%s\n", c);
	// 
	printf("\n ft_memmove:\n");
// 
	char k[50] = "memmove pode dar muito geito";
// 
	ft_memmove(k + 23, k + 17, 12);
	printf("\t%s\n", k);
	ft_memmove(k + 17, k + 23, 12);
	printf("\t%s\n", k);
	ft_memmove(k + 17, "pouco", 5);
	printf("\t%s\n", k);
	ft_memmove(k + 23, k + 17, 12);
	printf("\t%s\n", k);
	printf("\t%s\n", k);
	ft_memmove(k + 22, k + 17, 11);
	printf("\t%s\n", k);
	// ft_memmove(NULL, k + 17, 11); // Ssegfault
	// printf("\t%s\n", k);
	// ft_memmove(k + 22, NULL, 11); // Ssegfault
	// printf("\t%s\n", k);

	size_t numb;
	
	printf("\n strlcpy:\n");
	numb = strlcpy(b, "ABC\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "hello\0", 5);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "hello\0", 50);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "ret\0", 0);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "ABC\0", 1);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "AB\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "ABK\0", 500);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = strlcpy(b, "ABp\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	
	printf("\n ft_strlcpy:\n");
	numb = ft_strlcpy(b, "ABC\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "hello\0", 5);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "hello\0", 50);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "ret\0", 0);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "ABC\0", 1);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "AB\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "ABK\0", 500);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	numb = ft_strlcpy(b, "ABp\0", 3);
	printf("\t%zu\n", numb);
	printf("\t%s\n", b);
	
	printf("\n strlcat:\n");
	ft_bzero (b, 50);
	printf("\t%zu\n", strlcat(b, "ABC\0", 10));
	printf("\t%s\n", b);
	printf("\t%zu\n", strlcat(b, " hello\0", 8));
	printf("\t%s\n", b);
	printf("\t%zu\n", strlcat(b, " there\0", 50));
	printf("\t%s\n", b);
	printf("\t%zu\n", strlcat(b, "ret\0", 0));
	printf("\t%s\n", b);
	printf("\t%zu\n", strlcat(b, "ABC\0", 1));
	printf("\t%s\n", b);
// // 
	printf("\n ft_strlcat:\n");
	ft_bzero (b, 50);
	printf("\t%zu\n", ft_strlcat(b, "ABC\0", 10));
	printf("\t%s\n", b);
	printf("\t%zu\n", ft_strlcat(b, " hello\0", 8));
	printf("\t%s\n", b);
	printf("\t%zu\n", ft_strlcat(b, " there\0", 50));
	printf("\t%s\n", b);
	printf("\t%zu\n", ft_strlcat(b, "ret\0", 0));
	printf("\t%s\n", b);
	printf("\t%zu\n", ft_strlcat(b, "ABC\0", 1));
	printf("\t%s\n", b);
		// 
// 

	printf("\n ft_strchr:\n");
// 
// return
	printf("\t%s\n", ft_strchr("ola bom dia", 'o'));
	printf("\t%s\n", ft_strchr("ola bom dia", ' '));
	printf("\t%s\n", ft_strchr("ola bom dia", 'i'));
	printf("\t%s\n", ft_strchr("ola bom dia", '\0'));
	printf("\t%s\n", ft_strchr("ola bom dia", '!'));
	// printf("\t%s\n", ft_strchr(NULL, '!'));
	// 
	printf("\n strchr:\n");
// 
// 
	printf("\t%s\n", strchr("ola bom dia", 'o'));
	printf("\t%s\n", strchr("ola bom dia", ' '));
	printf("\t%s\n", strchr("ola bom dia", 'i'));
	printf("\t%s\n", strchr("ola bom dia", '\0'));
	printf("\t%p\n", strchr("ola bom dia", '!'));
	// printf("\t%s\n", strchr(NULL, '!'));
		// 
	printf("\n ft_strrchr:\n");
// 
// 
	printf("\t%s\n", ft_strrchr("ola bom dia", 'o'));
	printf("\t%s\n", ft_strrchr("ola bom dia", ' '));
	printf("\t%s\n", ft_strrchr("ola bom dia", 'i'));
	printf("\t%s\n", ft_strrchr("ola bom dia", '\0'));
	printf("\t%s\n", ft_strrchr("ola bom dia", '!'));
	// 
	printf("\n strrchr:\n");
// 
// 
	printf("\t%s\n", strrchr("ola bom dia", 'o'));
	printf("\t%s\n", strrchr("ola bom dia", ' '));
	printf("\t%s\n", strrchr("ola bom dia", 'i'));
	printf("\t%s\n", strrchr("ola bom dia", '\0'));
	printf("\t%s\n", strrchr("ola bom dia", '!'));
// 
printf("\n ft_split:\n");

	char **spli;
	//
	spli = ft_split("olabomdiaatodos", 'a');
	int i = -1;
	while (spli && spli[++i])
		printf("\t%s\n", spli[i]);
	free (spli);
	// 
	printf("\n ft_itoa:\n");
// 
	printf("\t%s\n", ft_itoa(-123456));
	printf("\t%s\n", ft_itoa(-2147483648));
	printf("\t%s\n", ft_itoa(2147483647));
	printf("\t%s\n", ft_itoa(10));
	printf("\t%s\n", ft_itoa(0));
	// ft_bzero(b, 50);
// 
// size_t aaaa = 18446744073709551615;
size_t aaaa = -1;

// 
printf("%zu", aaaa);

char haystack[] = "ola muito bom dia";
char needle[] = "ola";

if (strnstr(haystack, needle, -1) == haystack + 1)
	printf ("aaaaaaaaaaaaaaaaaaaaaaaaa");

}
// 
	// char **mat{"ola", "ola", "ola", "ola", "ola", "ola", "ola", "ola"};
	// printf("\t%s\n", ft_itoa(  42));
	// printf("\t%s\n", ft_itoa( -42));
	// printf("\t%s\n", ft_itoa( +42));
	// printf("\t%s\n", ft_itoa(+-42));
	// printf("\t%s\n", ft_itoa(0));
	// printf("\t%s\n", ft_itoa());
// l