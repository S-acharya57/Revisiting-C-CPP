#include<stdio.h>


void file_io()
{
    char file_path[20] = "file_text.txt";

    FILE *file = fopen(file_path, "w");
    
    if(file==NULL)
    {
        printf("File opening failed!\n");
    }
    
    
    fprintf(file, "Hello, File I/O\n");
    fclose(file);

    file = fopen(file_path, "r");

    if(file==NULL)
    {
        printf("File opening failed!\n");
    }

    // initializing buffer to store characters read from the file
    char buffer[50];
    fgets(buffer, 50, file);

    printf("File I/O Operations:\n");
    printf("File content: %s", buffer);
    fclose(file);
    printf("\n");

}


void file_random_access()
{
    char file_path[30] = "random_sequence_file.txt";

    FILE *file = fopen(file_path, "r");
    char buffer[50];

    fgets(buffer, 50, file);

    printf("Sequential Access to File:\n");
    printf("Original File content: %s", buffer);
    fclose(file);

    file = fopen(file_path, "r+");
    if(file==NULL)
    {
        printf("File cannot be opened!\n");
    }

    // SEEK_SET: Places file pointer at the beginning of the file
    fseek(file, 7, SEEK_SET); // at 7th byte of the file

    // replacing the letters from 7th by 'world' and rest remains the same
    fprintf(file, "World");
    fclose(file);

    file = fopen(file_path, "r");

    fgets(buffer, 50, file);

    printf("\nRandom Access to File:\n");
    printf("Modified File content: %s", buffer);
    fclose(file);
    printf("\n");
}

int main()
{
    file_io();
    file_random_access();

    return 0;
}