#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string getFileContents(std::string path) {
    std::ifstream file(path);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void writeToFile(std::string path, std::string content) {
    std::ofstream file(path);
    if (file.is_open()) {
        file << content;
        file.close();
    } else {
        std::cout << "Unable to open file: " << path << std::endl;
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "This program takes exactly 2 arguments!" << std::endl;
        return EXIT_FAILURE;
    }

    std::string file1(argv[1]);
    std::string file2(argv[2]);

    std::string file1content = getFileContents(file1);
    writeToFile(file2, file1content);

    return EXIT_SUCCESS;
}