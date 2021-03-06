// AlgorithmDesignSolution.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
#define MAX 8

class SortSolution
{
public:
	//QuickSort
	void quickSort(pair<int ,int> p[MAX], int left, int right) {
		if (left >= right) return;
		int mid = partion(p, left, right);
		quickSort(p, left, mid - 1);
		quickSort(p, mid + 1, right);
	}

	int partion(pair<int, int> p[MAX], int left, int right) {
		pair<int, int> &tmp = p[left];
		while (left < right) {
			while (left < right && p[right].first >= tmp.first)
				--right;
			while (left < right && p[left].first <= tmp.first)
				++left;
			swap(p[left], p[right]);
		}
		swap(tmp,p[left]);
		return left;
	}

private:

};

class SearchSolution {
public:
	int midpartSearch(vector<int> _arr, int aim){
		int left = 0;
		int right = _arr.size();
		int mid = (right - left) / 2 + left;
		while (left<right)
		{
		}
	}
};

class GreedyAlgorithm
{
public:
	/*
	Internal Schedule
	*/
	int MaxCal(pair<int, int> p[MAX]) {
		int count = 1;
		if (MAX == 0) return 0;
		int loc = p[MAX - 1].first;
		for (int i=MAX-2; i>= 0; i--) {
			if (p[i].second <= loc) {
				loc = p[i].first;
				count++;
			}
			else
				continue;
		}
		return count;
	}

	/*
	Coin changing
	Given currency denominations: 1, 5, 10, 25, 100, devise a method to pay amount to customer using fewest number of coins.
	此问题乍一看可以用贪心解决，如：denomination ={ 1,5,10,25,100 }；EX = 34 ;
	而如果denomination = { 1,10,21,34,70,100,350,1225,1500 };Ex = 140 时，很明显贪心并不能得到最优解，
	对于这种问题，还是使用DP来求解最为妥当
	*/
	int fewestCoin(int change, vector<int>denomination) {
		int sum = 0;
		for (int i = denomination.size()-1; i >= 0; i--) {
			if (change >= denomination[i]) {
				sum += (change / denomination[i]);
				change %= denomination[i];
			}
			else
				continue;
		}
		return sum;
	}

private:

};

class DynamicProcess
{
public:
	/*
	Weighted Interval Scheduling
	*/


private:

};

class DevideNConquer {

};

int main()
{
/*	vector<int>start_time(MAX, 0);
	vector<int>end_time(MAX, 0);
	pair<int, int>p[MAX];
	for (int i = 0; i < MAX; i++) {
		cin >> start_time[i];
		cin >> end_time[i];
		p[i] = make_pair(start_time[i], end_time[i]);
	}
	SortSolution sort;
	GreedyAlgorithm greed;
	sort.quickSort(p,0,7);
	for (auto x : p) {
		cout << x.first << " " << x.second << endl;
	}
	int m = greed.MaxCal(p);
	cout << m << endl;
	cin.get();
	cin.get();
	*/
	int a[] = { 1,10,21,34,70,100,350,1225,1500 };
	vector<int> array(a,a+9);
	GreedyAlgorithm gre;
	int m = gre.fewestCoin(140,array);
	cout << m << endl;
	cin.get();
	return 0;
}

