//
// Created by phil on 09.03.19.
//

#include <iostream>

#include <testapp/library.h>

int main() {
  SfmlWrapper wrapper;
  std::cout << "Default number of points in an SFML circle: "
            << wrapper.GetCirclePoints(255, 0, 0, 500.0) << '\n';
}
