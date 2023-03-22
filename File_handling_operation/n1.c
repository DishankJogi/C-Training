// C program to delete the file contents
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char line[100], data[100];

    // Open the file in read mode
    fp1 = fopen("file.txt", "r");
    if (fp1 == NULL) {
        printf("Unable to open the file\n");
        exit(1);
    }

    // Open a temporary file in write mode
    fp2 = fopen("temp.txt", "w");
    if (fp2 == NULL) {
        printf("Unable to create the temporary file\n");
        fclose(fp1);
        exit(1);
    }

    // Get the data to be deleted from the user
    printf("Enter the data to be deleted: ");
    fgets(data, sizeof(data), stdin);

    // Read the contents of the file line by line
    while (fgets(line, sizeof(line), fp1)) {
        // Check if the line contains the data to be deleted
        if (strstr(line, data) == NULL) {
            // If not, write the line to the temporary file
            fputs(line, fp2);
        }
    }

    // Close both the files
    fclose(fp1);
    fclose(fp2);

    // Delete the original file
    remove("file.txt");

    // Rename the temporary file to the original file
    rename("temp.txt", "file.txt");

    printf("Data deleted successfully\n");

    return 0;
}
