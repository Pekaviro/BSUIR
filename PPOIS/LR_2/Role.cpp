#include "Role.h"

Role::Role(const std::string& characterName, Actor* actor) : characterName_(characterName), actor_(actor) {}

void Role::Perform() {
    std::cout << actor_->GetLastName() << " " << actor_->GetFirstName() << " is playing the role of " << characterName_ << std::endl;
}