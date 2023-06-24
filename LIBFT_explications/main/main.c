#include "libft.h"
#include <bsd/bsd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
//ft_putchar_fd : test ok
	printf("	FT_PUTCHAR_FD\n");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('1', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('*', 1);
	ft_putchar_fd('\n', 1);
	printf("\n***************************************\n");
//ft_putstr_fd : test ok
	printf("\n	FT_PUTSTR_FD\n");
	char	s1[] = "Salut toi";
	char	s2[] = "";
	char	*s3 = NULL;
	char	s4[] = "42!!!";
	ft_putstr_fd(s1, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(s2, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(s3, 1);
	ft_putstr_fd(s4, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(NULL, 1);
	printf("\n\n***************************************\n");
//test ft_putendl_fd : test ok
	printf("\n	FT_PUTENDL_FD\n");
	ft_putendl_fd(s1, 1);
	ft_putendl_fd(s2, 1);
	ft_putendl_fd(s3, 1);
	ft_putendl_fd(s4, 1);
	printf("\n***************************************\n");
//test ft_strlen : test ok
	printf("\n	FT_STRLEN\n");
	printf("'%s': strlen > %ld / ft_strlen > %ld\n", s1, strlen(s1), ft_strlen(s1));
	printf("'%s': strlen > %ld / ft_strlen > %ld\n", s2, strlen(s2), ft_strlen(s2));
	printf("'%s': strlen > %ld / ft_strlen > %ld\n", s4, strlen(s4), ft_strlen(s4));
	printf("\n***************************************\n");
//test ft_strdup : test ok	
	printf("\n	FT_STRDUP\n");
	char	*dup1;
	char	*dup2;
	dup1 = strdup(s1);
	dup2 = ft_strdup(s1);
	printf("'%s': strdup > %s / ft_strdup > %s\n", s1, dup1, dup2);
	free(dup1);
	free(dup2);
	dup1 = strdup(s2);
	dup2 = ft_strdup(s2);
	printf("'%s': strdup > %s / ft_strdup > %s\n", s2, dup1, dup2);
	free(dup1);
	free(dup2);
	dup1 = ft_strdup(s4);
	dup2 = ft_strdup(s4);
	printf("'%s': strdup > %s / ft_strdup > %s\n", s4, dup1, dup2);
	free(dup1);
	free(dup2);
/*	char	*s23 = NULL; //////////// Pour control segfault si parametre = NULL
	dup1 = strdup(s23);
	dup2 = ft_strdup(s23);
	printf("'(null)': strdup > %s\n", dup1);
	printf("'(null)': ft_strdup > %s\n", dup2);
	free(dup1);
	free(dup2);
*/	printf("\n***************************************\n");
//test ft_putnbr_fd : test ok
	printf("\n	FT_PUTNBR_FD\n");
	ft_putstr_fd("2147483647 = ", 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("-2147483648 = ", 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("0 = ", 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("10 = ", 1);
	ft_putnbr_fd(10, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("1000 = ", 1);
	ft_putnbr_fd(1000, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("1 = ", 1);
	ft_putnbr_fd(1, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("-1 = ", 1);
	ft_putnbr_fd(-1, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("-286 = ", 1);
	ft_putnbr_fd(-286, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("8995500 = ", 1);
	ft_putnbr_fd(8995500, 1);
	printf("\n\n***************************************\n");
//ft_atoi : test ok
	printf("\n	FT_ATOI\n");
	char nb1[] = "2147483647";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb1, atoi(nb1), ft_atoi(nb1));
	char nb2[] = "         -2147483648";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb2, atoi(nb2), ft_atoi(nb2));
	char nb3[] = "--2147483648";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb3, atoi(nb3), ft_atoi(nb3));
	char nb4[] = "-0h12";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb4, atoi(nb4), ft_atoi(nb4));
	char nb5[] = "\n\n\n-1pour56";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb5, atoi(nb5), ft_atoi(nb5));
	char nb6[] = "-a2147483648";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb6, atoi(nb6), ft_atoi(nb6));
	char nb7[] = "\n+1000";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb7, atoi(nb7), ft_atoi(nb7));
	char nb8[] = "+2147483648";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb8, atoi(nb8), ft_atoi(nb8));
	char nb9[] = "+2147483649";
	printf("nb = %s > atoi = %d / ft_atoi = %d\n", nb9, atoi(nb9), ft_atoi(nb9));
	printf("\n***************************************\n");
//test ft_itoa : test ok
	printf("\n	FT_ITOA\n");
	char	*s;
	int	nb;
	nb = 2147483647;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = -2147483648;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = 0;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = 100;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = 55000;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = -1;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = -9899;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	nb = -10000;
	s = ft_itoa(nb);
	printf("nb = %d / ft_itoa : %s\n", nb, s);
	free(s);
	printf("\n***************************************\n");
//test ft_isalpha : test ok
	printf("\n	FT_ISALPHA\n");
	int	c;
	c = 97;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 31;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 65;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 90;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 91;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 122;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 64;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	c = 73;
	printf("c = %c > isalpha = %d / ft_isalpha = %d\n", c, isalpha(c), ft_isalpha(c));
	printf("\n***************************************\n");
//test ft_isdigit : test ok
	printf("\n	FT_ISDIGIT\n");
	c = 64;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 47;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 48;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 52;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 57;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 58;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	c = 254;
	printf("c = %c > isdigit = %d / ft_isdigit = %d\n", c, isdigit(c), ft_isdigit(c));
	printf("\n***************************************\n");
//test ft_strncmp : test ok
	printf("\n	FT_STRNCMP\n");
	printf("%s\n", (strncmp("salut", "salut", 5) == 0 && ft_strncmp("salut", "salut", 5) == 0) || (strncmp("salut", "salut", 5) > 0 && ft_strncmp("salut", "salut", 5) > 0) || (strncmp("salut", "salut", 5) < 0 && ft_strncmp("salut", "salut", 5) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("test", "testss", 5) == 0 && ft_strncmp("test", "testss", 5) == 0) || (strncmp("test", "testss", 5) > 0 && ft_strncmp("test", "testss", 5) > 0) || (strncmp("test", "testss", 5) < 0 && ft_strncmp("test", "testss", 5) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("testss", "test", 7) == 0 && ft_strncmp("testss", "test", 7) == 0) || (strncmp("testss", "test", 7) > 0 && ft_strncmp("testss", "test", 7) > 0) || (strncmp("testss", "test", 7) < 0 && ft_strncmp("testss", "test", 7) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("tEst", "test", 4) == 0 && ft_strncmp("tEst", "test", 4) == 0) || (strncmp("tEst", "test", 4) > 0 && ft_strncmp("tEst", "test", 4) > 0) || (strncmp("tEst", "test", 4) < 0 && ft_strncmp("tEst", "test", 4) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("", "test", 4) == 0 && ft_strncmp("", "test", 4) == 0) || (strncmp("", "test", 4) > 0 && ft_strncmp("", "test", 4) > 0) || (strncmp("", "test", 4) < 0 && ft_strncmp("", "test", 4) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("", "", 4) == 0 && ft_strncmp("", "", 4) == 0) || (strncmp("", "", 4) > 0 && ft_strncmp("", "", 4) > 0) || (strncmp("", "", 4) < 0 && ft_strncmp("", "", 4) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("zyxbcdefgh", "abcdwxyz", 0) == 0 && ft_strncmp("zyxbcdefgh", "abcdwxyz", 0) == 0) || (strncmp("zyxbcdefgh", "abcdwxyz", 0) > 0 && ft_strncmp("zyxbcdefgh", "abcdwxyz", 0) > 0) || (strncmp("zyxbcdefgh", "abcdwxyz", 0) < 0 && ft_strncmp("zyxbcdefgh", "abcdwxyz", 0) < 0) ? "OK" : "KO");
	printf("%s\n", (strncmp("test\200", "test\0", 6) == 0 && ft_strncmp("test\200", "test\0", 6) == 0) || (strncmp("test\200", "test\0", 6) > 0 && ft_strncmp("test\200", "test\0", 6) > 0) || (strncmp("test\200", "test\0", 6) < 0 && ft_strncmp("test\200", "test\0", 6) < 0) ? "OK" : "KO");
	printf("\n***************************************\n");
//test ft_strchr
	printf("\n	FT_STRCHR\n");
	char	*s21 = "alla";
	int		c1 = 0;
	printf("strchr : %s\n", strchr(s21, c1));
	printf("ft_strchr : %s\n", ft_strchr(s21, c1));
	printf("\n***************************************\n");
//test ft_strchr
/*			printf("strrchr : %s\n", strrchr(av[1], ft_atoi(av[2])));
			printf("ft_strrchr : %s\n", ft_strrchr(av[1], ft_atoi(av[2])));
			ft_putchar_fd('\n', fd);
		}
//test ft_isalnum : test ok
*/	printf("\n	FT_ISALNUM\n");
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(0), ft_isalnum(0));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(-1), ft_isalnum(-1));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(255), ft_isalnum(255));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(256), ft_isalnum(256));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(300), ft_isalnum(300));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(64), ft_isalnum(64));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(65), ft_isalnum(65));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(90), ft_isalnum(90));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(91), ft_isalnum(91));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(96), ft_isalnum(96));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(97), ft_isalnum(97));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(122), ft_isalnum(122));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(123), ft_isalnum(123));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(47), ft_isalnum(47));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(48), ft_isalnum(48));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(57), ft_isalnum(57));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(58), ft_isalnum(58));
	printf("isalnum : %d, ft_isalnum : %d\n", isalnum(32), ft_isalnum(32));
	printf("\n***************************************\n");
	//test ft_isascii : test ok
	printf("\n	FT_ISASCII\n");
	printf("isascii : %d, ft_isascii: %d\n", isascii(0), ft_isascii(0));
	printf("isascii : %d, ft_isascii: %d\n", isascii(-10), ft_isascii(-10));
	printf("isascii : %d, ft_isascii: %d\n", isascii(-1), ft_isascii(-1));
	printf("isascii : %d, ft_isascii: %d\n", isascii(1), ft_isascii(1));
	printf("isascii : %d, ft_isascii: %d\n", isascii(127), ft_isascii(127));
	printf("isascii : %d, ft_isascii: %d\n", isascii(128), ft_isascii(128));
	printf("isascii : %d, ft_isascii: %d\n", isascii(245), ft_isascii(245));
	printf("\n***************************************\n");
