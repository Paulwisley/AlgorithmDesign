// AlgorithmDesignSolution.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class GreedyAlgorithm
{
public:
	int MaxCal() {
		
	
	}
	void quicksort(vector<int> &Int_Array, int low, int high) {
		if (low >= high) return;
		int left = low;
		int right = high;
		int key = Int_Array[low];
		while (Int_Array[left] < key)
		{
			left++;
		}
		while (Int_Array[right] > key)
		{
			right--;
		}
	}
private:

};

int main()
{
    return 0;
}

