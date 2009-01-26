#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){	 
	counter = 0;
	vagRounded.loadFont("vag.ttf", 32);
	ofBackground(50,50,50);	
}


//--------------------------------------------------------------
void testApp::update(){
	counter = counter + 0.033f;
}

//--------------------------------------------------------------
void testApp::draw(){
	
	sprintf (timeString, "time: %0.2i:%0.2i:%0.2i \nelapsed time %i", ofGetHours(), ofGetMinutes(), ofGetSeconds(), ofGetElapsedTimeMillis());
	
	float w = vagRounded.stringWidth(eventString);
	float h = vagRounded.stringHeight(eventString);
	
	ofSetColor(0xffffff);
	vagRounded.drawString(eventString, 98,198);
	
	ofSetColor(255,122,220);
	vagRounded.drawString(eventString, 100,200);
	
	
	ofSetColor(0xffffff);
	vagRounded.drawString(timeString, 98,98);
	
	ofSetColor(255,122,220);
	vagRounded.drawString(timeString, 100,100);
	
}


//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
	sprintf(eventString, "keyPressed = (%i)", key);
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){ 
	sprintf(eventString, "keyReleased = (%i)", key);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	sprintf(eventString, "mouseMoved = (%i,%i)", x, y);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	sprintf(eventString, "mouseDragged = (%i,%i - button %i)", x, y, button);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	sprintf(eventString, "mousePressed = (%i,%i - button %i)", x, y, button);

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	sprintf(eventString, "mouseReleased = (%i,%i - button %i)", x, y, button);

}
