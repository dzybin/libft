
#include <stdio.h>
#include <stdlib.h>

static int	ft_ptab_len(char const *s, char c)
{
	int	ptab_len;
	int	i;

	if (!s || !c)
		return (-1);
	ptab_len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			ptab_len++;
		while (s[i] != c && s[i])
			i++;
	}
	return (ptab_len);
}
/*
static char	*w_create(char const *s, char c)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	cpy = malloc((i + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[i] = '\0';
	while (--i >= 0)
		cpy[i] = s[i];
	return (cpy);
}
*/

int	main()
{
char const *s = "laxer";
char	c;

c = 'x';

printf("%d\n", ft_ptab_len(s, c));
return(0);
}
