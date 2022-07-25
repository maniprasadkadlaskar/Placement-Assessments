#include<stdio.h>

char * checkSubstring (char s1[] , char s2[]) {
    int len1 = 0;
    int len2 = 0;
    int i;

    for (i = 0;s1[i] != '\0';i++);
    len1 = i;

    for (i = 0;s2[i] != '\0';i++);
    len2 = i;

    int j;
    int k;

    for (i = 0;i <= len1 - len2;i++) {
        k = 0;
        for (j = i;j < i + len2;j++) {
            if (s1[j] != s2[k]) {
                break;
            }
            k++;
            
        }

        if (j == i + len2)
            return &s1[i];

    }

    return NULL;
}

int main () {
    char s1[20] , s2[20];

    printf("Enter string : ");
    scanf("%s" , s1);
    printf("Enter substring : ");
    scanf("%s" , s2);

    char * ptr = checkSubstring (s1 , s2);

    if (ptr == NULL) {
        printf("Address : NULL");
    }
    else {
        printf("Address : %x" , ptr);
    }

    return 0;
}