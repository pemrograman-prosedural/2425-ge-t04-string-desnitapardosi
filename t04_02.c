// 12S24038 - NICOLAS J GRACE BUTARBUTAR
// 12S24043 - DESNITA PARDOSI

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char string[21];
    scanf("%20[^\n]", string);  
    int length = strlen(string);

    
    for (int i = 0; i < length; i++) {
        printf("%03d", string[i]);
    }
    
    printf("\n");
    
  return 0;
}