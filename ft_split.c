#include "libft.h"

size_t	ft_count_words(char const *s, size_t *i, char c)
{
	size_t	cont_str;

	cont_str = 0;
	while (s[++*i] != '\0')
		if (s[*i] == c && i > 0)
			cont_str++;
	cont_str++;
	return (cont_str);
}

char	**ft_fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = 0;
	k = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			split[j][k] = s[i];
			k++;
		}
		else
		{
			split[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	return (split);
}

void	ft_asign(size_t *i, size_t *j, size_t a, size_t b)
{
	*i = a;
	*j = b;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	cont_str;
	char	**split;

	ft_asign(&i, &j, -1, 0);
	cont_str = ft_count_words(s, &i, c);
	ft_asign(&k, &i, i + 1, -1);
	split = (char **)malloc(sizeof(char *) * (cont_str + 1));
	cont_str = 0;
	while (++i < k)
	{
		if (s[i] != c && s[i] != '\0')
			cont_str++;
		else
		{
			split[j] = (char *)malloc(sizeof(char) * (cont_str + 1));
			cont_str = 0;
			j++;
		}
	}
	split[j] = NULL;
	return (ft_fill_split(split, s, c));
}
