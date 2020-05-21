// Input:  thisCompiledCode desiredFileName -n -f
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <getopt.h>

int main(int argc, char *argv[]){
printf("hello\n");

if (argc > 0) {
        printf("%s \n", argv[1]);

}

    int opt;
    while ((opt = getopt(argc, argv, "nf")) != -1) {

        switch (opt) {

            case 'n':
               printf("You typed n \n");
                break;

            case 'f':
                printf("You typed f \n");
                break;

           default:
                //printf("Command not listed");
            break;
        }// close switch
    }// close while

}// close main

