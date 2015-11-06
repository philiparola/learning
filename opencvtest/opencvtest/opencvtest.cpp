// opencvtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>


int _tmain(int argc, _TCHAR* argv[])
{
	IplImage *Image = cvLoadImage("C:\\390785_315892661766155_100000362721986_1107976_1471141614_n.jpg");
	cvNamedWindow("Testing");

	cvShowImage("Testing", Image);
	cvWaitKey(0);

	cvDestroyWindow("Testing");
	cvReleaseImage(&Image);
	return 0; 
}

