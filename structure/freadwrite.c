#include <stdio.h>
#include <string.h>

struct hello {
    char name[100];
    int id;
};

int main()
{
    // struct hello h = {"01_helloworld", 1};

    // // Write to file
    // FILE *file = fopen("01_hello.dat", "wb");
    // if (file == NULL) {
    //     perror("Error opening file for writing");
    //     return 1;
    // }

    // fwrite(&h, sizeof(h), 1, file);
    // fclose(file);

    // Read from file

    struct hello w;
    FILE *file = fopen("01_hello.dat", "rb+");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    while(fread(&w, sizeof(w), 1, file)){

        if(w.id == 1){
            fseek(file, -sizeof(w), SEEK_CUR);
            w.id = 100;
            fwrite(&w,sizeof(w),1, file);
        }
        printf("\nname = %s", w.name);
        printf("\nid = %d\n", w.id);
    }

    fclose(file);
    return 0;
}
