#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countVowelsConsonants() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

void sumAndAverage() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("numbers.txt not found.\n");
        return;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found.\n");
        return;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / count);
}

void studentRecords() {
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return;
    }

    printf("How many student records to store? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) return;

    printf("\nStored Student Records:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Count Vowels and Consonants");
        printf("\n2. Sum and Average from numbers.txt");
        printf("\n3. Store and Read Student Records");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: countVowelsConsonants(); break;
            case 2: sumAndAverage(); break;
            case 3: studentRecords(); break;
            case 4: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}
