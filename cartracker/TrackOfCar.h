#include "stdafx.h"
#include "highgui.h"
#include "cv.h"
#include <iostream>
#include <math.h>
#include<opencv2\core\core.hpp>
using namespace std;
using namespace cv;
class TrackOfCar
{
public:
	TrackOfCar(void);
	~TrackOfCar(void);
	void DrawOrbit(CvPoint pt1, CvPoint pt2, Mat&img);
	void InitOrbitMat(Mat&);
	int videoCut(   IplImage* p,int i);
	void getAve( IplImage * p[],int n,IplImage * dst);
	int DisCompute(CvPoint,IplImage*,double&);
	void imageOut(Mat&,Mat&,CvPoint);
public:
	double LisenceLong,LisenceShort,MinLisence,MaxLisence,MinArea,MaxArea;
	CvFont font;
private:
	
};
