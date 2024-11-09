#include "Script.h"


void Script::write(const std::string& text) {
    content = text;
 }

void Script::read() {
    std::cout << "Script content: " << content << std::endl;
}