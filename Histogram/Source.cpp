////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "opencv2/highgui/highgui.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>
#include <fstream>

using namespace cv;
using namespace std;


int main(int argc, char** argv)
{
	Mat colorImage = imread("C:\\mel01.jpg");

	// Open the file in write mode.
	ofstream outputFile;
	outputFile.open("binary.txt");

	/*// Iterate through pixels.
	for (int r = 0; r < binaryImage.rows; r++)
	{
		for (int c = 0; c < binaryImage.cols; c++)
		{
			int pixel = binaryImage.at<uchar>(r, c);

			outputFile << pixel << '\t';
		}
		outputFile << endl;
	}*/
	for (int i = 0; i < colorImage.cols; i++) {
		for (int j = 0; j < colorImage.rows; j++) {
			Vec3b intensity = colorImage.at<Vec3b>(j, i);
			/*for (int k = 0; k < colorImage.channels(); k++) {
				uchar col = intensity.val[k];
			}*/
			outputFile << intensity << '\t';
		}
		outputFile << endl;
	}

	// Close the file.
	outputFile.close();
	return 0;
}


