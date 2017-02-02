#include<opencv2/core/core.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
#include<conio.h>
using namespace cv;
using namespace std;
int main()
{
	VideoCapture cap(1);
	namedWindow("video", 1);
	/*This section will take image */
	
		Mat frame;
		cap >> frame;//this will get next frame kathey
		imshow("hello", frame);
		
		imwrite("snap1.png", frame); 
		waitKey(30);
		
	
}