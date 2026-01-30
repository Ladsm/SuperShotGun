#include "File.h"
#include "Help.h"
#include "Amender.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

File file;
Amender amender;

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[1], "-i") == 0||strcmp(argv[i], "-initialize") == 0) {
            file.createFile();
        }
        else if (strcmp(argv[1], "-h") == 0||strcmp(argv[i], "-help") == 0) {
            help();
        }
        else if (strcmp(argv[1], "-h1") == 0) {
            std::string H1;
            std::getline(std::cin, H1);
            std::string h1 = "<h1>" + H1 + "</h1>";
            amender.amendAtPoint("<header>", h1);
        }
        else if (strcmp(argv[1], "-p") == 0) {
            std::string P;
            std::getline(std::cin, P);
            std::string p = "<p>" + P + "</p>";
            amender.amendAtPoint("<main>", p);
        }
        else if (strcmp(argv[1], "-img") == 0||strcmp(argv[1], "-image") == 0) {
            std::string imagepath;
            std::getline(std::cin, imagepath);
            std::string image = R"(<img src=")" + imagepath + R"(">)";
            amender.amendAtPoint("<main>", image);
        }
    }
    std::string command;
    while (true) {
        std::cout << "SSG> ";
        std::getline(std::cin, command);
        if (command == "help") {
            help();
        }
        else if(command == "initialize") {
            file.createFile();
        }
        else if (command == "h1") {
            std::string H1;
            std::getline(std::cin, H1);
            std::string h1 = "<h1>" + H1 + "</h1>";
            amender.amendAtPoint("<header>", h1);
        }
        else if (command == "paragraph") {
            std::string P;
            std::getline(std::cin, P);
            std::string p = "<p>" + P + "</p>";
            amender.amendAtPoint("<main>", p);
        }
        else if (command == "image") {
            std::string imagepath;
            std::getline(std::cin, imagepath);
            std::string image = R"(<img src=")" + imagepath + R"(">)";
            amender.amendAtPoint("<main>", image);
        }
        else if (command == "version") {
            version();
        }
        else if (command == "exit") {
            exit(0);
        }
        else if (command == "clear") {
            system("cls");
        }
        else {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 4);
            std::cout << command << " : The term " << R"(')" << command << R"(')" << "is not recognized as the name of a function.\nCheck if the spelling of the command is correct and try again.\n";
            SetConsoleTextAttribute(color, 7);
        }
    }
    return 0;
}