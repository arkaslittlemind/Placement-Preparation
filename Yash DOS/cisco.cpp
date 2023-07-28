#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstring(const std::string& str, const std::string& sub) {
    std::string substring = sub;
    if (substring.find("#") != std::string::npos) {
        size_t pos = 0;
        while ((pos = substring.find("#", pos)) != std::string::npos) {
            substring.erase(pos, 1);
        }
    }

    std::vector<int> indexes;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str.substr(i, substring.length()) == substring) {
            indexes.push_back(i + 1);
        }
    }
    return indexes;
}

int main() {
    std::string inputString, inputSubstring;
    std::cout << "Enter the string: ";
    std::getline(std::cin, inputString);
    
    std::cout << "Enter the substring to be searched: ";
    std::getline(std::cin, inputSubstring);
    
    std::vector<int> answer = findSubstring(inputString, inputSubstring);
    for (int index : answer) {
        std::cout << index;
    }
    return 0;
}