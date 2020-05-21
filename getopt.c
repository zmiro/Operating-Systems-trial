#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <getopt.h>

int main(int argc, char *argv[]){
if (argc > 0) {
        printf(" the selected file is: %s \n", argv[1]);

}
    int opt;
    int cvalue;

  // a colon (:) after the command like n: means n needs an argument
  //  if command has an argument, it is stored in the variable optarg
  // if there are two colons (::) then the argument is optional
        
  while ((opt = getopt(argc, argv, "f:n")) != -1) {

        switch (opt) {

            case 'n':
               printf("You typed option -n \n");
                break;

            case 'f':
                printf("You typed option -f with argument: ");
                cvalue = atoi (optarg);
                printf("%d \n", cvalue);
                break;

           default:
            break;
                        
        }// close switch
    }// close while

}// close main

