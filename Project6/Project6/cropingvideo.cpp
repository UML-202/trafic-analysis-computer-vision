/*
*
* Author: deveshkadambari
* Working for = Umass lowell (Xie  
* Created on 24th january, 2016
* Group = devesh,sathwik
*/

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include<conio.h>
using namespace cv;
using namespace std;
int main()
{
	//double alpha = 0.5; double beta; double input;
	VideoCapture play("CarsDrivingUnderBridge.mp4");                                        //openning the video file 
	Mat frame, src1, src2, dst;                                                           //creating image type variables
	Rect r(0, 450, 520,269),r1(790, 0, 490, 240),  r3(800, 375, 480, 343),r2(0,0,570,250); //creating region of interests 
		/*cout << "enter[0-1]"<<endl;                                                      //r=left bottom rectangle of the image
	std::cin >> input;                                                                    //r2=left top rectangle of the image
	if (input >= 0.0 && input <= 1.0)													  //r3=right bottom rectangle of the image
	{																					 //r1=right top rectagle of the image
		alpha = input;																	
	}*/
	//dst=zeos
	int totalframes = play.get(CAP_PROP_FRAME_COUNT);
	while (1)
	{	play >> frame;                                                                  //getting the next frame from the video
	imshow("frame", frame);																//showing the original frame
	/*croping the required part of the image in this section*/
	frame(r2) = 0;//left top
	frame(r) = 0;//left bottom
	frame(r1) = 0;//right top'
	frame(r3) = 0;//right bottom
	/*Uptil here*/
	imshow("cropped",frame);                                            // showing the cropped image
	//src1 = frame(r);
	//imshow("hi", src1);
	//Mat delframe;
	//delframe = frame[30:200,100:200];
	
	// src2 = frame(r1);
		//imshow("trial", frame2);
		//frame = frame | frame(r1);
		//beta = (1.0 - alpha);
		//cvAdd(src1, src2, dst, NULL);

//		addWeighted(src1, alpha, src2, beta, 0.0,  dst);//cant add because they are not of same size
		//cout << "done" << endl;
		/*imshow("video", result);*/
		//waitKey(0);
		//getchar(); getchar();
		if (waitKey(30) == 'c') break;
		
	}
	getchar(); getchar();
}