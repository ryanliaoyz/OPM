//
// Created by Yunze Liao on 8/18/23.
//

#include <iostream>
#include "src/BlackScholes.h"

int main() {
    BlackScholes bs(100.0, 100.0, 1.0, 0.05, 0.2);
    std::cout << "Call Option Price: " << bs.callPrice() << std::endl;
    std::cout << "Put Option Price: " << bs.putPrice() << std::endl;

    return 0;
}