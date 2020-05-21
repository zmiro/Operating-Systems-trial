
#include <dirent.h> // the format of directory entries
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
        struct dirent* direntp;
        DIR* dirp;

        char name [1000];
        int fileCounter =-1;

        if(argc != 2){
                fprintf(stderr, "Usage: %s  directory_name \n", argv[0]);
                return 1;
        }

        if ((dirp = opendir(argv[1])) == NULL) {
                perror("Failed to open directory");
                return 1;
        }

        if ((direntp = readdir(dirp)) != NULL){
                fileCounter++;
                printf("%s\n", direntp->d_name);
                //name[fileCounter] = *direntp->d_name;

        }

        while ((closedir(dirp) == -1) && (errno == EINTR));
        if ( fileCounter > -1){
                printf("Hello \n");
                printf("%s", name[0]);
        }
        return 0;
}
