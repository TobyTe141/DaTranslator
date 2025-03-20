//---------------------------[Included Libarys]---------------------------
#include <iostream>

//---------------------------[Varibles]---------------------------
bool a = true;
bool b = true;
int option_input; 
//---------------------------[Functions]---------------------------
std::string options(){
    while (b == true){
        std::cout <<"Options:\n1.Translate to DaLanguage\n2. Translate to English\n3. Quit";
        std::cin >> option_input;
        if (option_input == 1){
            std::cout << "";
        }
        else if (option_input == 2){

        }
        else if (option_input == 3){


        }
        else{
            std::cout << "The value input ";
        }
    }
    return("");
}
std::string encode(){

    return(" ");
}
std::string decode(){

    return(" ");
}


//---------------------------[Main Code]---------------------------
int main(){
    while (a == true){
        std::cout << "what would you like to do";
        options();
    }
}