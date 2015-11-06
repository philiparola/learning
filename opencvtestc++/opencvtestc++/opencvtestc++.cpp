// opencvtestc++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include <iostream>
#include <string>

const std::string FILE_NAME = "C:\\Capture.jpg";
const std::string WINDOW_NAME = "TEST";

int _tmain(int argc, _TCHAR* argv[])
{
	cv::Mat Image = cv::imread(FILE_NAME);
	cv::namedWindow(WINDOW_NAME);
	cv::imshow(WINDOW_NAME,Image);
	cv::waitKey(0);

	cv::destroyWindow(WINDOW_NAME);
	return 0;
}

