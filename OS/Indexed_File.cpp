#include <stdio.h>

struct Index
{
    int id;
    long position;
};

struct Record
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    FILE *file, *indexFile;
    struct Record record;
    struct Index index;

    // Open the file for writing
    file = fopen("indexed_file.dat", "wb");
    indexFile = fopen("index_file.dat", "wb");

    if (file == NULL || indexFile == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    int itemsToEnter;

    printf("Enter the number of items to enter: ");
    scanf("%d", &itemsToEnter);

    // Write records to the file and create an index
    for (int i = 1; i <= itemsToEnter; ++i)
    {
        printf("Enter data for item %d:\n", i);
        printf("ID: ");
        scanf("%d", &record.id);
        printf("Name: ");
        scanf("%s", record.name);
        printf("Salary: ");
        scanf("%f", &record.salary);

        // Write record to the data file
        fwrite(&record, sizeof(struct Record), 1, file);

        // Create an index entry
        index.id = record.id;
        index.position = ftell(file) - sizeof(struct Record);
        fwrite(&index, sizeof(struct Index), 1, indexFile);
    }

    // Close the files
    fclose(file);
    fclose(indexFile);

    printf("Data written to indexed file successfully.\n");

    // Open the file for reading and print data
    file = fopen("indexed_file.dat", "rb");

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    printf("\nData in the file:\n");
    while (fread(&record, sizeof(struct Record), 1, file) == 1)
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", record.id, record.name, record.salary);
    }

    // Close the file
    fclose(file);

    printf("\nMohit Kumar \nIT-03\n04076803121");

    return 0;
}
