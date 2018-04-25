#include <iostream>
#include "circullar_list.h"
#include "roulette.h"

int main() {
    srand(time(nullptr));
    Roulette r;
    r.spin();
    std::cout<<r.getColor();
    std::cout<<r.getValue();

    return 0;
}