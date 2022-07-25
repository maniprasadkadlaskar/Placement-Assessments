#include<stdio.h>
#include<stdbool.h>

int main () {
    char psd[10];

    printf("Enter password : ");
    scanf("%s" , psd);

    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;

    int i;

    for (i = 0;psd[i] != '\0';i++) {
        char c = psd[i];

        if (c >= '0' && c <= '9') {
            flag1 = true;
        }
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            flag2 = true;
        }
        else {
            flag3 = true;
        }
    }

    if (flag1 == true && flag2 == true && flag3 == true)
        printf("Strong \n");
    else if (flag1 == true && flag2 == true)
        printf("Moderate \n");
    else 
        printf("Weak \n");
        
    return 0;
}