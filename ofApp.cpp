#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    bottomImage.loadImage("images/BottomLayer-01.jpg");
    
//    How many images do we have total?
    totalImages = 120;
    
//    How many columns?
    totalColumns = 12;
//    How many rows?
    totalRows = 10;
    
//    Set up Image Grid
    
    for (int i = 0; i < totalImages; i++) {
        
        currentImgLoadName = "images/PostcardsFINAL_1-" + ofToString(i +1) +".jpg";
        
        cell[i].loadImage(currentImgLoadName);
        
        cout << "Loaded: " + currentImgLoadName << endl;
        
        showOrHide[i] = true;
        cout << "Set to show"<< endl;
    }
    
    ofSetWindowShape(1080, 1920);
    ofSetFullscreen(true);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofBackground(255);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    bottomImage.draw(0, 0);
    
    for (int r=0; r < totalRows; r++) {
        
        for (int i = 0; i < totalColumns; i++) {
            
//      Define Grid displace
            int pushY = r*cell[i].height;
            int pushX = i*cell[i].width;
        
//      Define Current img number
            int currentImgNumber = r*totalColumns + i;
        
            if (showOrHide[currentImgNumber]) {
                //      Draw the image
                cell[currentImgNumber].draw(pushX, pushY);

            }
            
        }
    }

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'c'){
        
        showOrHide[39] = !showOrHide[39];
        
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
