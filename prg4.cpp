#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int iSum = 0;
	int iAvg = 0;
	int iMin = INT_MAX;
	int iMax = INT_MIN;
	int iArray[8][8] = {0};
	
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
				iArray[i][j] =  i + j;
	}
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++) {
			cout << "\t"<< iArray[i][j];	
		}
	cout << "\n";
	}
	
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++) {
			iSum += iArray[i][j];	
			iMin = ( iArray[i][j] < iMin) ? iArray[i][j] : iMin;
			iMax = ( iArray[i][j] > iMax) ? iArray[i][j] : iMin;
		}
	}
	cout<< "\nSum= "<< iSum;
	cout<< "\nAverage ("<< (sizeof(iArray)/sizeof(iArray[0][0])) <<")= "<< iSum / (sizeof(iArray)/sizeof(iArray[0][0]));
	cout<< "\nMin= "<< iMin;
	cout<< "\nMax= "<< iMax;
	return 0;
