#include <stdio.h>

#define FILE_NAME "product.txt"

struct Product { int id, quantity; float price; };

void write_records(void) {
    FILE *file = fopen(FILE_NAME, "w");
    struct Product p;
    int count, i;
    if (!file) { perror("Cannot open file"); return; }
    printf("How many products? ");
    if (scanf("%d", &count) != 1 || count < 1) { fclose(file); return; }
    for (i = 0; i < count; i++) {
        printf("ID price quantity: ");
        if (scanf("%d %f %d", &p.id, &p.price, &p.quantity) != 3) break;
        fprintf(file, "%d %.2f %d\n", p.id, p.price, p.quantity);
    }
    fclose(file);
}

void read_records(void) {
    FILE *file = fopen(FILE_NAME, "r");
    struct Product p;
    if (!file) { printf("No product file exists yet.\n"); return; }
    printf("ID\tPrice\tQuantity\n");
    while (fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) == 3)
        printf("%d\t%.2f\t%d\n", p.id, p.price, p.quantity);
    fclose(file);
}

void append_record(void) {
    FILE *file = fopen(FILE_NAME, "a");
    struct Product p;
    if (!file) { perror("Cannot open file"); return; }
    printf("ID price quantity: ");
    if (scanf("%d %f %d", &p.id, &p.price, &p.quantity) == 3)
        fprintf(file, "%d %.2f %d\n", p.id, p.price, p.quantity);
    fclose(file);
}

void search_record(void) {
    FILE *file = fopen(FILE_NAME, "r");
    struct Product p;
    int id, found = 0;
    if (!file) { printf("No product file exists yet.\n"); return; }
    printf("Enter product ID: ");
    if (scanf("%d", &id) != 1) { fclose(file); return; }
    while (fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) == 3)
        if (p.id == id) { printf("ID: %d, Price: %.2f, Quantity: %d\n", p.id, p.price, p.quantity); found = 1; break; }
    if (!found) printf("Product not found.\n");
    fclose(file);
}

int main(void) {
    int choice;
    do {
        printf("\n1.Write 2.Read 3.Append 4.Search 5.Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) return 1;
        switch (choice) {
            case 1: write_records(); break;
            case 2: read_records(); break;
            case 3: append_record(); break;
            case 4: search_record(); break;
            case 5: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
