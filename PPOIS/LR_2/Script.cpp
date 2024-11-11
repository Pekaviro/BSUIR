#include "Script.h"


void Script::Write(const std::string& text) {
    content = text;
 }

void Script::Read() {
    std::cout << "Script content: " << content << std::endl;
}