#include<stdio.h>
int main() {

    FILE *fpoutput;

    fpoutput = fopen("sample.txt","w");

        fprintf(fpoutput,"1 Zahid\n");
        fprintf(fpoutput,"2 Tanvir\n");
        fprintf(fpoutput,"3 Akif\n");

    fclose(fpoutput);
}
