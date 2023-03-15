#include "PhoneNumber.h"
#include "ContactBook.h"
#include "Contact.h"
#include <iostream>
#include <string>
#include <ncurses.h>

using namespace std;


ContactBook::ContactBook() {
      contactNum = Contact::currentContact;
      cout << contactNum << endl;
      for (int i = 0; i < contactNum; i++) {
        arr[i].getInfo() ;
        cout << "------------------------------" << endl;
      }
    }

void ContactBook::getOptions() {
   const int numOptions = 3;
    int selectedOption = 0;

    // Initialize ncurses
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // Print the menu options
    printw("Please select one of the following options:\n\n");
    printw("-> Option 1\n");
    printw("   Option 2\n");
    printw("   Option 3\n");
    // printw("   Option 4\n");
    refresh();

    // Wait for user input
    while (true) {
        int c = getch();

        // Move up one option
        if (c == KEY_UP) {
            selectedOption--;
            if (selectedOption < 0) {
                selectedOption = numOptions - 1;
            }
        }

        // Move down one option
        if (c == KEY_DOWN) {
            selectedOption++;
            if (selectedOption >= numOptions) {
                selectedOption = 0;
            }
        }

        // If the user presses enter, break the loop and return the selected option
        if (c == 10) {
            cout << "You entered : " << selectedOption;
            break;
        }

        // Print the updated menu with the selected option highlighted
        clear();
        printw("Please select one of the following options:\n\n");
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                printw("-> ");
            } else {
                printw("   ");
            }
            printw("Option %d\n", i + 1);
        }
        refresh();
    }

    // Print the selected option
    clear();
    printw("You selected Option %d\n", selectedOption + 1);
    refresh();

    // Cleanup ncurses
    endwin();
}

Contact ContactBook::arr[] = {};