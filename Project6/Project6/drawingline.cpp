#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<>
#include<iostream>
#include<conio.h>
using namespace cv;
using namespace std;
int main()
{
	Mat rolla,image;
	rolla = Mat::zeros(400, 400, CV_8UC3);
	imshow("zeros", rolla);
	rolla = imread("hd.jpg", CV_LOAD_IMAGE_UNCHANGED);
	imshow("photo", rolla);
	/*image = Mat::zeros(400, 400, CV_8UC3);
	cout << endl << "columns" << rolla.cols << endl << "rows" << rolla.rows << endl;
	namedWindow("rectangle", 1);
	line(rolla, Point(15, 20), Point(70, 50), Scalar(200, 0, 200), 10, 0);
	imshow("rectangle", rolla);
	namedWindow("compare", 1);
	line(image, Point(15, 20), Point(70, 50), Scalar(200, 0, 200), 10, 10000);
	imshow("compare", image);*/
	waitKey(0);
	return(0);
}