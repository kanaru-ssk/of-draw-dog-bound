#pragma once

#include "dog.h"
#include "ofMain.h"

class ofApp : public ofBaseApp {
 public:
  void setup() override;
  void update() override;
  void draw() override;

 private:
  Dog dog;
};
