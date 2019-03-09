#ifndef MOCKINGTESTER_LIBRARY_H
#define MOCKINGTESTER_LIBRARY_H

#include <cstdint>

class SfmlWrapper
{
  public:
    std::size_t GetCirclePoints(std::uint8_t red, std::uint8_t green, std::uint8_t blue, float radius);
};

#endif