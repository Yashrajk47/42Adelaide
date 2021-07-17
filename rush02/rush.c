#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_split{
	char keyarr[500][500];
	char valuearr[500][500];
}	split;

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
		i++;
	}
	if (s2[i])
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}

struct s_split	splitNumbers(char *str, int arrPosition, struct s_split ret)
{
	char	valuearr[500][500];
	int		keyIndex;
	int		valueIndex;
	int		index;

	index = 0;
	keyIndex = 0;
	valueIndex = 0;
	while (str[index] != '\0' && str[index] != ' ' && str[index] != ':')
		ret.keyarr[arrPosition][keyIndex++] = str[index++];
	ret.keyarr[arrPosition][keyIndex] = '\0';
	while (str[index] != '\0')
	{
		while (str[index] < 'a' || str[index] > 'z')
			index++;
		while (str[index] >= 'a' && str[index] <= 'z')
			ret.valuearr[arrPosition][valueIndex++] = str[index++];
	}
	ret.valuearr[arrPosition][valueIndex] = '\0';
	return (ret);
}

struct s_split	readFile(char *buf, int openFile, struct s_split ret)
{
	char	str[5000];
	int		index;
	int		i;
	int		arrPosition;

	arrPosition = 0;
	index = 0;
	i = 0;
	buf = malloc(128000 * sizeof(char));
	if (openFile > 0)
		read(openFile, buf, 128000);
	while (buf[index] != '\0')
	{
		while (buf[index] != '\n')
			str[i++] = buf[index++];
		str[i] = '\0';
		ret = splitNumbers(str, arrPosition, ret);
		arrPosition++;
		i = 0;
		index++;
	}
	free(buf);
	return (ret);
}

int	strLen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *spellBillion(char *str, char *partialStr, struct s_split ret)
{
	int index;
	int indexRet;
	char *retString;

	index = 0;
	indexRet = 0;
	retString = malloc(10 * sizeof(char));
	while (partialStr[0] != ret.keyarr[index][0])
		index++;
	write(1, ret.valuearr[index], 40);
	write(1, " ", 1);
	index = 0;
	while (ft_strcmp("1000000000", ret.keyarr[index]) != 0)
		index++;
	write(1, ret.valuearr[index], 40);
	index = 1;
	while (str[index] != '\0')
		retString[indexRet++] = str[index++];
	str = retString;
	write(1, " ", 1);
	return(str);
}

char	*stripStrRev(char *str, int amount)
{
	char *ret;
	int i;
	int len;
	i = 0;
	ret = malloc(4 * sizeof(char));
	len = strLen(str);
	while (i < amount)
	{
		ret[i] = str[i + 1];
		i++;
	}
	return ret;
}

char	*stripStr(char *str, int amount)
{
	char *ret;
	int i;

	i = 0;
	ret = malloc(4 * sizeof(char));
	while (i < amount)
	{
		ret[i] = str[i];
		i++;
	}
	return ret;
}
char	*spellHundreds(char * str, char *partialStr, char *multiplier, struct s_split ret)
{
	int fixedLen;
	int len;
	int index;
	char c;
	char *retString;

	retString = malloc(10 * sizeof(char));
	index = 0;
	len = strLen(partialStr);
	fixedLen = len;
	if (len == 3 && partialStr[0] != '0')
	{
		while (partialStr[0] != ret.keyarr[index][0])
			index++;
		write(1, ret.valuearr[index], 40);
		write(1, " ", 1);
		index = 0;
		while (ft_strcmp("100", ret.keyarr[index]) != 0)
			index++;
		write(1, ret.valuearr[index], 40);
		write(1, " ", 1);
		if (partialStr[1] == '0' && partialStr[2] == '0')
		{
			while (ft_strcmp(multiplier, ret.keyarr[index]) != 0)
				index++;
			write(1, " ", 1);
			write(1, ret.valuearr[index], 40);
		}
		partialStr = stripStrRev(partialStr, 2);
		len = strLen(partialStr);
		
	}
	else if (len == 3 && partialStr[0] == '0')
	{
		partialStr = stripStrRev(partialStr, 2);
		len--;
	}
	index = 0;
	if (len == 2 && partialStr[0] != '0' && partialStr[0] != '1')
	{
		c = partialStr[1];
		partialStr[1] = '0';
		while (ft_strcmp(partialStr, ret.keyarr[index]) != 0)
			index++;
		write(1, ret.valuearr[index], 40);
		index = 0;
		if (c != '0')
		{
			while (c != ret.keyarr[index][0])
				index++;
			write(1, " ", 1);
			write(1, ret.valuearr[index], 40);
		}
		index = 0;
		if (ft_strcmp(multiplier, "1") != 0)
		{
			while (ft_strcmp(multiplier, ret.keyarr[index]) != 0)
				index++;
			write(1, " ", 1);
			write(1, ret.valuearr[index], 40);
		}
	}
	else if (partialStr[0] == '1' && len == 2)
	{
		index = 0;
		while (ft_strcmp(partialStr, ret.keyarr[index]) != 0)
			index++;
		write(1, ret.valuearr[index], 40);
		write(1, " ", 1);
		if (ft_strcmp(multiplier, "1") != 0)
		{
			while (ft_strcmp(multiplier, ret.keyarr[index]) != 0)
				index++;
			write(1, ret.valuearr[index], 40);
		}
	}
	else if (partialStr[0] == '0' && len == 2)
	{
		index = 0;
		while (partialStr[1] != ret.keyarr[index][0])
				index++;
		write(1, ret.valuearr[index], 40);
		if ((ft_strcmp(multiplier, "1") != 0) && partialStr[1] != '0')
		{
			while (ft_strcmp(multiplier, ret.keyarr[index]) != 0)
				index++;
			write(1, " ", 1);
			write(1, ret.valuearr[index], 40);
		}
	}
	else if (len == 1 && partialStr[0] != '0')
	{
		while (ft_strcmp(partialStr, ret.keyarr[index]) != 0)
				index++;
		write(1, ret.valuearr[index], 40);
		if ((ft_strcmp(multiplier, "1") != 0) && partialStr[1] != '0')
		{
			while (ft_strcmp(multiplier, ret.keyarr[index]) != 0)
				index++;
			write(1, " ", 1);
			write(1, ret.valuearr[index], 40);
		}
	}
	index = 0;
	while(str[fixedLen] != '\0')
	{
		retString[index++] = str[fixedLen++];
	}
	str = retString;
	return(str);
}

void    parseNum(char *str, struct s_split ret)
{
    int len;
    int index;
    int requiredLen;
	char remainingStr[11];
    char *partialStr;
	
    index = 1;
	requiredLen = 3;
	partialStr = malloc(4 * sizeof(char));
	len = strLen(str);
    if (len == 10)
    {
		partialStr[0] = str[0];
		str = spellBillion(str, partialStr, ret);
		len = strLen(str);
	}
	
	if (len >= 7)
	{
		partialStr = stripStr(str, (len - 6));
		str = spellHundreds(str, partialStr, "1000000", ret);
	}
	printf("\n%s\n", str);
	// if (len > 8
}


int main(int argc, char **argv)
{
	struct s_split ret;
	char	*buf;
	int		openFile;
	
	openFile = open (argv[1], O_RDONLY);
	if (openFile < 0)
		openFile = open("numbers.dict", O_RDONLY);
	ret = readFile(buf, openFile, ret);
	parseNum("1236456654", ret);
}