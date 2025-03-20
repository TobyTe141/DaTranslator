//---------------------------[Included Libarys]---------------------------
#include <iostream>
#include <string>
#include <algorithm>

//---------------------------[Varibles]---------------------------
bool a = true;
bool b = true;
int option_input; 
std::string output; 
std::string input_text;
std::string replace0 = " ";
std::string replace1 = "da";
std::string output_text; 
//---------------------------[Functions]---------------------------
std::string options(){
    while (b == true){
        std::cout <<"Options:\n1.Translate From English to DaLanguage\n2. Translate From DaLanguage to English\n3. Quit\n";
        std::cin >> option_input;
        if (option_input == 1){
            std::cout << "What is the text you would like to tranlate\n";
            std::string input_text;
            std::cin >> input_text;
            char target = ' ';      // Character to replace
            char replacement = 'Da'; // Replacement character
            std::replace(input_text.begin(), input_text.end(), target, replacement);
            output_text = input_text;
        }
        else if (option_input == 2){
            std::cout << "What is the text you would like to tranlate\n";
            std::cin >> input_text;
            char target = 'Da';      // Character to replace
            char replacement = ' '; // Replacement character
            std::replace(input_text.begin(), input_text.end(), target, replacement);
            output_text = input_text;
        }
        else if (option_input == 3){
            exit(0);
        }
        else{
            std::cout << "Your Input was invalid pleas select 1, 2 or 3\nExample: 2";
        }
    }
    return(output_text);
}
//---------------------------[Main Code]---------------------------
int main(){
    while (a == true){
        std::cout << "what would you like to do";
        options();
    }
}