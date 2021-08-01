#include "libft.h"

int	main(void)
{
	char	**split;
	char	str1[] = "cola cco pinac";
	char	str2[] = "copi";
	char	str3[50];
	char	str4[] = "copil";
	int	i = -1;
	
	printf("ft_strjoin ORI : *%s*\n", str1);
	printf("ft_strjoin ORI : *%s*\n", str2);
	printf("ft_strjoin JOY : *%s*\n", ft_strjoin(str1, str2));
	
	printf("\n");

	printf("ft_strnstr ONE : *%s*\n", str1);
	printf("ft_strnstr TWO : *%s*\n", str2);
	printf("ft_strnstr FID : *%s*\n", ft_strnstr(str1, str2, 2));

	printf("\n");

	split = ft_split(str1, 'a');
	printf("ft_split STR_OR : *%s*\n", str1);
	while (split[++i] != NULL)
		printf("Palabra NO. %d : *%s*\n", i, split[i]);
	i = -1;
	
	printf("\n");

	printf("ft_isalpha : *%d*\n", ft_isalpha('A'));
	
	printf("\n");

	printf("ft_isdigit : *%d*\n", ft_isdigit('7'));
	
	printf("\n");

	printf("ft_isalnum : *%d*\n", ft_isalnum('A'));

	printf("\n");

	printf("ft_isascii : *%d*\n", ft_isascii(120));
	
	printf("\n");

	printf("ft_isprint : *%d*\n", ft_isprint(55));

	printf("\n");

	printf("ft_memset ORI : *%s*\n", str1);
	printf("ft_memset SET : *%s*\n", ft_memset(str1, 'a', 14));

	printf("\n");

	printf("ft_bzero ORI : *%s*\n", str1);
	ft_bzero(str1, 5);
	printf("ft_bzero SET : *");
	while (++i < 14)
		printf("%c", str1[i]);
	printf("*\n");
	i = -1;
	
	printf("\n");

	printf("ft_memcpy ORI : *%s*\n", str2);
	printf("ft_memcpy SET : *%s*\n", ft_memcpy(str3, str2, 1));
	printf("ft_memcpy ORI : *%s*\n", str2);
	
	printf("\n");

	printf("ft_memmove ORI : *%s*\n", str2);
	printf("ft_memmove SET : *%s*\n", ft_memmove(str3, str2, 1));
	printf("ft_memmove ORI : *%s*\n", str2);
	
	printf("\n");

	printf("ft_strlcpy ORI : *%s*\n", str2);
	printf("ft_strlcpy NUM : *%zu*\n", ft_strlcpy(str3, str2, 5));
	printf("ft_strlcpy CPY : *%s*\n", str3);

	printf("\n");

	printf("ft_strlcat OR1 : *%s*\n", str2);
	printf("ft_strlcat OR2 : *%s*\n", str3);
	printf("ft_strlcat NUM : *%zu*\n", ft_strlcat(str3, str2, 3));
	printf("ft_strlcat CAT : *%s*\n", str3);
	
	printf("\n");

	printf("ft_toupper : *%c*\n", ft_toupper('a'));

	printf("\n");

	printf("ft_tolower : *%c*\n", ft_tolower('Z'));
	
	printf("\n");

	printf("ft_strchr ORI : *%s*\n", str3);
	printf("ft_strchr FID : *%s*\n", ft_strchr(str3, 'i'));

	printf("\n");

	printf("ft_strrchr ORI : *%s*\n", str3);
	printf("ft_strrchr FID : *%s*\n", ft_strrchr(str3, 'o'));

	printf("\n");

	printf("ft_strncmp OR1 : *%s*\n", str2);
	printf("ft_strncmp OR2 : *%s*\n", str4);
	printf("ft_strncmp FID : *%d*\n", ft_strncmp(str2, str4, 4));
	
	printf("\n");

	printf("ft_memchr ORI : *%s*\n", str2);
	printf("ft_memchr FID : *%s*\n", (char *)ft_memchr(str2, 'i', 5));
	
	printf("\n");

	printf("ft_memcmp OR1 : *%s*\n", str2);
	printf("ft_memcmp OR2 : *%s*\n", str4);
	printf("ft_memcmp FID : *%d*\n", ft_memcmp(str2, str4, 5));

	printf("\n");

	printf("ft_substr ORI : *%s*\n", str1);
	printf("ft_substr CPY : *%s*\n", ft_substr(str1, 0, 5));

	printf("\n");

	printf("ft_atoi : *%d*\n", ft_atoi(" 	-3568ds218"));
	return (0);
}
