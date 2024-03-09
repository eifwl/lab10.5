#include <stdio.h>
#include <string.h>

//студент
struct Student {
    char surname[50];
    char name[50];
    int birth_year;
    char group[10];
    int rating;
    char gender;
};

int main() {
    int n = 2; // (тільки 2)
    struct Student students[n]; // Масив

    // данні
    for (int i = 0; i < n; i++) {
        printf("\nData about the student<3 %d:\n", i + 1);
        printf("last name<3: ");
        scanf("%s", students[i].surname);
        printf("name<3: ");
        scanf("%s", students[i].name);
        printf("Year of birth<3: ");
        scanf("%d", &students[i].birth_year);
        printf("grup<3: ");
        scanf("%s", students[i].group);
        printf("Rating<3: ");
        scanf("%d", &students[i].rating);
        printf("(M/F)<3: ");
        scanf(" %c", &students[i].gender);
    }

    // за рейтингом
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rating > students[j + 1].rating) {
                // обмін елементів
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    //  відсортовані
    printf("\nStudents sorted by rating<3:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s, Rating<3: %d\n", students[i].surname, students[i].name, students[i].rating);
    }

    return 0;
}