//test ft_isprint : test ok
	printf("\n	FT_ISPRINT\n");
	printf("isprint : %d, ft_isprint : %d\n", isprint(0), ft_isprint(0));
	printf("isprint : %d, ft_isprint : %d\n", isprint(32), ft_isprint(32));
	printf("isprint : %d, ft_isprint : %d\n", isprint(33), ft_isprint(33));
	printf("isprint : %d, ft_isprint : %d\n", isprint(126), ft_isprint(126));
	printf("isprint : %d, ft_isprint : %d\n", isprint(127), ft_isprint(127));
	printf("isprint : %d, ft_isprint : %d\n", isprint(55), ft_isprint(55));
	printf("isprint : %d, ft_isprint : %d\n", isprint(256), ft_isprint(256));
	printf("\n***************************************\n");
	//test ft_toupper
	printf("\n	FT_TOUPPER\n");
	printf("toupper : %d, ft_toupper : %d\n", toupper(0), ft_toupper(0));
	printf("toupper : %d, ft_toupper : %d\n", toupper(65), ft_toupper(65));
	printf("toupper : %d, ft_toupper : %d\n", toupper(255), ft_toupper(255));
	printf("toupper : %d, ft_toupper : %d\n", toupper(10), ft_toupper(10));
	printf("toupper : %d, ft_toupper : %d\n", toupper(64), ft_toupper(64));
	printf("toupper : %d, ft_toupper : %d\n", toupper(97), ft_toupper(97));
	printf("\n***************************************\n");
	//test ft_tolower
	printf("\n	FT_TOLOWERn");
	printf("tolower : %d, ft_tolower : %d\n", tolower(0), ft_tolower(0));
	printf("tolower : %d, ft_tolower : %d\n", tolower(64), ft_tolower(64));
	printf("tolower : %d, ft_tolower : %d\n", tolower(65), ft_tolower(65));
	printf("tolower : %d, ft_tolower : %d\n", tolower(90), ft_tolower(90));
	printf("tolower : %d, ft_tolower : %d\n", tolower(122), ft_tolower(122));
	printf("tolower : %d, ft_tolower : %d\n", tolower(94), ft_tolower(94));
	printf("tolower : %d, ft_tolower : %d\n", tolower(255), ft_tolower(255));
	printf("\n***************************************\n");
