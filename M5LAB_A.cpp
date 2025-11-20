// CSC 134
// M5LAB_A
// Yasameen Al-Husseini
// Character Systems Part 1

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
void exercise1_healthRegen();
void exercise2_levelUpStats();
void exercise3_inventorySystem();

int main() {
    int choice;
    
    cout << "==================================" << endl;
    cout << " LAB 7: LOOP FUNDAMENTALS " << endl;
    cout << "==================================" << endl;
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level Up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit" << endl;
    cout << "==================================" << endl;
    cout << "Choice: ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            exercise1_healthRegen();
            break;
        case 2:
            exercise2_levelUpStats();
            break;
        case 3:
            exercise3_inventorySystem();
            break;
        case 4:
            exercise1_healthRegen();
            cout << endl;
            exercise2_levelUpStats();
            cout << endl;
            exercise3_inventorySystem();
            break;
        case 5:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}

/*
EXERCISE 1: HEALTH REGENERATION (30 points)
CONCEPT: while loop - repeat until condition changes
REQUIREMENTS:
1. Start with health = 30, maxHealth = 100
2. Use a while loop to regenerate health by 10 each iteration
3. Display current health after each regeneration
4. Display a "Fully Recovered!" message when done
5. Add a visual health bar using characters (optional bonus)

SAMPLE OUTPUT:
Resting to recover health...
Health: 40/100 [████░░░░░░]
Health: 50/100 [█████░░░░░]
Health: 60/100 [██████░░░░]
Health: 70/100 [███████░░░]
Health: 80/100 [████████░░]
Health: 90/100 [█████████░]
Health: 100/100 [██████████]
Fully recovered!
================================================================================ */
void exercise1_healthRegen() {
    cout << "\n=== EXERCISE 1: HEALTH REGENERATION ===" << endl;
    
    int health = 30;
    int maxHealth = 100;
    
    cout << "Starting health: " << health << "/" << maxHealth << endl;
    cout << "Resting to recover health..." << endl << endl;
    
    // While loop to regenerate health
    while (health < maxHealth)
    {
        health = health + 10;
        
        // Display current health with visual health bar
        cout << "Health: " << health << "/" << maxHealth << " [";
        
        // Draw health bar (10 segments for 100 max health)
        int filledSegments = health / 10;
        for (int i = 0; i < 10; i++)
        {
            if (i < filledSegments)
                cout << "█";
            else
                cout << "░";
        }
        cout << "]" << endl;
    }
    
    cout << "\nFully recovered!" << endl;
}

/*
EXERCISE 2: LEVEL UP STATS (35 points)
CONCEPT: for loop - count through a sequence
REQUIREMENTS:
1. Display how character stats increase from level 1 to level 10
2. Use a for loop to iterate through levels
3. Calculate each stat based on level (formulas provided)
4. Display in a formatted table
5. Show total stat growth at the end

FORMULAS:
- Strength = baseStrength (10) + (level * 2)
- Dexterity = baseDexterity (8) + (level * 3)
- Intelligence = baseIntelligence (12) + (level * 1)

SAMPLE OUTPUT:
=== CHARACTER STAT GROWTH ===
Level | STR | DEX | INT
------|-------|-------|-------
1 | 12 | 11 | 13
2 | 14 | 14 | 14
3 | 16 | 17 | 15
...
10 | 30 | 38 | 22
==============================
Total Growth: STR +20, DEX +30, INT +10
================================================================================ */
void exercise2_levelUpStats() {
    cout << "\n=== EXERCISE 2: LEVEL UP STATS ===" << endl;
    
    // Base stats at level 0
    const int BASE_STR = 10;
    const int BASE_DEX = 8;
    const int BASE_INT = 12;
    
    // Display table header
    cout << "Level | STR | DEX | INT" << endl;
    cout << "------|-------|-------|-------" << endl;
    
    // Variables to track stats at level 1 and level 10
    int str1 = 0, dex1 = 0, int1 = 0;
    int str10 = 0, dex10 = 0, int10 = 0;
    
    // For loop to calculate and display stats for each level
    for (int level = 1; level <= 10; level++)
    {
        // Calculate current stats based on level
        int currentStr = BASE_STR + (level * 2);
        int currentDex = BASE_DEX + (level * 3);
        int currentInt = BASE_INT + (level * 1);
        
        // Track stats at level 1
        if (level == 1)
        {
            str1 = currentStr;
            dex1 = currentDex;
            int1 = currentInt;
        }
        
        // Track stats at level 10
        if (level == 10)
        {
            str10 = currentStr;
            dex10 = currentDex;
            int10 = currentInt;
        }
        
        // Display formatted row
        cout << left << setw(6) << level << "| "
             << setw(3) << currentStr << "| "
             << setw(3) << currentDex << "| "
             << currentInt << endl;
    }
    
    cout << "==============================" << endl;
    
    // Calculate and display total growth (Level 10 stats - Level 1 stats)
    int strGrowth = str10 - str1;
    int dexGrowth = dex10 - dex1;
    int intGrowth = int10 - int1;
    
    cout << "Total Growth: STR +" << strGrowth 
         << ", DEX +" << dexGrowth 
         << ", INT +" << intGrowth << endl;
}

/*
EXERCISE 3: INVENTORY SYSTEM (35 points)
CONCEPT: arrays + loops - managing collections
REQUIREMENTS:
1. Create an array of 5 equipment items
2. Display all items in a numbered list
3. Ask user to search for an item by name
4. Use a loop to search through the array
5. Display whether item was found and at what position
6. Handle case-insensitive search (optional bonus)

SAMPLE OUTPUT:
=== YOUR INVENTORY ===
1. Iron Sword
2. Leather Armor
3. Health Potion
4. Magic Ring
5. Rope
======================
Enter item to search for: Health Potion
Found "Health Potion" in slot 3!
Enter item to search for: Diamond
"Diamond" not found in inventory.
================================================================================ */
void exercise3_inventorySystem() {
    cout << "\n=== EXERCISE 3: INVENTORY SYSTEM ===" << endl;
    
    // Create equipment array with 5 items
    string equipment[5] = {
        "Iron Sword",
        "Leather Armor",
        "Health Potion",
        "Magic Ring",
        "Rope"
    };
    
    // Display all items using a for loop
    cout << "=== YOUR INVENTORY ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << (i + 1) << ". " << equipment[i] << endl;
    }
    cout << "======================" << endl << endl;
    
    // Get search term from user
    string searchTerm;
    cout << "Enter item to search for: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, searchTerm);
    
    // Search for the item using a loop
    bool found = false;
    int position = -1;
    
    for (int i = 0; i < 5; i++)
    {
        if (equipment[i] == searchTerm)
        {
            found = true;
            position = i;
            break; // Stop searching once found
        }
    }
    
    // Display search results
    if (found)
    {
        cout << "Found \"" << searchTerm << "\" in slot " 
             << (position + 1) << "!" << endl;
    }
    else
    {
        cout << "\"" << searchTerm << "\" not found in inventory." << endl;
    }
}

/*
TESTING CHECKLIST:
Exercise 1:
[✓] Health starts at 30
[✓] Health increases by 10 each loop
[✓] Loop stops at exactly 100
[✓] "Fully recovered!" message displays
[✓] No infinite loop!

Exercise 2:
[✓] Stats calculate correctly for each level
[✓] Table is formatted and readable
[✓] All 10 levels display
[✓] Total growth is calculated correctly

Exercise 3:
[✓] All 5 items display with numbers
[✓] Search finds items that exist
[✓] Search correctly reports items not found
[✓] Position number is correct (1-5, not 0-4)
[✓] Program doesn't crash on any input
*/


