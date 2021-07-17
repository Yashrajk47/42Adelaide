//ex00

int main()
{
	char *destfunc;
	char *srcfunc;
	srcfunc = "abcdefghijklmno";
	printf("%s", ft_strcpy(destfunc, srcfunc));
	return 0;
}

//ex02


int main()
{
	char *st;
	st = "";
	printf("%d", ft_str_is_alpha(st));
	return 0;
}

//ex03

int	main(void)
{
	char	*st;

	st = "1234564";
	printf("%d", ft_str_is_numeric(st));
	return (0);
}

//ex04

int main()
{
	char *st;
	st = "fdvjhdf:bvhjdfbvjhdfbvdjfbvdfbv";
	printf("%d", ft_str_is_lowercase(st));
	return 0;
}

//ex05

int main()
{
	char *st;
	st = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d", ft_str_is_uppercase(st));
	return 0;
}

//ex06

int main()
{
	char *st;
	st = "ABCDEFGH\0I\tJKLMNOPQRSTUVWXYZ";
	printf("%d", ft_str_is_printable(st));
	return 0;
}

//ex07
int main()
{
	char *st;
	int i;
	
	st[0] = 'f';
	st[1] = 'i';
	st[2] = ':';
	st[3] = 'G';
	st[4] = 'z';

	printf("%s", ft_strupcase(st));

	return 0;
}

//ex08
int main()
{
	char *st;
	int i;
	
	st[0] = 'f';
	st[1] = 'i';
	st[2] = ':';
	st[3] = 'G';
	st[4] = 'Z';

	printf("%s", ft_strlowcase(st));

	return 0;
}

//ex09

int main()
{
	char st[] = "  salut, co/MMent tu vAs ? 42mOts qua}ra]nte-dEux; cin.,qu*ante+et+un";
	printf("%s", ft_str_is_alpha(st));
	return 0;
}

//ex10

int main()
{
	char destfunc[20];
	char srcfunc[50] = "fhdshvdsvfvijbvjhdgvjhvhjs";
	printf("%d\n", ft_strlcpy(destfunc, srcfunc, 3));
	printf("%s", destfunc);
	return 0;
}

//ex11
int main()
{
	char *str;
	str = "Coucou\ntu v\tas bien ?";
	ft_putstr_non_printable(str);
	return 0;
}