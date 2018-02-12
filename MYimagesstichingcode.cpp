#include <iostream>
#include <fstream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching.hpp"

using namespace std;
using namespace cv;

bool try_use_gpu = false; //bool type variable
vector<Mat> imgs;



int main()
{
	Mat image1, image2,image3 ,image4, pano;// , pano;
	image1 = imread("C1.jpg");
	image2 = imread("C2.jpg");
	image3 = imread("C3.jpg");
	image4 = imread("C4.jpg");
	imgs.push_back(image1);
	imgs.push_back(image2);
	imgs.push_back(image3);
	imgs.push_back(image4);
//	imshow("hello", imgs[0]);

//	imshow("he", imgs);
	//Stitcher Stitcher::createDefault(bool try_use_gpu = false);
	cout << "hello" << endl;
	Stitcher stitcher = Stitcher::createDefault(try_use_gpu);
	Stitcher::Status status = stitcher.stitch(imgs,pano);
	cout << "end" << endl;
	cout << status << endl;
	if (status != Stitcher::OK)
	{
		cout << "Can't stitch images, error code = " << int(status) << endl;
		return -1;
	}
	imshow("Result", pano);
	imwrite("R1.JPG", pano);
	//imshow("stitch",pano);

	//namedWindow("hello");
	//imshow("hello",image2;
	waitKey(0);
	getchar(); getchar();
	return(0);
}