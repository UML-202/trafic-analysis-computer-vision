#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>
#include<conio.h>
using namespace std;
using namespace cv;
int main()
{
	Mat storeimage , image1, result;
	/****capturing an image ***/
	VideoCapture cap(0);
	namedWindow("snap", 1);
	//namedWindow("capture", 1);
	while (1)
	{
		Mat frame;
		cap >> frame;
		
		imshow("snap",frame);
		imwrite("captured.jpg", frame);
		//image1 = imread("captured.png", CV_LOAD_IMAGE_UNCHANGED);
		//imshow("capture", image1);
		if (waitKey(30) == 'c') break;
	}
	storeimage = imread("hd.jpg", CV_LOAD_IMAGE_UNCHANGED);
	image1 = storeimage.clone();
	//image1= imread("hello.jpg", CV_LOAD_IMAGE_UNCHANGED);
	//result = storeimage + image1;
	if (!storeimage.data)  // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	cout << endl << "coloumn" << storeimage.cols << endl << "rows" << storeimage.rows << endl;
	Rect r(200, 150, 300, 100);
	storeimage = storeimage(r);
	//storeimage = Scalar(0);
	

	//cvtColor(storeimage, image1, CV_BGR2GRAY);
	//result = storeimage + image1;
	namedWindow("hello", CV_WINDOW_AUTOSIZE);
	namedWindow("original", CV_WINDOW_AUTOSIZE);
	
	imshow("hello", storeimage);
	imshow("original", image1);
	//imshow("hello", image1);
	cout << "hello" << endl;
	//imwrite("new.jpg", storeimage);
	waitKey(0);
	getchar(); getchar(); getchar(); getchar();
}