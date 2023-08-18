#include <stdio.h>

int main()
{
char product[14] = "en C Pyfo neZ";

FILE *file = fopen("100-password", "w");
if (file != NULL)
{
fprintf(file, "%s", product);
fclose(file);
}
return 0;
}

