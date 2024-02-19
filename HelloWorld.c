 /* First C program: Hello World */
#include <stdio.h>

int main(void)
{
printf("Hello World!\n");
}

 /* Hello World version 2 */
#include <stdio.h>

int main(void)
{
printf("Hello ");
printf("World!");
printf("\n");
}

 /* Hello World version 3 */
#include <stdio.h>

int main(void)
{
int i = 0;
char *str = "Hello World!\n";

/* Print each character until reach ’\0’ */
while (str[i] != ’\0’)
printf("%c", str[i++]);

return 0;
}