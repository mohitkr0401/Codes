#include <stdio.h>

struct Record {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *file;
    struct Record record;

    // Open the file for writing
    file = fopen("sequential_file.dat", "wb");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int itemsToEnter;

    printf("Enter the number of items to enter: ");
    scanf("%d", &itemsToEnter);

    // Write records to the file
    for (int i = 1; i <= itemsToEnter; ++i) {
        printf("Enter data for item %d:\n", i);
        printf("ID: ");
        scanf("%d", &record.id);
        printf("Name: ");
        scanf("%s", record.name);
        printf("Salary: ");
        scanf("%f", &record.salary);

        fwrite(&record, sizeof(struct Record), 1, file);
    }

    // Close the file
    fclose(file);

    printf("Data written to sequential file successfully.\n");

    // Open the file for reading and print data
    file = fopen("sequential_file.dat", "rb");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("\nData in the file:\n");
    while (fread(&record, sizeof(struct Record), 1, file) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
    }

    // Close the file
    fclose(file);

    return 0;
}
