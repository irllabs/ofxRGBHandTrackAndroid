#include "ofMain.h"
#include "ofApp.h"

int main(){
	ofSetupOpenGL(720,540, OF_WINDOW);			// <-------- setup the GL context

	ofSetLogLevel(OF_LOG_VERBOSE);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp() );
	return 0;
}


#ifdef TARGET_ANDROID
#include <jni.h>

//========================================================================
extern "C"{
	void Java_cc_openframeworks_OFAndroid_init( JNIEnv*  env, jobject  thiz ){
		main();
	}
}
#endif
