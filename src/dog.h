#pragma once

#include "ofMain.h"

class Dog {
 public:
  Dog() : x_(0), y_(0), vx_(0), vy_(0), size_(100), color_(100) {}
  Dog(int x, int y, int vx, int vy, int size, ofColor color)
      : x_(x), y_(y), vx_(vx), vy_(vy), size_(size), color_(color) {}

  void update();
  void draw() const;

 private:
  int x_, y_, vx_, vy_, size_;
  ofColor color_;
};