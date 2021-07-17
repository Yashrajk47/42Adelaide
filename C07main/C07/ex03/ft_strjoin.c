#include <stdlib.h>
int	ft_CountChar(int size, char **strs, char *sep)
{
	int	stringIndex;
	int	letterIndex;
	int	charCount;

	stringIndex = 0;
	letterIndex = 0;
	charCount = 0;
	while (stringIndex < size)
	{
		while (strs[stringIndex] && strs[stringIndex][letterIndex])
		{
			letterIndex++;
			charCount++;
		}
		stringIndex++;
		letterIndex = 0;
	}
	while (sep[letterIndex])
		letterIndex++;
	charCount += (letterIndex * (size - 1));
	return (charCount);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		charCount;
	int		counter;
	int		stringIndex;
	int		letterIndex;

	stringIndex = 0;
	letterIndex = 0;
	counter = 0;
	charCount = ft_CountChar(size, strs, sep);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	ret = (char *)malloc((charCount + 1) * sizeof(char));
	while (stringIndex < size)
	{
		while (strs[stringIndex] && strs[stringIndex][letterIndex])
			ret[counter++] = strs[stringIndex][letterIndex++];
		letterIndex = 0;
		while (sep[letterIndex] != '\0' && (stringIndex != size - 1))
			ret[counter++] = sep[letterIndex++];
		stringIndex++;
		letterIndex = 0;
	}
	ret[counter] = '\0';
	return (ret);
}
