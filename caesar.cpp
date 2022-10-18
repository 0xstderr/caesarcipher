#include <iostream>
#include <string>
#include <vector>


int main() {

    std::string text;

    std::cout << "Please enter what to encrypt : ";
    std::cin >> text;

    std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    std::vector<char> result;

    int shift = 3;


    for(int i = 0; i < text.size(); i++) {

        for(int j = 0; j < alphabet.size(); j++) {

            if(text[i] == alphabet[j]) {

                if(j + shift > alphabet.size() - shift){

                    result.push_back(alphabet[j -26 + shift]);

                } else {

                    result.push_back(alphabet[j + shift]);
                }
            }
        }
    }


    for(int i = 0; i < result.size(); i++) {

        std::cout << result[i];
    }

    std::cout << "\n";
    return 0;

}
