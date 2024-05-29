#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetBackgroundColor(255);
  ofSetCircleResolution(64);

  const int DOG_SIZE = 200;
  dog = Dog(ofGetWidth() / 2, ofGetHeight() / 2, 3, 3, DOG_SIZE, 100);
}

//--------------------------------------------------------------
void ofApp::update() { dog.update(); }

//--------------------------------------------------------------
void ofApp::draw() { dog.draw(); }
