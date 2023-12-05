#include <iostream>
using namespace std;

void play_text_adventure_game() {
    int choice1, choice2, choice3;
    cout << "Welcome to the Magical Forest Adventure!\n";
    cout << "Your mission is to find the mystical crystal to save your village.\n";

    // First decision point
    cout << "You enter the forest and come to a fork in the path. Do you go Left (1) towards the dark woods or Right (2) towards the sunny glade? ";
    cin >> choice1;

    if (choice1 == 1) {
        // Second decision point for Left path
        cout << "In the dark woods, you encounter a wise owl and a lost traveler. Do you approach the Owl (1) or the Traveler (2)? ";
        cin >> choice2;

        if (choice2 == 1) {
            // Third decision point for Owl
            cout << "The Owl offers you two potions: one for bravery (1) and one for wisdom (2). Which do you choose? ";
            cin >> choice3;
            if (choice3 == 1) {
                cout << "With newfound courage, you bravely navigate the forest, overcoming obstacles and finding the crystal in a hidden cave!\n";
            } else {
                cout << "With wisdom, you decipher ancient clues and find the crystal cleverly disguised as a rock by the lake!\n";
            }
        } else {
            // Third decision point for Traveler
            cout << "The Traveler is scared and asks for your help. Do you guide him out (1) or encourage him to join your quest (2)? ";
            cin >> choice3;
            if (choice3 == 1) {
                cout << "While guiding him out, you find the crystal near the forest edge, accidentally dropped by a bird!\n";
            } else {
                cout << "Together, you and the Traveler find the crystal, cleverly hidden atop the tallest tree!\n";
            }
        }
    } else {
        // Second decision point for Right path
        cout << "In the sunny glade, you find a sparkling river and a mysterious cave. Do you follow the River (1) or explore the Cave (2)? ";
        cin >> choice2;

        if (choice2 == 1) {
            // Third decision point for River
            cout << "By the river, you meet a mermaid who offers to show you a secret underwater passage (1) or a safe path through the forest (2). Which do you choose? ";
            cin >> choice3;
            if (choice3 == 1) {
                cout << "The mermaid leads you to an underwater cave where the crystal rests, guarded by friendly fish!\n";
            } else {
                cout << "Following the safe path, you easily find the crystal, placed on a pedestal in a clearing!\n";
            }
        } else {
            // Third decision point for Cave
            cout << "Inside the cave, you find a treasure chest and a magical scroll. Do you open the Chest (1) or read the Scroll (2)? ";
            cin >> choice3;
            if (choice3 == 1) {
                cout << "The chest contains the crystal, along with other treasures!\n";
            } else {
                cout << "The scroll reveals the location of the crystal, hidden under a false bottom in the cave!\n";
            }
        }
    }

    cout << "Congratulations! You've successfully completed your quest and saved your village!\n";
}

int main() {
    play_text_adventure_game();
    return 0;
}