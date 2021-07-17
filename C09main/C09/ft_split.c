int	isInCharset(char c, char *charset)
{
	int indexCharset;
	int flag;

	flag = 0;
	indexCharset = 0;
	while (charset[indexCharset])
	{
		if (c == charset[indexCharset])
		{
			indexCharset = 0;
			flag = 1;
			return (flag);
		}
		indexCharset++;
	}
	return (flag);
}

char	**ft_split(char *str, char *charset)
{
	int index;
	int indexCharset;
	char *individialStr;
	int flag;
	int individualIndex;
	char **ret;
	int	indexRet;

	individualIndex = 0;
	flag = 0;
	index = 0;
	indexRet = 0;
	individialStr = malloc(12800 * sizeof(char));
	ret = malloc(sizeof(char *) * ());
	while (str[index] != '\0')
	{
		
		if (flag == 0)
		{
			individialStr[individualIndex] = str[index];
		}
		else if (flag == 1 && (strLen(individialStr) > 0))
		{
			ret[indexRet++] = individialStr;
		}
	}
}