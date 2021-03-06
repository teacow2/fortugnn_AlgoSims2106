#pragma once

#include "ofMain.h"

class Particle {
public:
	Particle();

	ofVec2f pos;
	ofVec2f vel;
	ofVec2f accel;
	float mass;

	void applyForce(ofVec2f force);
	void update();
	void draw();
};

