#include <stdio.h>

struct player {
    char name[50];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];
};

void calculatePoints(struct player *p) {
    for (int i = 0; i < 3; i++) {
        p->points[i] = p->wickets[i] * 12;

        if (p->runs[i] <= 25) {
            p->points[i] += 5;
        } else if (p->runs[i] > 25 && p->runs[i] <= 50) {
            p->points[i] += 10;
        } else if (p->runs[i] > 50 && p->runs[i] <= 75) {
            p->points[i] += 15;
        } else if (p->runs[i] > 75) {
            p->points[i] += 20;
        }
    }
}

int main() {

    struct player players[2];


    for (int i = 0; i < 2; i++) {
        printf("Enter details for Player %d:\n", i + 1);

        printf("Enter player's name: ");
        scanf(" %[^\n]", players[i].name);

        printf("Enter player's country: ");
        scanf(" %[^\n]", players[i].country);

        printf("Enter runs for three matches (space-separated): ");
        scanf("%d %d %d", &players[i].runs[0], &players[i].runs[1], &players[i].runs[2]);

        printf("Enter wickets for three matches (space-separated): ");
        scanf("%d %d %d", &players[i].wickets[0], &players[i].wickets[1], &players[i].wickets[2]);

        printf("\n");
    }


    for (int i = 0; i < 2; i++) {
        calculatePoints(&players[i]);
    }


    for (int i = 0; i < 2; i++) {
        printf("Details for Player %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Country: %s\n", players[i].country);
        printf("Runs: %d %d %d\n", players[i].runs[0], players[i].runs[1], players[i].runs[2]);
        printf("Wickets: %d %d %d\n", players[i].wickets[0], players[i].wickets[1], players[i].wickets[2]);
        printf("Points: %d %d %d\n", players[i].points[0], players[i].points[1], players[i].points[2]);
        printf("\n");
    }

    return 0;
}

