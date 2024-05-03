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


void findMOM(struct player *p1, struct player *p2, int matchNum) {
    printf("Match %d:\n", matchNum + 1);
    printf("%s points: %d\n", p1->name, p1->points[matchNum]);
    printf("%s points: %d\n", p2->name, p2->points[matchNum]);

    if (p1->points[matchNum] > p2->points[matchNum]) {
        printf("MOM : %s\n\n", p1->name);
    } else if (p2->points[matchNum] > p1->points[matchNum]) {
        printf("MOM : %s\n\n", p2->name);
    } else {
        printf("Match is a tie.\n\n");
    }
}


void findMOS(struct player *players, int numPlayers) {
    int maxPoints = 0;
    char mosName[50];

    for (int i = 0; i < numPlayers; i++) {
        int totalPoints = 0;
        for (int j = 0; j < 3; j++) {
            totalPoints += players[i].points[j];
        }

        if (totalPoints > maxPoints) {
            maxPoints = totalPoints;
            strcpy(mosName, players[i].name);
        }
    }

    printf("Man of the Series: %s\n", mosName);
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

    for (int i = 0; i < 3; i++) {
        findMOM(&players[0], &players[1], i);
    }

    findMOS(players, 2);

    return 0;
}

