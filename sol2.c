#include <stdio.h>
#include <string.h>

int main()
{
char str[50], str1[50], str2[50];
scanf(“%s”, str);
scanf(“%s”, str1);
scanf(“%s”, str2);
int i;
for(i = 0; str[i] != ‘\0’; i++)
{
if(str[i] == ‘a’ || str[i] == ‘e’ || str[i] == ‘i’ || str[i] == ‘o’ || str[i] == ‘u’ || str[i] == ‘A’ || str[i] == ‘E’ || str[i] == ‘I’ || str[i] == ‘O’ || str[i] == ‘U’)
{
str[i] = ‘”‘;
}
}
for(i = 0; str1[i] != ‘\0’; i++)
{
if(str1[i] == ‘a’ || str1[i] == ‘e’ || str1[i] == ‘i’ || str1[i] == ‘o’ || str1[i] == ‘u’ || str1[i] == ‘A’ || str1[i] == ‘E’ || str1[i] == ‘I’ || str1[i] == ‘O’ || str1[i] == ‘U’)
{
continue;
}
else
str1[i] = ‘*’;
}

printf(“\nAfter Replacing : “);
printf(“\nString 1 : %s”, str);
printf(“\nString 2 : %s”, str1);
printf(“\nString 3 : %s\n”, strlwr(str2));

return 0;
}
