#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i = 0;

	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	return (NULL);
}
int main()
{
	const char	*s = "obrigado";
    int i = 0;
    const char *h = "hdr";

     

	printf("%s \n", ft_strchr(s, h[i]));
	return (0);
}
