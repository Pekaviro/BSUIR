#pragma once

#include <iostream>

class Hygrometer {
private:
    double humidity_;
public:
    void display();

    double getHumidity() const;
};
