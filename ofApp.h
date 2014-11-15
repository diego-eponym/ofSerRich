#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    
//    Define Image variables for Grid
    int totalImages;
    int totalRows;
    int totalColumns;
    
    ofImage bottomImage;
    ofImage cell[120];
    Boolean showOrHide[120];
    
    string currentImgLoadName;
    int currentImgLoad;
    
    
    
};
