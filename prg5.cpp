#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int iSize = 0;
	cout << "Размер массива: "; cin >> iSize;
	
	int** iArray = new int *[iSize];
	for(int i = 0; i < iSize; i++) { iArray[i] = new int[i];}
	int* iHorzSum  = new int[iSize];
	int* iVertSum  = new int[iSize];
	int  iTotalSum = 0;
	int  iSum = 0;
	
	for (int i = 0; i < iSize; i++)
		for (int j = 0; j < iSize; j++) {
				iArray[i][j] =  i + j;
	}
	
	for (int i = 0; i < iSize; i++){
		for (int j = 0; j < iSize; j++) {
			iHorzSum[i] += iArray[i][j];	
		}
	}
	
	for (int j = 0; j < iSize; j++){
		for (int i = 0; i < iSize; i++) {
			iVertSum[j] += iArray[i][j];	
		}
	}
	
	for (int i = 0; i < iSize;i++) {iTotalSum += (iVertSum[i] + iHorzSum[i]);}
	
	for (int i = 0; i < iSize; i++) {
		cout << "\n";
		for (int j = 0; j < iSize; j++) {
			cout << "\t"<< iArray[i][j];
		}
		cout << "\t|\t"<< iHorzSum[i];
	}
	cout << "\n-----------------------------------";
	cout << "\n";
	for (int i = 0; i < iSize; i++)	{
			cout << "\t"<< iVertSum[i];
	}
	cout << "\t|\t"<< iTotalSum;
	return 0;
}