/*		}
	}
	if (ac == 3)
	{
	//test ft_strlcpy
		while (av[2][i] == ' ' || (av[2][i] >= '\t' && av[2][i] <= '\r'))
			i++;
		if (av[2][i] == '+' || av[2][i] == '-')
			i++;
		if (av[2][i] >= '0' && av[2][i] <= '9')
		{
			ft_putstr_fd("ft_strlcpy:\n", fd);
			ft_putnbr_fd(ft_strlcpy(dst_0, av[1], ft_atoi(av[2])), fd);
			ft_putchar_fd('\n', fd);
			ft_putstr_fd(dst_0, fd);
			ft_putchar_fd('\n', fd);
			ft_putstr_fd("strlcpy:\n", fd);
			ft_putnbr_fd(strlcpy(dst_1, av[1], ft_atoi(av[2])), fd);
			ft_putchar_fd('\n', fd);
			ft_putstr_fd(dst_1, fd);
			ft_putchar_fd('\n', fd);
			ft_putchar_fd('\n', fd);
		}
	//test ft_split
		if (ft_strlen(av[2]) == 1)
		{
			ft_putendl_fd("ft_split :", fd);
			i = 0;
			s1 = av[1];
			strs = ft_split(s1, av[2][0]);
			while (strs[i])
			{
				ft_putendl_fd(strs[i], fd);
				free (strs[i]);
				i++;
			}
			free (strs);
			ft_putchar_fd('\n', fd);
		}
	//test ft_strjoin
		s1 = av[1];
		s2 = av[2];
		r = ft_strjoin(s1, s2);
		ft_putstr_fd("ft_strjoin : ", fd);
		ft_putendl_fd(r, fd);
		free (r);
		s3 = NULL;
		s4 = NULL;
		r1 = ft_strjoin(s3, s4);
		ft_putstr_fd("ft_strjoin avec s1 = NULL et s2 = NULL: ", fd);
		printf("%p\n", r1);
		free (r1);
		r = ft_strjoin(s3, s2);
		ft_putstr_fd("ft_strjoin avec s1 = NULL et s2 = av[2]: ", fd);
		ft_putendl_fd(r, fd);
		free (r);
		r = ft_strjoin(s1, s4);
		ft_putstr_fd("ft_strjoin avec s1 = av[1] et s2 = NULL: ", fd);
		ft_putendl_fd(r, fd);
		free (r);
	}
	if (ac == 4)
	{
		while (av[1][i])
		{
			dst_0[i] = av[1][i];
			dst_1[i] = av[1][i];
			i++;
		}
		dst_0[i] = '\0';
		dst_1[i] = '\0';
		i = 0;
		while (av[3][i] == ' ' || (av[3][i] >= '\t' && av[3][i] <= '\r'))
			i++;
		if (av[3][i] == '+' || av[3][i] == '-')
			i++;
		if (av[3][i] >= '0' && av[3][i] <= '9')
		{
*///test ft_strlcat
	char	*dst_1 = NULL;
	char	*dst_2 = NULL;
	char	*s22 = "er";
	printf("\n	FT_STRLCAT\n");
	printf("ft_strlcat : %zu\n", ft_strlcat(dst_1, s22, 0));
	printf("strlcat : %zu\n", strlcat(dst_2, s22, 0));
	printf("\n***************************************\n");
	//test ft_strnstr
