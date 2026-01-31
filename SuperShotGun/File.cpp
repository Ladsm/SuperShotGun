#include "File.hpp"
#include <fstream>

void File::createFile() {
    std::ofstream outFile("index.html");
    if (outFile.is_open()) {
        outFile << basefile;
        outFile.close();
        std::cout << "Successfully created index.html" << std::endl;
    }
    else {
        std::cerr << "Error: Could not create file." << std::endl;
    }
}
