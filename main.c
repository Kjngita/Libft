#include"libft.h"
#include<stdio.h>
#include<bsd/string.h>

int main()
{
	int testme = 'a';
	printf(" TEST SUBJECT: %c\n\n\n", testme);

	printf("ft_isalpha\nShows 0 if not alphabet: %d\n\n", ft_isalpha(testme));

	printf("ft_isdigit\nShows 0 if not digit: %d\n\n", ft_isdigit(testme));

	printf("ft_isalnum\nShows 0 if not alphanum: %d\n\n", ft_isalnum(testme));
	
	printf("ft_isascii\nShows 0 if not ascii: %d\n\n", ft_isascii(testme));
	
	printf("ft_isprint\nShows 0 if not printable: %d\n", ft_isprint(testme));

	printf("________________________________\n\n");
	
	int tree = 'q';
	printf("ft_toupper\n");
	printf("Test subject: %c\n", tree);
	tree = ft_toupper(tree);
	printf("Inflated?: %c\n", tree);
	printf("\n");
	
	int flower = 'R';
	printf("ft_tolower\n");
	printf("Test subject: %c\n", flower);
	flower = ft_tolower(flower);
	printf("Deflated?: %c\n", flower);

	printf("________________________________\n\n");

	char what[] = "How long is it gonna be?";
	printf("ft_strlen\n%s\n", what);
	printf("Length of string is %zu\n", ft_strlen(what));

	printf("________________________________\n\n");
	
	printf("ft_strlcpy\n");
	char dog[100];
	char doggo[100];
	char cat[] = "To infinity and beyond";
	printf("%zu Own func\n", ft_strlcpy(dog, cat, 10));
	printf("%zu Orig func\n", strlcpy(doggo, cat, 10));
	printf("%s Own func behavior\n", dog);
	printf("%s Orig func behavior\n", doggo);
	printf("________________________________\n\n");

	printf("ft_strlcat\n");
	char kit[100] = "Baby shark ";
	char kitty[100] = "Baby shark ";
	char pup[] = "dududududu";
	printf("%zu Own func\n", ft_strlcat(kit, pup, 8));
	printf("%zu Orig func\n", strlcat(kitty, pup, 8));
	printf("%s Own func behavior\n", kit);
	printf("%s Orig func behavior\n", kitty);

	printf("________________________________\n\n");

	char card[] = "     +0123456e89";
	printf("ft_atoi\nTest string: %s\n", card);
	printf("Own func: %d\n", ft_atoi(card));
	printf("Orig func: %d\n", atoi(card));

	printf("________________________________\n\n");

}
