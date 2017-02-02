#include <iostream>
#include <fstream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching.hpp"

using namespace std;
using namespace cv;

bool try_use_gpu = false; //bool type variable
vector<Mat> imgs,pano;

int main()
{
	Mat image1, image2;// , pano;
	image1 = imread("p1.jpg");
	image2 = imread("p2.jpg");
	imgs.push_back(image1);
	imgs.push_back(image2);
//	imshow("hello", imgs[0]);

//	imshow("he", imgs);
	//Stitcher Stitcher::createDefault(bool try_use_gpu = false);
	Stitcher stitcher = Stitcher::createDefault(try_use_gpu);
	stitcher.setRegistrationResol(-1); // 0.6
	stitcher.setSeamEstimationResol(-1);   // 0.1
	stitcher.setCompositingResol(-1);   //1
	stitcher.setPanoConfidenceThresh(-1);   //1
	stitcher.setWaveCorrection(true);
	stitcher.setWaveCorrectKind(cv::detail::WAVE_CORRECT_HORIZ);
	Stitcher::Status status = stitcher.stitch(imgs,pano);

	cout << status << endl;
	if (status != Stitcher::OK)
	{
		cout << "Can't stitch images, error code = " << int(status) << endl;
		return -1;
	}

	imshow("stitch",pano);

	//namedWindow("hello");
	//imshow("hello",image2;
	waitKey(0);
	getchar(); getchar();
}