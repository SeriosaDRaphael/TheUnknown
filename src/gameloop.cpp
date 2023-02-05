#include <iostream>
#include "../includes/gameloop.h"
#include "../includes/credits.h"
#include "../includes/profile.h"
#include "../includes/commands.h"

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
        if(gl_opt == "clear") {
            std::system("clear");
        }
        if(gl_opt == "cmd") {
            commands();
        }
    } while(gl_one == 1);
}