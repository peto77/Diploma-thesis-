#include <stdio.h>
#include <time.h>

int main()
{
   char source[1000], destination[1000];

   printf("Input a string\n");
   gets(source);

   strcpy(destination, source);

   printf("Source string:      \"%s\"\n", source);
   printf("Destination string: \"%s\"\n", destination);

   return 0;
}
