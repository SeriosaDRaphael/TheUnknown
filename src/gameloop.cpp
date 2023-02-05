#include <iostream>
#include "../includes/gameloop.h"
#include "../includes/credits.h"
#include "../includes/profile.h"

void gameloop(Player p) {
    std::string gl_opt;
    int gl_one = 1;
    do {
        std::cout << "Enter action: ";
        std::cin >> gl_opt;

        if(gl_opt == "quit" || gl_opt == "q") {
            gl_one -= 1;
        }
        if(gl_opt == "credits" || gl_opt == "c") {
            credits();
        }
        if(gl_opt == "profile" || gl_opt == "pr") {
            profile(p);
        }
    } while(gl_one == 1);
}