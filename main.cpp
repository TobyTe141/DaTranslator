//---------------------------[Included Libraries]---------------------------
#include <iostream>
#include <string>
#include <algorithm>

//---------------------------[Variables]---------------------------
bool a = true;
bool b = true;
int option_input; 
std::string output; 
std::string input_text;
std::string replace0 = " ";
std::string replace1 = "da";
std::string output_text; 

//---------------------------[Functions]---------------------------
int options() {
    while (true) {
        std::cout << "What would you like to do?\n";
        std::cout << "Options:\n1. Translate From English to DaLanguage\n2. Translate From DaLanguage to English\n3. Quit\n";
        std::cin >> option_input;
        if (option_input == 1) {
            std::cin.ignore();
            std::cout << "What is the text you would like to translate?\n";
            std::getline(std::cin, input_text);
            char target = ' ';
            std::string replacement = "Da";
            for (size_t i = 0; i < input_text.length(); ++i) {
                if (input_text[i] == target) {
                    input_text.replace(i, 1, replacement);
                    i += replacement.length() - 1;
                }
            }
            std::cout << "\nTranslated text: " << "Da" << input_text << "\n"<< std::endl;
            output_text = input_text;
        } else if (option_input == 2) {
            std::cin.ignore();
            std::cout << "What is the text you would like to translate back?\n";
            std::getline(std::cin, input_text);
            std::string target = "Da";
            char replacement = ' ';
            size_t pos = 0;
            while ((pos = input_text.find(target, pos)) != std::string::npos) {
                input_text.replace(pos, target.length(), std::string(1, replacement));
                pos += 1;
            }
            std::cout << "\nTranslated text: " << input_text << "\n" << std::endl;
            output_text = input_text;
        } else if (option_input == 3) {
            std::cout << "Exiting the program. Goodbye!\n";
            exit(0);
        } else {
            std::cout << "Your input was invalid. Please select 1, 2, or 3.\nExample: 2\n";
        }
    }
    return 0;
}

//---------------------------[Main]---------------------------
int main() {
    options();
    return 0;
}
