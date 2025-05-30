#include"libft.h"
#include<stdio.h>
#include<bsd/string.h>

int main()
{
	int testme = 'g';
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

	printf("ft_strlcat. Test: Empty dest, empty src, size <dest / >dest\n");
	char kit[100] = "Baby shark ";
	char kitty[100] = "Baby shark ";
	char pup[] = "dududududu";
	printf("%zu Own func\n", ft_strlcat(kit, pup, 15));
	printf("%zu Orig func\n", strlcat(kitty, pup, 15));
	printf("%s Own func behavior\n", kit);
	printf("%s Orig func behavior\n", kitty);
	printf("________________________________\n\n");
	
	char chick[] = "I'm so hungry";
	printf("String: %s\n\n", chick);
	
	printf("ft_strchr. Test: Arnold, yes match, no match\n");
	char* hen = ft_strchr(chick, '+');
	char* rooster = strchr(chick, '+');
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

	printf("ft_strncmp. Test: empty string/strings, small/big num, strings with octal num\n");
	char st1[] = "a\200";
	char st2[] = "a\0";
	size_t num = 512;
	printf("st1: %s\n", st1);
	printf("st2: %s\n", st2);
	printf("%d Own func\n", ft_strncmp(st1, st2, num));
	printf("%d Orig func\n", strncmp(st1, st2, num));
	printf("________________________________\n\n");

	printf("ft_memchr. Test: find Arnold with less/more length\n");
	char *lemon = "When life gives you lemon";
	int lemonade = 'g';
	char *p = ft_memchr(lemon, lemonade, 30);
	char *o = memchr(lemon, lemonade, 30);
	printf("%p String's Arnold address\n", lemon + ft_strlen(lemon));
	printf("%p Own func pointer address\n", p);
	printf("%p Orig func pointer address\n", o);
	printf("%s Own func\n", p);
	printf("%s Orig func\n", o);
	printf("________________________________\n\n");
	
	printf("ft_memcmp\n");
	char *left = "abc";
	char *right = "ABC";
	printf("1st string:  %s\n", left);
	printf("2nd string:  %s\n", right);
	printf("Own func: %d\n", ft_memcmp(left, right, 3));
	printf("Orig func: %d\n", memcmp(left,right, 3));
	printf("________________________________\n\n");

	printf("ft_strnstr. Test: empty little string, small/big len\n");
	const char *s = "Mary has a little lamb";
	const char *f = "a li";
	printf("Big string:\t%s\n", s);
	printf("Little string:\t%s\n", f);
	char *me = ft_strnstr(s, f, 10);
	char *func = strnstr(s, f, 10);
	printf("%s Own func\n", me);
	printf("%s Orig func\n", func);
	printf("________________________________\n\n");

	printf("ft_atoi. Tests: spaces, 1/multiple sign, 0 in beginning, int min/max\n");
	char card[] = "   -2147483648";
	printf("Test string: %s\n", card);
	printf("Own func: %d\n", ft_atoi(card));
	printf("Orig func: %d\n", atoi(card));
	printf("________________________________\n\n");

	printf("ft_strdup\n");
	char *string = "";
	char *own = ft_strdup(string);
	char *orig = strdup(string);
	printf("Difference between own & orig func: %d\n", strcmp(own, orig));
	printf("%s Own func\n", own);
	printf("%s Orig func\n", orig);
	printf("________________________________\n\n");

	printf("ft_substr. Test empty string, start/len = 0, start >= strlen\n");
	const char *mom = "Delivery in 9 months 10 days";
	int stArt = 0;
	size_t lEn = 20;
	char *offspring = ft_substr(mom, stArt, lEn);
	printf("String: %s\nstart = %i; len = %zu\n", mom, stArt, lEn);
	printf("%s\n", offspring);
	printf("________________________________\n\n");
	
	printf("ft_strjoin\n");
	char *mate1 = "Double ";
	char *mate2 = "trouble";
	char *teammate = ft_strjoin(mate1, mate2);
	printf("%s\n", teammate);
	printf("________________________________\n\n");
	
	printf("ft_strtrim. Test empty string/set\n");
	char *snake = "=-=--=-== frog =-= tadpole=-=----=";
	char *venom = "=-";
	printf("Before trim: '%s' Char set: %s\nAfter trim: '%s'\n", snake, venom, ft_strtrim(snake, venom));
	printf("________________________________\n\n");
	
	printf("THE ft_split. Horrible stuff TT_TT\n");
	char *cake = "-------------";
	char topping = '-';
	char **slice = ft_split(cake, topping);
	printf("String: '%s'\nDelimiter char: '%c'\n", cake, topping);
	int i = 0;
	while (slice[i])
	{
		printf("'%s'\n", slice[i]);
		i++;
	}
	free(slice);
	printf("________________________________\n\n");

	printf("ft_itoa\n");
	int nb = -1235463983;
	printf("Here is the int:\t%i\n", nb);
	printf("Here is the string:\t%s\n", ft_itoa(nb));
	printf("________________________________\n\n");
}
