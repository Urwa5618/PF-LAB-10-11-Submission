#include <stdio.h>
#include <string.h>
struct Player {
    char name[30];
    int age;
    char position[20];
};
struct Team {
    char teamName[30];
    char sport[20];
    struct Player players[50];
    int playerCount;
};
void addPlayer(struct Team *t) {
    printf("\nEnter Player Name: ");
    scanf("%s", t->players[t->playerCount].name);

    printf("Enter Age: ");
    scanf("%d", &t->players[t->playerCount].age);

    printf("Enter Position: ");
    scanf("%s", t->players[t->playerCount].position);
    t->playerCount++;
    printf("Player added successfully!\n");
}
void searchByPosition(struct Team t) {
    char pos[20];
    int found = 0;

    printf("\nEnter position to search: ");
    scanf("%s", pos);

    printf("\nPlayers with position '%s':\n", pos);
    for (int i = 0; i < t.playerCount; i++) {
        if (strcmp(t.players[i].position, pos) == 0) {
            printf("\nName: %s\n", t.players[i].name);
            printf("Age: %d\n", t.players[i].age);
            found = 1;
        }
    }

    if (!found)
        printf("No players found with this position.\n");
}

// Function to display team and players
void displayTeam(struct Team t) {
    printf("\n---- TEAM DETAILS ----\n");
    printf("Team Name: %s\n", t.teamName);
    printf("Sport     : %s\n", t.sport);
    printf("Total Players: %d\n", t.playerCount);

    if (t.playerCount == 0) {
        printf("No players added.\n");
        return;
    }

    printf("\n---- Players ----\n");
    for (int i = 0; i < t.playerCount; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", t.players[i].name);
        printf("Age: %d\n", t.players[i].age);
        printf("Position: %s\n", t.players[i].position);
    }
}

int main() {
    struct Team myTeam;
    myTeam.playerCount = 0;

    printf("Enter Team Name: ");
    scanf("%s", myTeam.teamName);

    printf("Enter Sport: ");
    scanf("%s", myTeam.sport);

    int choice;

    while (1) {
        printf("\n1. Add Player\n2. Search Player by Position\n3. Display Team Details\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlayer(&myTeam);
                break;

            case 2:
                searchByPosition(myTeam);
                break;

            case 3:
                displayTeam(myTeam);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
