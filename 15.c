#include <stdio.h>

int str_length(char *str){
    int length = 0;
    while (str[length] != '\0'){
        length++;
    }
    return length;
}

int find_substr(char *a, char *b){
    int lengthA = str_length(a);
    int lengthB = str_length(b);

    if (lengthB > lengthA){
        char temp[50];
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);

        int lengthT = lengthA;
        lengthA = lengthB;
        lengthB = lengthT;
    }

    for (int i = 0; i < lengthA; i++){
        if (i + lengthB > lengthA){
            break;
        }
        int found = 1;
        for (int j = 0, k = i; j < lengthB; j++, k++){
            if (a[k] != b[j]){
                found = 0;
                break;
            }
        }
        if (found){
            return 1;
        }
    }
    return -1;
}

int main(){
    char a[100], b[100];
    scanf ("%s", a);
    scanf ("%s", b);
    printf ("%d\n", find_substr(a, b));
    return 0;
}
