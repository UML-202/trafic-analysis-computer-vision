
#include<opencv2\highgui\highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(void)
{
	Mat frame;
	VideoCapture cap("CarsDrivingUnderBridge.mp4");   //open the capture for video file
	int totalframe = cap.get(CV_CAP_PROP_FRAME_COUNT);
	// get total number of frames in video
	while (waitKey(30) != 27 && totalframe>0)
		//wait 30 milliseconds and check for esc key
	{
		cap >> frame; //save captured image to frame variable
		imshow("Canvas", frame); //show image on window named Camera
		totalframe--;
	}
}