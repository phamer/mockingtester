#include <testapp/library.h>

#include <iostream>

#include <SFML/Graphics.hpp>

std::size_t SfmlWrapper::GetCirclePoints(std::uint8_t red, std::uint8_t green,
                                         std::uint8_t blue, float radius) {
  sf::CircleShape circle(radius);
  circle.setFillColor(sf::Color(red, green, blue));
  return circle.getPointCount();
}
