#include "libft.h"
#include <bsd/bsd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/*
static void	ft_iteri(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '.';
}

static char	ft_mapi(unsigned int i, char c)
{
	if (i % 2 == 0)
		c = '.';
	return (c);
}
*/
int	main(void)
{
//test ft_strtrim : test ok
	printf("\n	FT_STRTRIM\n");
/*	char	*s1 = NULL;
	char	s2[] = "lorema ipsum amrol";
	char	s3[] = "lorem";
	char	s4[] = "lorema iplsuerm amrol";
	char	s5[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	s6[] = "\n";
*/
	char	*array_1;

/*	array_1 = ft_strtrim(s1, s1);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s1, s1, array_1);
	free(array_1);
	array_1 = ft_strtrim(s1, s3);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s1, s3, array_1);
	free(array_1);
	array_1 = ft_strtrim(s2, s3);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s2, s3, array_1);
	free(array_1);
	array_1 = ft_strtrim(s4, s3);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s4, s3, array_1);
	free(array_1);
	array_1 = ft_strtrim(s4, s1);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s4, s1, array_1);
	free(array_1);
	array_1 = ft_strtrim(s5, s6);
	printf("s1 : %s et set : %s > ft_strtrim %s\n", s5, s6, array_1);
	free(array_1);
*/	array_1 = ft_strtrim("   xxx   xxx", " x");
	printf("s1 : %s et set : %s > ft_strtrim '%s'\n", "   xxx   xxx", "x", array_1);
	free(array_1);
	printf("\n***************************************\n");
//test ft_substr : test ok
/*	printf("\n	FT_SUBSTR\n");
	char	s7[] = "lorem ipsum dolor sit amet";
	array_1 = ft_substr(s1, 1, 1);
	printf("s1 : %s , start = 1, len = 1 > ft_substr %s\n", s1, array_1);
	free(array_1);
	array_1 = ft_substr(s1, 1, 0);
	printf("s1 : %s , start = 1, len = 0 > ft_substr %s\n", s1, array_1);
	free(array_1);
	array_1 = ft_substr(s2, 0, 0);
	printf("s1 : %s , start = 0, len = 0 > ft_substr %s\n", s2, array_1);
	free(array_1);
	array_1 = ft_substr(s2, 0, 3);
	printf("s1 : %s , start = 0, len = 3 > ft_substr %s\n", s2, array_1);
	free(array_1);
	array_1 = ft_substr(s2, 4, 15);
	printf("s1 : %s , start = 4, len = 15 > ft_substr %s\n", s2, array_1);
	free(array_1);
	array_1 = ft_substr(s7, 0, 10);
	printf("s1 : %s , start = 0, len = 10 > ft_substr %s\n", s7, array_1);
	free(array_1);
	array_1 = ft_substr(s7, 400, 20);
	printf("s1 : %s , start = 400, len = 20 > ft_substr %s\n", s7, array_1);
	free(array_1);
	array_1 = ft_substr(s7, 2, 2);
	printf("s1 : %s , start = 2, len = 2 > ft_substr %s\n", s7, array_1);
	free(array_1);
	array_1 = ft_substr(s7, 7, 1);
	printf("s1 : %s , start = 7, len = 1 > ft_substr %s\n", s7, array_1);
	free(array_1);
	array_1 = ft_substr("Tripouille", 0, 42000);
	printf("s1 : Tripouille , start = 0, len = 42000 > ft_substr %s\n", array_1);
	free(array_1);
	array_1 = ft_substr("Tripouille", 3, 8);
	printf("s1 : Tripouille , start = 3, len = 8 > ft_substr %s\n", array_1);
	free(array_1);
	char str[] = "1";
	array_1 = ft_substr(str, 42, 42000000);
	printf("s1 : %s , start = 3, len = 8 > ft_substr %s\n", str, array_1);
	free(array_1);
//	free(str);
	printf("\n***************************************\n");
//test ft_striteri : test ok
	printf("\n	FT_STRITERI\n");
	void (*ft)(unsigned int, char *) = &ft_iteri;
	char	s8[] = "l";
	char	s9[] = "lo";
	printf("s : %s > ", s1);
	ft_striteri(s1, *ft);
	printf("s %s\n", s1);
	printf("s : %s > ", s2);
	ft_striteri(s2, *ft);
	printf("s : %s\n", s2);
	printf("s : %s > ", s9);
	ft_striteri(s9, *ft);
	printf("s : %s\n", s9);
	printf("s : %s > ", s8);
	ft_striteri(s8, *ft);
	printf("s : %s\n", s8);
	printf("\n***************************************\n");
//test ft_strmapi : test ok
	printf("\n	FT_STRMAPI\n");
	char (*ft_1)(unsigned int, char) = &ft_mapi;
	char s10[] = "";
	char s11[] = "l";
	char s12[] = "lo";
	printf("s : %s > ", s1);
	array_1 = ft_strmapi(s1, *ft_1);
	printf("s %s, array_1 : %s\n", s1, array_1);
	free (array_1);
	printf("s : %s > ", s3);
	array_1 = ft_strmapi(s3, *ft_1);
	printf("s %s, array_1 : %s\n", s3, array_1);
	free (array_1);
	printf("s : %s > ", s5);
	array_1 = ft_strmapi(s5, *ft_1);
	printf("s %s, array_1 : %s\n", s5, array_1);
	free (array_1);
	printf("s : %s > ", s10);
	array_1 = ft_strmapi(s10, *ft_1);
	printf("s %s, array_1 : %s\n", s10, array_1);
	free (array_1);
	printf("s : %s > ", s11);
	array_1 = ft_strmapi(s11, *ft_1);
	printf("s %s, array_1 : %s\n", s11, array_1);
	free (array_1);
	printf("s : %s > ", s12);
	array_1 = ft_strmapi(s12, *ft_1);
	printf("s %s, array_1 : %s\n", s12, array_1);
	free (array_1);
//test ft_memcpy : test  en cours
	
*/	return (0);
}
