// 12S24038 - NICOLAS J GRACE BUTARBUTAR
// 12S24043 - DESNITA PARDOSI

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
   char numbers[255];

   scanf("%s", numbers);

   int length = strlen(numbers);
   for (int i = 0; i < length; i += 3) {
       int number = 0;
       for (int x = 0; x < 3 && (x + i) < length; x++) {
           number = number * 10 + (numbers[x + i] - '0');
       }
       printf("%c", (char)number);
   }
   printf("\n");

   return 0;
}

