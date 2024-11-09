#include "Sound.h"

Sound::Sound(const std::string& type) : type(type) {}

void Sound::play() {
    std::cout << "Playing sound: " << type << std::endl;
}