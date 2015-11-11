#include "stdafx.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
 
using namespace cv;
using namespace std;

    int main() 
    { 
        Mat I=imread("../cat.png"); 
        cvtColor(I,I,CV_BGR2GRAY); 
                                                     
        Mat contours; 
        Canny(I,contours,125,350); 
        threshold(contours,contours,128,255,THRESH_BINARY); 
        namedWindow("Canny"); 
        imshow("Canny",contours); 
        waitKey(); 
        return 0; 
    } 