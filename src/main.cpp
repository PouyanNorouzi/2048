#include "game.hpp"

#include <cctype>
#include <iostream>

int main() {
    std::string input = "";

    std::cout << "Welcome to Pouyan's version of the little known game 2048\n";

    bool keepMainLoopGoing = true;
    while(keepMainLoopGoing) {
        // instead of prompting have it check every time a button is pressed
        std::cout << "Press 1 to start game, Press 2 or q to quit. (I only read "
                     "the first letter you type bro also just lowercase)\n";
        std::cin >> input;

        if(input[0] == '1') {
            std::cout << "Game starting now!\n";

            Game game{};
            bool keepGameLoopGoing = true;
            while(keepGameLoopGoing && game.status == ONGOING) {
                Direction direction = NONE;

                std::cout << "What is your move? (u d l r) q to quit\n";
                std::cin >> input;

                switch(tolower(input[0])) {
                case 'u': direction = UP; break;
                case 'd': direction = DOWN; break;
                case 'l': direction = LEFT; break;
                case 'r': direction = RIGHT; break;
                case 'q': keepGameLoopGoing = false; break;
                default:  std::cout << "I do not know what you just said bro try again\n";
                }

                if(direction != NONE) game.move(direction);
            }
        } else if(input[0] == '2' || input[0] == 'q') {
            keepMainLoopGoing = false;
        } else {
            std::cout << "I do not know what you just said bro so I am going to ask "
                         "you the same thing again.\n";
        }
    }

    return 0;
}
