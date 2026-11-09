#include <stdio.h>

#define MAX 100
#define NAME_LEN 50

struct Employee { int id; char name[NAME_LEN]; float salary; };

int main(void) {
    struct Employee employees[MAX];
    int n, i, target, found = -1;
    printf("Enter number of employees (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    for (i = 0; i < n; i++) {
        printf("Employee %d - ID, single-word name, salary: ", i + 1);
        if (scanf("%d %49s %f", &employees[i].id, employees[i].name, &employees[i].salary) != 3) return 1;
    }
    printf("Enter ID to search: ");
    if (scanf("%d", &target) != 1) return 1;
    for (i = 0; i < n; i++) if (employees[i].id == target) { found = i; break; }
    if (found < 0) printf("Employee not found.\n");
    else printf("ID: %d\nName: %s\nSalary: %.2f\n", employees[found].id, employees[found].name, employees[found].salary);
    return 0;
}
