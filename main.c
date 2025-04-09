/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:26:06 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 00:35:02 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h> 

int main()
{
	char *a;
	
	printf("ft_atoi:\n");

	printf("%d\n", ft_atoi("   \t\r\n\v\f-+123f"));
	printf("%d\n", ft_atoi("   \t\r\n\v\f--123f"));
	printf("%d\n", ft_atoi("   \t\r\n\v\f-123f"));
	printf("%d\n", ft_atoi("   \t\r\n\v\f+123f"));
	printf("%d\n", ft_atoi("   \t\r\n\v\f123f"));
	
	printf("\natoi:\n");

	printf("%d\n", atoi("   \t\r\n\v\f-+123f"));
	printf("%d\n", atoi("   \t\r\n\v\f--123f"));
	printf("%d\n", atoi("   \t\r\n\v\f-123f"));
	printf("%d\n", atoi("   \t\r\n\v\f+123f"));
	printf("%d\n", atoi("   \t\r\n\v\f123f"));

	printf("\n ft_strjoin:\n");

	printf("%s\n", ft_strjoin("ola bom dia", "a todos aqui"));
	printf("%s\n", ft_strjoin("", "a todos aqui"));
	printf("%s\n", ft_strjoin("ola bom dia", ""));
	printf("%s\n", ft_strjoin("", ""));
	printf("%p\n", ft_strjoin("ola bom dia", NULL));
	printf("%p\n", ft_strjoin(NULL, "a todos aqui"));
	printf("%p\n", ft_strjoin("ola bom dia", "a todos aqui")); //segfault

	printf("\n ft_strnstr:\n");

	printf("%s\n", ft_strnstr("ola bom dia", "ola", 10));
	printf("%p\n", ft_strnstr("ola bom dia", "  ", 10));
	printf("%p\n", ft_strnstr("ola bom dia", "olasdsd", 10));
	printf("%p\n", ft_strnstr("ola bom dia", NULL, 10)); //segfault
	printf("%p\n", ft_strnstr(NULL, "olasdsd", 10));		//segfault
	printf("%s\n", ft_strnstr("ola bom dia", "!", 10)); //segfault

	printf("\n strnstr:\n");

	printf("%s\n", strnstr("ola bom dia", "ola", 10));
	printf("%p\n", strnstr("ola bom dia", "  ", 10));
	printf("%p\n", strnstr("ola bom dia", "olasdsd", 10));
	printf("%p\n", strnstr("ola bom dia", NULL, 10)); //segfault
	printf("%p\n", strnstr(NULL, "olasdsd", 10));		//segfault
	printf("%p\n", strnstr("ola bom dia", "!", 10)); //segfault

		// printf("\n ft_strtrim:\n");
// 
	// printf("%s\n", ft_strtrim("ola bom dia", " a"));
	// printf("%s\n", ft_strtrim("ola bom dia", " a"));
	// printf("%s\n", ft_strtrim("ola bom dia", " a"));
	// printf("%p\n", ft_strtrim("ola bo)); //segfault
	// printf("%p\n", ft_strtrim(NULL));		//segfault
	// printf("%s\n", ft_strtrim("ola bo)); //segfault
// 
	// printf("\n substr:\n");
// 
	// printf("%s\n", substr("ola bom dia", "ola"));
	// printf("%p\n", substr("ola bom dia", "  "));
	// printf("%p\n", substr("ola bom dia", "olasdsd"));
	// printf("%p\n", substr("ola bom dia", NULL)); //segfault
	// printf("%p\n", substr(NULL, "olasdsd"));		//segfault
	// printf("%s\n", substr("ola bom dia", '!')); //segfault


// 	printf("\n isalnum:\n");

// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", isalnum('1'));
// 	printf("%d\n", isalnum('B'));
// 	printf("%d\n", isalnum('!'));
// 	printf("%d\n", isalnum('\n'));
// 	printf("%d\n", isalnum(127));
	
// 	printf("\n isalpha:\n");

// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('1'));
// 	printf("%d\n", isalpha('B'));
// 	printf("%d\n", isalpha('!'));
// 	printf("%d\n", isalpha('\n'));
// 	printf("%d\n", isalpha(127));
	
// 	printf("\n toupper:\n");

// 	printf("%c\n", toupper('a'));
// 	printf("%c\n", toupper('1'));
// 	printf("%c\n", toupper('B'));
// 	printf("%c\n", toupper('!'));
// 	printf("%d\n", toupper('\n'));
// 	printf("%d\n", toupper(127));
	
// 	printf("\n tolower:\n");

// 	printf("%c\n", tolower('a'));
// 	printf("%c\n", tolower('1'));
// 	printf("%c\n", tolower('B'));
// 	printf("%c\n", tolower('!'));
// 	printf("%d\n", tolower('\n'));
// 	printf("%d\n", tolower(127));
	
// 	printf("\n isascii:\n");

// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", isascii('1'));
// 	printf("%d\n", isascii('B'));
// 	printf("%d\n", isascii('!'));
// 	printf("%d\n", isascii('\n'));
// 	printf("%d\n", isascii(127));
	
// 	printf("\n isdigit:\n");

// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", isdigit('1'));
// 	printf("%d\n", isdigit('B'));
// 	printf("%d\n", isdigit('!'));
// 	printf("%d\n", isdigit('\n'));
// 	printf("%d\n", isdigit(127));
	
// 	printf("\n isprint:\n");

// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", isprint('1'));
// 	printf("%d\n", isprint('B'));
// 	printf("%d\n", isprint('!'));
// 	printf("%d\n", isprint('\n'));
// 	printf("%d\n", isprint(127));
	
	
// 	printf("\n memchr:\n");

// 	a = "12345\0";

// 	printf("%s\n", (char *)memchr(a, '1', 5));
// 	printf("%s\n", (char *)memchr(a, '2', 4));
// 	printf("%s\n", (char *)memchr(a, '3', 3));
// 	printf("%s\n", (char *)memchr(a, '1', 1));
// 	printf("%p\n", memchr(a, '1', 0));
// 	printf("%p\n", memchr(a, 'a', 5));
// 	// printf("%p\n", memchr(NULL, 'a', 1)); //segfault
	
	
// 	printf("\n memcmp:\n");

// 	printf("%d\n", memcmp("ABC", "ABC", 3));
// 	printf("%d\n", memcmp("ABC", "ABC", 2));
// 	printf("%d\n", memcmp("ABC", "ABC", 0));
// 	printf("%d\n", memcmp("ABC", "ABC", -1));
// 	printf("%d\n", memcmp("ABC", "AB", 3));
// 	printf("%d\n", memcmp("AB", "ABC", 3));
// 	printf("%d\n", memcmp("ABC", "ABp", 3));
// 	// printf("%d\n", memcmp("ABC", NULL, 3)); //segfault
// 	// printf("%d\n", memcmp(NULL, "ABC", 3)); //segfault
// 	// printf("%d\n", memcmp(NULL, NULL, 3)); //segfault
	
	
// 	printf("\n memcpy:\n");
// 	char *b;
// 	b = malloc(50);

// 	printf("%s\n", b = (char *)memcpy(b, "ABC\0", 3));
// 	printf("%s\n", b = (char *)memcpy(b, "ABC34534534534\0", -1));
// 	printf("%s\n", b = (char *)memcpy(b, "hello", 5));
// 	printf("%s\n", b = (char *)memcpy(b, "ret\0", 0));
// 	printf("%s\n", b = (char *)memcpy(b, "ABC\0", 1));
// 	printf("%s\n", b = (char *)memcpy(b, "AB\0", 3));
// 	printf("%s\n", b = (char *)memcpy(b, "ABK\0", 4));
// 	printf("%s\n", b = (char *)memcpy(b, "ABp\0", 3));
// 	printf("%s\n", b = (char *)memcpy(b, "ABp55", 5));
// 	// printf("%s\n", b = (char *)memcpy(b, NULL, 3)); //segfault
// 	// printf("%s\n", b = (char *)memcpy(NULL, "ABC", 3)); //segfault
// 	// printf("%s\n", b = (char *)memcpy(NULL, NULL, 3)); //segfault
	
	
// 	printf("\n memmove:\n");


// 	char c[50] = "memmove pode dar muito geito";
// 	memmove(c + 23, c + 17, 12);
// 	printf("%s\n", c);
// 	memmove(c + 17, c + 23, 12);
// 	printf("%s\n", c);
// 	memmove(c + 17, "pouco", 5);
// 	printf("%s\n", c);
// 	memmove(c + 23, c + 17, 12);
// 	printf("%s\n", c);
// 	printf("%s\n", c);
// 	memmove(c + 22, c + 17, 11);
// 	printf("%s\n", c);
// 	// memmove(NULL, c + 17, 11); // Ssegfault
// 	// printf("%s\n", c);
// 	// memmove(c + 22, NULL, 11); // Ssegfault
// 	// printf("%s\n", c);
// 	// memmove(c + 22, c + 17, -1); // Ssegfault
// 	// printf("%s\n", c);
// 	// memmove(c + 22, c + 17, 0);
	
	
// 	printf("\n strchr:\n");


// 	printf("%s\n", strchr("ola bom dia", 'o'));
// 	printf("%s\n", strchr("ola bom dia", ' '));
// 	printf("%s\n", strchr("ola bom dia", 'i'));
// 	printf("%s\n", strchr("ola bom dia", 'a'));
// 	// printf("%s\n", strchr("ola bom dia", '!')); //segfault
	
	
// 	printf("\n strrchr:\n");


// 	printf("%s\n", strrchr("ola bom dia", 'o'));
// 	printf("%s\n", strrchr("ola bom dia", ' '));
// 	printf("%s\n", strrchr("ola bom dia", 'i'));
// 	printf("%s\n", strrchr("ola bom dia", 'a'));
// 	// printf("%s\n", strchr("ola bom dia", '!')); //segfault

// 	// char **spli = split("             ola       o       meu       nome       e       joao       guilher       lima       de       souza       e       sou       fixe        "
// 	// , ' ');
// 	// int i = -1;
	
// 	// bzero(b, 50);
// // 
// 	// 
// 	// printf("\n strlcat:\n");
// // 												asdddddddddddddd
// 	// strlcpy(b, "aola bom diaa", 40);
// 	// printf("%s\n",b);
// 	// 
// 	// printf("cat is:%ld\n", strlcat(b, " a todo", 19));
	
// 	printf("\n strstr:\n");

// 	printf("%s\n", strstr("ola bom dia", "ola"));
// 	printf("%p\n", strstr("ola bom dia", "  "));
// 	printf("%p\n", strstr("ola bom dia", "olasdsd"));
// 	// printf("%p\n", strstr("ola bom dia", NULL)); //segfault
// 	// printf("%p\n", strstr(NULL, "olasdsd"));		//segfault
// 	// printf("%s\n", strnstr("ola bom dia", '!')); //segfault
	

	
	
}

	// char **mat{"ola", "ola", "ola", "ola", "ola", "ola", "ola", "ola"};
	// printf("%s\n", ft_itoa(  42));
	// printf("%s\n", ft_itoa( -42));
	// printf("%s\n", ft_itoa( +42));
	// printf("%s\n", ft_itoa(+-42));
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa());
