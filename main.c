#include"libft.h"
#include<stdio.h>
#include<bsd/string.h>

int main()
{
/*	int testme = 'g';
	printf(" TEST SUBJECT: %c\n\n\n", testme);

	printf("ft_isalpha\nShows 0 if not alphabet: %d\n\n", ft_isalpha(testme));
	printf("ft_isdigit\nShows 0 if not digit: %d\n\n", ft_isdigit(testme));
	printf("ft_isalnum\nShows 0 if not alphanum: %d\n\n", ft_isalnum(testme));
	printf("ft_isascii\nShows 0 if not ascii: %d\n\n", ft_isascii(testme));
	printf("ft_isprint\nShows 0 if not printable: %d\n", ft_isprint(testme));
	printf("________________________________\n\n");
	
	printf("ft_toupper\n");
	int tree = 'q';
	printf("Test subject: %c\n", tree);
	tree = ft_toupper(tree);
	printf("Inflated?: %c\n", tree);
	printf("\n");
	
	printf("ft_tolower\n");
	int flower = 'R';
	printf("Test subject: %c\n", flower);
	flower = ft_tolower(flower);
	printf("Deflated?: %c\n", flower);
	printf("________________________________\n\n");

	printf("ft_strlen\n");
	char what[] = "How long is it gonna be?";
	printf("%s\n", what);
	printf("Length of string is %zu\n", ft_strlen(what));
	printf("________________________________\n\n");

	printf("ft_memset\n");
	char s1[100] = "---------------";
	char s2[100] = "---------------";
	printf("%s Operation target s1/s2\n", s1);
	ft_memset(s1, 120, 5);
	memset(s2, 120, 5);
	printf("%s Own func\n", s1);
	printf("%s Orig func\n", s2);
	printf("________________________________\n\n");

	printf("ft_bzero\n");
	char egg[] = "Happy Easter!";
	printf("Before: %s\n", egg);
	ft_bzero(egg, 6);
	printf("After: %s\n", egg);
	printf("________________________________\n\n");
	
	printf("ft_memcpy.c\n");
	char al[] = "Hand disinfectant";
	char fa[] = "Antibacterial";
	printf("Dest: %s\nSrc: %s\n", al, fa);
	char* alfa = ft_memcpy(al, fa, 8);
	char* bottle = memcpy(al, fa, 8);
	printf("%s Own func\n", alfa);
	printf("%s Orig func\n", bottle);
	printf("________________________________\n\n");	
	
	printf("ft_memmove. Test: dest comes before/after src\n");
	char w[50] = "Twinkle twinkle little star";
	char j[50] = "Twinkle twinkle little star";
	printf("%s Operating subject\n", w);
	ft_memmove(w + 2, w, 10);
	memmove(j + 2, j, 10);
	printf("%s Own func\n", w);
	printf("%s Orig func\n", j);
	printf("________________________________\n\n");
	
	printf("ft_strlcpy. Test: empty dest, source, size\n");
	char dog[100];
	char doggo[100];
	char cat[] = "To infinity and beyond";
	printf("%zu Own func\n", ft_strlcpy(dog, cat, 10));
	printf("%zu Orig func\n", strlcpy(doggo, cat, 10));
	printf("%s Own func behavior\n", dog);
	printf("%s Orig func behavior\n", doggo);
	printf("________________________________\n\n");

	printf("ft_strlcat. Test: Empty dest, empty src, size <dest, >dest, >dest size\n");
	char kit[100] = "Baby shark ";
	char kitty[100] = "Baby shark ";
	char pup[] = "dududududu";
	printf("%zu Own func\n", ft_strlcat(kit, pup, 13));
	printf("%zu Orig func\n", strlcat(kitty, pup, 13));
	printf("%s Own func behavior\n", kit);
	printf("%s Orig func behavior\n", kitty);
	printf("________________________________\n\n");
	
	char chick[] = "I'm so hungry";
	printf("String: %s\n\n", chick);
	printf("ft_strchr. Test: Arnold, yes match, no match\n");
	char* hen = ft_strchr(chick, 'z');
	char* rooster = strchr(chick, 'z');
	printf("%p Pointer address of own func result\n", hen);
	printf("%p Pointer address of orig func result\n", rooster);
	printf("%p Pointer address of Arnold in string\n", chick+strlen(chick));
	printf("%s Own func\n", hen);
	printf("%s Orig func\n\n", rooster);

	printf("ft_strrchr\n");
	char* fillet = ft_strrchr(chick, 'g');
	char* leg = strrchr(chick, 'g');
	printf("%p Pointer address of own func result\n", fillet);
	printf("%p Pointer address of orig func result\n", leg);
	printf("%p Pointer address of Arnold in string\n", chick+strlen(chick));
	printf("%s Own func\n", fillet);
	printf("%s Orig func\n", leg);
	printf("________________________________\n\n");

	printf("ft_strncmp. Test: empty string/strings, small/big num\n");
	char s1[] = "Hi there";
	char s2[] = "Hi where";
	size_t num = 20;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("%d Own func\n", ft_strncmp(s1, s2, num));
	printf("%d Orig func\n", strncmp(s1, s2, num));
	printf("________________________________\n\n");

	printf("ft_atoi. Tests: spaces, 1/multiple sign, 0 in beginning, int min/max\n");
	char card[] = "   -2147483648";
	printf("Test string: %s\n", card);
	printf("Own func: %d\n", ft_atoi(card));
	printf("Orig func: %d\n", atoi(card));
	printf("________________________________\n\n");
*/

}
