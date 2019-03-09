#ifndef MOCKORFAKE_SFML_GRAPHICS_HPP
#define MOCKORFAKE_SFML_GRAPHICS_HPP

namespace sf {

class Color {
public:
  explicit Color(int, int, int) {}
};

class CircleShape {
public:
  explicit CircleShape(float radius) : radius(radius) {}

  void setFillColor(const Color&) {};

  std::size_t getPointCount() const { return radius > 100.0 ? 40 : 35; };

private:
  float radius;
};
} // namespace sf

#endif // MOCKORFAKE_SFML_GRAPHICS_HPP