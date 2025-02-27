/*
 * RPG Game in C with Dynamic Gameplay and Data Structures
 * Demonstrating linked lists, arrays, sorting techniques, and pathfinding.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Define character structure
struct Character {
    char name[50];
    int health;
    int attackPower;
    int defense;
    int experience;
    int level;
    int gold;
};

// Define linked list structure for inventory
struct InventoryItem {
    char name[50];
    int value;
    struct InventoryItem* next;
};

struct Character player;
struct InventoryItem* inventory = NULL;

// Function prototypes
void createCharacter();
void levelUp();
void addItemToInventory(const char* name, int value);
void displayInventory();
void combatScenario();
void explore();
void bubbleSortInventory();
void quest();
void saveGame();
void loadGame();
void menu();
void displayStats();
void shop();

// Function to create character
void createCharacter() {
    printf("Enter your character's name: ");
    scanf("%s", player.name);
    player.health = 100;
    player.attackPower = 15;
    player.defense = 10;
    player.experience = 0;
    player.level = 1;
    player.gold = 50;
    printf("\nCharacter %s created!\nHealth: %d, Attack Power: %d, Defense: %d, Level: %d, Gold: %d\n",
           player.name, player.health, player.attackPower, player.defense, player.level, player.gold);
}

// Function to level up character
void levelUp() {
    player.level++;
    player.health += 20;
    player.attackPower += 5;
    player.defense += 3;
    printf("\nCongratulations! %s leveled up to Level %d!\n", player.name, player.level);
    printf("New Stats - Health: %d, Attack Power: %d, Defense: %d\n", player.health, player.attackPower, player.defense);
}

// Function to add item to inventory
void addItemToInventory(const char* name, int value) {
    struct InventoryItem* newItem = (struct InventoryItem*)malloc(sizeof(struct InventoryItem));
    strcpy(newItem->name, name);
    newItem->value = value;
    newItem->next = inventory;
    inventory = newItem;
}

// Function to display inventory
void displayInventory() {
    struct InventoryItem* current = inventory;
    printf("\nYour Inventory:\n");
    if (current == NULL) {
        printf("Inventory is empty!\n");
    }
    while (current != NULL) {
        printf("Item: %s, Value: %d\n", current->name, current->value);
        current = current->next;
    }
}

// Display character stats
void displayStats() {
    printf("\nCharacter Stats:\n");
    printf("Name: %s\nHealth: %d\nAttack Power: %d\nDefense: %d\nLevel: %d\nExperience: %d\nGold: %d\n",
           player.name, player.health, player.attackPower, player.defense, player.level, player.experience, player.gold);
}

// Combat scenario function
void combatScenario() {
    struct Character enemy;
    strcpy(enemy.name, "Goblin");
    enemy.health = 40 + (rand() % 20);
    enemy.attackPower = 10 + (rand() % 5);
    enemy.defense = 5;

    printf("\nA wild %s appears! (Health: %d, Attack: %d, Defense: %d)\n",
           enemy.name, enemy.health, enemy.attackPower, enemy.defense);

    while (enemy.health > 0 && player.health > 0) {
        printf("\nChoose an action:\n1. Attack\n2. Defend\n3. Use Health Potion\n4. Flee\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int damage = player.attackPower - enemy.defense;
            if (damage < 0) damage = 0;
            enemy.health -= damage;
            printf("\nYou attacked the %s for %d damage!\n", enemy.name, damage);
        } else if (choice == 2) {
            printf("\nYou defend against the next attack, reducing damage!\n");
            enemy.attackPower /= 2;
        } else if (choice == 3) {
            printf("\nYou used a health potion and regained 20 health points!\n");
            player.health += 20;
        } else if (choice == 4) {
            printf("\nYou fled the battle!\n");
            return;
        } else {
            printf("\nInvalid choice! The enemy attacks!\n");
        }

        if (enemy.health > 0) {
            int enemyDamage = enemy.attackPower - player.defense;
            if (enemyDamage < 0) enemyDamage = 0;
            player.health -= enemyDamage;
            printf("The %s attacks you for %d damage!\n", enemy.name, enemyDamage);
        }
    }

    if (player.health > 0) {
        printf("\nYou defeated the %s!\n", enemy.name);
        player.experience += 10;
        player.gold += 20;
        if (player.experience >= 20) {
            levelUp();
            player.experience = 0;
        }
        addItemToInventory("Health Potion", 20);
        printf("You found a Health Potion!\n");
    } else {
        printf("\nYou were defeated by the %s...\n", enemy.name);
    }
}

// Exploration function with random events
void explore() {
    int event = rand() % 2;
    if (event == 0) {
        printf("\nYou explore the forest and find a hidden chest!\n");
        addItemToInventory("Magic Sword", 50);
        printf("You found a Magic Sword!\n");
    } else {
        printf("\nAn enemy ambushes you while exploring!\n");
        combatScenario();
    }
    displayInventory();
}

// Sorting inventory using bubble sort
void bubbleSortInventory() {
    struct InventoryItem *i, *j;
    int temp;
    char tempName[50];
    for (i = inventory; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->value > j->value) {
                temp = i->value;
                i->value = j->value;
                j->value = temp;
                strcpy(tempName, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, tempName);
            }
        }
    }
}

// Enhanced Quest function with stages
void quest() {
    printf("\nYou accept a quest to find the Mystic Amulet!\n");
    int stage = 1;
    char choice;
    while (stage <= 3) {
        if (stage == 1) {
            printf("\nStage 1: You reach an ancient forest.\nDo you (A) search for clues or (B) set a trap? ");
            scanf(" %c", &choice);
            if (choice == 'A' || choice == 'a') {
                printf("You find footprints leading deeper into the forest.\n");
                stage++;
            } else if (choice == 'B' || choice == 'b') {
                printf("You scare off an enemy but gain no clues.\n");
                stage++;
            } else {
                printf("Invalid choice. Try again.\n");
            }
        } else if (stage == 2) {
            printf("\nStage 2: You encounter a cave. Do you (A) enter or (B) scout around? ");
            scanf(" %c", &choice);
            if (choice == 'A' || choice == 'a') {
                printf("Inside, you battle a Cave Troll!\n");
                combatScenario();
                stage++;
            } else if (choice == 'B' || choice == 'b') {
                printf("You find a secret tunnel and proceed safely.\n");
                stage++;
            } else {
                printf("Invalid choice. Try again.\n");
            }
        } else if (stage == 3) {
            printf("\nFinal Stage: You find the Mystic Amulet!\n");
            addItemToInventory("Mystic Amulet", 100);
            printf("You completed the quest and gained the Mystic Amulet!\n");
            stage++;
        }
    }
}

// Shop function
void shop() {
    printf("\nWelcome to the shop!\n");
    printf("1. Buy Health Potion (20 gold)\n2. Buy Strength Elixir (30 gold)\n3. Exit\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1 && player.gold >= 20) {
        addItemToInventory("Health Potion", 20);
        player.gold -= 20;
        printf("\nYou bought a Health Potion!\n");
    } else if (choice == 2 && player.gold >= 30) {
        addItemToInventory("Strength Elixir", 30);
        player.gold -= 30;
        printf("\nYou bought a Strength Elixir!\n");
    } else if (choice == 3) {
        printf("\nYou left the shop.\n");
    } else {
        printf("\nNot enough gold or invalid choice!\n");
    }
}

// Save game state
void saveGame() {
    FILE *file = fopen("savegame.txt", "w");
    if (file == NULL) {
        printf("Error saving game!\n");
        return;
    }
    fprintf(file, "%s %d %d %d %d %d %d\n", player.name, player.health, player.attackPower, player.defense, player.experience, player.level, player.gold);
    fclose(file);
    printf("Game saved successfully!\n");
}

// Load game state
void loadGame() {
    FILE *file = fopen("savegame.txt", "r");
    if (file == NULL) {
        printf("No save file found!\n");
        return;
    }
    fscanf(file, "%s %d %d %d %d %d %d", player.name, &player.health, &player.attackPower, &player.defense, &player.experience, &player.level, &player.gold);
    fclose(file);
    printf("Game loaded successfully!\n");
}

// Menu for gameplay
void menu() {
    int choice;
    while (1) {
        printf("\nMain Menu:\n1. Explore\n2. Fight Enemy\n3. Display Inventory\n4. Sort Inventory\n5. Take a Quest\n6. Shop\n7. Display Stats\n8. Save Game\n9. Load Game\n10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                explore();
                break;
            case 2:
                combatScenario();
                break;
            case 3:
                displayInventory();
                break;
            case 4:
                bubbleSortInventory();
                printf("\nInventory sorted by value!\n");
                displayInventory();
                break;
            case 5:
                quest();
                break;
            case 6:
                shop();
                break;
            case 7:
                displayStats();
                break;
            case 8:
                saveGame();
                break;
            case 9:
                loadGame();
                break;
            case 10:
                printf("\nExiting game. Goodbye!\n");
                return;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}

int main() {
    srand(time(0));
    createCharacter();
    menu();
    return 0;
}
