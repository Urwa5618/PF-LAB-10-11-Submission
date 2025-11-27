#include <stdio.h>
#include <string.h>
struct Movie {
    char title[50];
    char genre[30];
    char director[30];
    int year;
    float rating;
};
int main() {
    struct Movie movies[100];
    int count = 0;
    int choice;
    while (1) {
        printf("\n---- MOVIE MENU ----\n");
        printf("1. Add New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\nEnter Movie Title: ");
            scanf("%s", movies[count].title);
            printf("Enter Genre: ");
            scanf("%s", movies[count].genre);
            printf("Enter Director: ");
            scanf("%s", movies[count].director);
            printf("Enter Release Year: ");
            scanf("%d", &movies[count].year);
            printf("Enter Rating (0-10): ");
            scanf("%f", &movies[count].rating);
            count++;
            printf("Movie added successfully!\n");
        }
        else if (choice == 2) {
            char searchGenre[30];
            int found = 0;
            printf("\nEnter genre to search: ");
            scanf("%s", searchGenre);
            printf("\nMovies with genre '%s':\n", searchGenre);
            for (int i = 0; i < count; i++) {
                if (strcmp(movies[i].genre, searchGenre) == 0) {
                    printf("\nTitle: %s\n", movies[i].title);
                    printf("Director: %s\n", movies[i].director);
                    printf("Year: %d\n", movies[i].year);
                    printf("Rating: %.1f\n", movies[i].rating);
                    found = 1;
                }
            }

            if (!found)
                printf("No movies found for this genre.\n");
        }
        else if (choice == 3) {
            // Display all movies
            if (count == 0) {
                printf("\nNo movies available!\n");
            } else {
                printf("\n---- ALL MOVIES ----\n");
                for (int i = 0; i < count; i++) {
                    printf("\nMovie %d:\n", i + 1);
                    printf("Title: %s\n", movies[i].title);
                    printf("Genre: %s\n", movies[i].genre);
                    printf("Director: %s\n", movies[i].director);
                    printf("Year: %d\n", movies[i].year);
                    printf("Rating: %.1f\n", movies[i].rating);
                }
            }
        }
        else if (choice == 4) {
            return 0; // Exit program
        }
        else {
            printf("\nInvalid choice! Try again.\n");
        }
    }
}
