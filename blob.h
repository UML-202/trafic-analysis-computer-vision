// Blob.h

#ifndef MY_BLOB
#define MY_BLOB

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>

///////////////////////////////////////////////////////////////////////////////////////////////////
class Blob {
public:
	// member variables ///////////////////////////////////////////////////////////////////////////
	std::vector<cv::Point> currentContour;                              // getting the coordinates in a vector

	cv::Rect currentBoundingRect;                                      // selecting region of interesr

	std::vector<cv::Point> centerPositions;                            // coordinates

	double dblCurrentDiagonalSize;                                 
	double dblCurrentAspectRatio;

	bool blnCurrentMatchFoundOrNewBlob;

	bool blnStillBeingTracked;

	int intNumOfConsecutiveFramesWithoutAMatch;

	cv::Point predictedNextPosition;
	
	
	// function prototypes ////////////////////////////////////////////////////////////////////////
	Blob(std::vector<cv::Point> _contour);
	void predictNextPosition(void);
	void show(int blobvalue);

};

#endif    // MY_BLOB

#pragma once
