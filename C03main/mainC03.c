// // ------ex00
// int main()
// {
// 	char *s1 = "AB A";
// 	char *s2 = "ABz";
// 	printf("\n%d\n", ft_strcmp(s1, s2));
// }

// // ------ex01
// int main()
// {
// 	char *s1 = "ABz";
// 	char *s2 = "ABz ";
// 	printf("\n%d\n", ft_strncmp(s1, s2, 4));
// }

// // ------ex02
// int main()
// {
// 	char s1[55] = "I am a ";

// 	char s2[] = "Seal Shark Dolphin Penguin";
// 	printf("\n%s\n", ft_strcat(s1, s2));
// }

// // ------ex03

// int main()
// {
// 	char s1[55] = "I am a ";

// 	char s2[] = "Seal Shark Dolphin Penguin";
// 	printf("\n%s\n", ft_strncat(s1, s2, 5));
// }

// ------ex04
#include <stdio.h>

char *ft_strstr(char *haystack, char *needle);

int main(int argc, char **argv)
{
	char *ptr = ft_strstr(argv[1], argv[2]);

	printf("%s", ptr);
	return 0;
}