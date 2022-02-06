#include<stdio.h>
#include<string.h>

int main() {

    char arr[100];
    int stringLength, outerCharIndex, innerCharIndex ;

    printf("Input a Sentence: ");

    fgets(arr, sizeof arr, stdin);
    stringLength = strlen(arr);
    stringLength -= 1;
    for(outerCharIndex=1;outerCharIndex<stringLength;outerCharIndex++)
    {
        for(innerCharIndex=0;innerCharIndex<stringLength-outerCharIndex;innerCharIndex++)
        {
            if(arr[innerCharIndex]>arr[innerCharIndex+1])
            {
                char charCopy = arr[innerCharIndex];
                arr[innerCharIndex] = arr[innerCharIndex+1];
                arr[innerCharIndex+1]=charCopy;
            }
        }
    }

    printf("%s",arr);

    return 0;
}



