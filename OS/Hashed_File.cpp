#include <stdio.h>

#define TABLE_SIZE 10

struct Record {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *file[TABLE_SIZE];
    struct Record record;

    // Open files for writing
    for (int i = 0; i < TABLE_SIZE; ++i) {
        char filename[20];
        sprintf(filename, "hashed_file_%d.dat", i);
        file[i] = fopen(filename, "wb");

        if (file[i] == NULL) {
            perror("Error opening file");
            return 1;
        }
    }

    int itemsToEnter;

    printf("Enter the number of items to enter: ");
    scanf("%d", &itemsToEnter);

    // Write records to the files
    for (int i = 1; i <= itemsToEnter; ++i) {
        printf("Enter data for item %d:\n", i);
        printf("ID: ");
        scanf("%d", &record.id);
        printf("Name: ");
        scanf("%s", record.name);
        printf("Salary: ");
        scanf("%f", &record.salary);

        int hashValue = record.id % TABLE_SIZE;

        // Write record to the hashed file
        fwrite(&record, sizeof(struct Record), 1, file[hashValue]);
    }

    // Close the files
    for (int i = 0; i < TABLE_SIZE; ++i) {
        fclose(file[i]);
    }

    printf("Data written to hashed files successfully.\n");

    // Open the files for reading and print data
    for (int i = 0; i < TABLE_SIZE; ++i) {
        file[i] = fopen(file[i], "rb");  // This line is incorrect and should be removed.

        if (file[i] == NULL) {
            perror("Error opening file");
            return 1;
        }

        printf("\nData in hashed file %d:\n", i);
        while (fread(&record, sizeof(struct Record), 1, file[i]) == 1) {
            printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
        }

        // Close the file
        fclose(file[i]);
    }
    printf("\nMohit Kumar \nIT-03\n04076803121");
    return 0;
}