//	char	*b1 = NULL;
	char	*b2 = "BIG";
//	char	*l1 = NULL;
	char	*l2 = "LITTLE";
	printf("strnstr : %s\n", strnstr(b2, l2, 3)); //segf si big et little a null, si big null et little non et si little oui et big non
	printf("ft_strnstr : %s\n", ft_strnstr(b2, l2, 3));
	printf("\n***************************************\n");
//test ft_memcmp : test ok (segfault si s1 ou s2 = NULL normal)
	printf("\n	FT_MEMCMP\n");
	size_t	n = 0;
	char	s5[] = "Salut ca va?";
	char	s6[] = "Salut";
	char	s7[] = "Salut";
	char	s8[] = "a";
	char	s9[] = "aa";
	char	s10[] = "1";
	char	s11[] = "ab";
	char	s12[] = "ba";
	char	s13[] = "bai";
	char	s14[] = "bac";
	while (n < 12)
	{
		printf("%s\n", (memcmp(s1, s2, n) == 0 && ft_memcmp(s1, s2, n) == 0) || (memcmp(s1, s2, n) > 0 && ft_memcmp(s1, s2, n) > 0) || (memcmp(s1, s2, n) < 0 && ft_memcmp(s1, s2, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s1, s4, n) == 0 && ft_memcmp(s1, s4, n) == 0) || (memcmp(s1, s4, n) > 0 && ft_memcmp(s1, s4, n) > 0) || (memcmp(s1, s4, n) < 0 && ft_memcmp(s1, s4, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s1, s5, n) == 0 && ft_memcmp(s1, s5, n) == 0) || (memcmp(s1, s5, n) > 0 && ft_memcmp(s1, s5, n) > 0) || (memcmp(s1, s5, n) < 0 && ft_memcmp(s1, s5, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s2, s2, n) == 0 && ft_memcmp(s2, s2, n) == 0) || (memcmp(s2, s2, n) > 0 && ft_memcmp(s2, s2, n) > 0) || (memcmp(s2, s2, n) < 0 && ft_memcmp(s2, s2, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s6, s7, n) == 0 && ft_memcmp(s6, s7, n) == 0) || (memcmp(s6, s7, n) > 0 && ft_memcmp(s6, s7, n) > 0) || (memcmp(s6, s7, n) < 0 && ft_memcmp(s6, s7, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s8, s9, n) == 0 && ft_memcmp(s8, s9, n) == 0) || (memcmp(s8, s9, n) > 0 && ft_memcmp(s8, s9, n) > 0) || (memcmp(s8, s9, n) < 0 && ft_memcmp(s8, s9, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s8, s10, n) == 0 && ft_memcmp(s8, s10, n) == 0) || (memcmp(s8, s10, n) > 0 && ft_memcmp(s8, s10, n) > 0) || (memcmp(s8, s10, n) < 0 && ft_memcmp(s8, s10, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s9, s11, n) == 0 && ft_memcmp(s9, s11, n) == 0) || (memcmp(s9, s11, n) > 0 && ft_memcmp(s9, s11, n) > 0) || (memcmp(s9, s11, n) < 0 && ft_memcmp(s9, s11, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s9, s12, n) == 0 && ft_memcmp(s9, s12, n) == 0) || (memcmp(s9, s12, n) > 0 && ft_memcmp(s9, s12, n) > 0) || (memcmp(s9, s12, n) < 0 && ft_memcmp(s9, s12, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s13, s12, n) == 0 && ft_memcmp(s13, s12, n) == 0) || (memcmp(s13, s12, n) > 0 && ft_memcmp(s13, s12, n) > 0) || (memcmp(s13, s12, n) < 0 && ft_memcmp(s13, s12, n) < 0) ? "OK" : "KO");
		printf("%s\n", (memcmp(s13, s14, n) == 0 && ft_memcmp(s13, s14, n) == 0) || (memcmp(s13, s14, n) > 0 && ft_memcmp(s13, s14, n) > 0) || (memcmp(s13, s14, n) < 0 && ft_memcmp(s13, s14, n) < 0) ? "OK" : "KO");
		ft_putchar_fd('\n', 1);
		n++;
	}
	printf("***************************************\n");
