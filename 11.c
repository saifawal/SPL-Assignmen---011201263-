#include <stdio.h>
#include <string.h>

int Find(char* str, char* word)
{
    int  i = 0,  j = 0, len = 0, wlen = 0, cnt = 0, flg = 0;

    len = strlen(str);
    wlen = strlen(word);

    for (i = 0; i <= len - wlen; i++) {

        flg = 1;
        for (j = 0; j < wlen; j++) {
            if (str[i + j] != word[j]) {
                flg = 0;
                break;
            }
        }

        if (flg == 1)
            cnt++;
    }

    return cnt;
}

int main() {
    char str[100];
    char word[100];

    int count = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    printf("Enter word to be searched: ");
    scanf("%s", word);

    count = Find(str, word);

    printf("%d\n", count);

    return 0;
}