//test ft_bzero : test ok
	printf("\n	FT_BZERO\n");
	printf("s6 %s >\n", s6);
	n = 0;
	bzero(s6, n);
       	ft_bzero(s7, n);
	write(1, s6, 5);
	ft_putchar_fd('\n', 1);
	write(1, s7, 5);
	ft_putchar_fd('\n', 1);
	n = 3;
	bzero(s6, n);
       	ft_bzero(s7, n);
	write(1, s6, 5);
	ft_putchar_fd('\n', 1);
	write(1, s7, 5);
	ft_putchar_fd('\n', 1);
	n = 6;
	bzero(s6, n);
       	ft_bzero(s7, n);
	write(1, s6, 6);
	ft_putchar_fd('\n', 1);
	write(1, s7, 6);
	ft_putchar_fd('\n', 1);
	printf("***************************************\n");
//test ft_memmove : test ok
	printf("\n	FT_MEMMOVE\n");
	char	dest_1[5] = "";
	char	dest_2[5] = "";
	char	s15[] = "Hello World";
	char	s16[] = "Hello World";
	char	s17[] = "lorem ipsum dolor sit amet";
	char	*s18 = s17 + 1;
	char	s19[] = "lorem ipsum dolor sit amet";
	char	*s20 = s19 + 1;
	printf("src : %s et dest : %s\n", s5, dest_1);
	memmove(dest_1, s5, 4);
	printf("apres memmove > src : %s et dest : %s\n", s5, dest_1);
	ft_memmove(dest_2, s5, 4);
	printf("apres ft_memmove > src : %s et dest : %s\n", s5, dest_2);
	ft_putchar_fd('\n', 1);
	printf("src : %s et dest : %s\n", s15, s15 + 1);
	memmove((s15 + 1), s15, 6);
	printf("apres memmove > src : %s et dest : %s\n", s15, s15 + 1);
	ft_memmove((s16 + 1), s16, 6);
	printf("apres ft_memmove > src : %s et dest : %s\n", s16, s16 + 1);
	ft_putchar_fd('\n', 1);
	printf("src : %s et dest : %s\n", s18, s17);
	memmove(s17, s18, 8);
	printf("apres memmove > src : %s et dest : %s\n", s18, s17);
	ft_memmove(s19, s20, 8);
	printf("apres ft_memmove > src : %s et dest : %s\n", s20, s19);

	printf("***************************************\n");
//test ft_calloc : test ok >> Run avec ./prog | cat -e pour afficher les 0
	printf("\n	FT_CALLOC\n");
	char	*array_1;
	char	*array_2;
	size_t	nmemb = 5;
	array_1 = (char *)calloc(nmemb, 4);
	array_2 = (char *)calloc(nmemb, 4);
	printf("array_1 : %p\n", array_1);
	printf("array_2 : %p\n", array_2);
	n = 0;
	while (n < nmemb)
	{
		printf("array_1[%ld] = %c\n", n, array_1[n]);
		printf("array_2[%ld] = %c\n", n, array_2[n]);
		n++;
	}
	free(array_1);
	free(array_2);
	nmemb = 0;
	array_1 = (char *)calloc(nmemb, 0);
	array_2 = (char *)calloc(nmemb, 0);
	printf("array_1 : %p\n", array_1);
	printf("array_2 : %p\n", array_2);
	free(array_1);
	free(array_2);
	printf("\n***************************************\n");
	return(0);
}
