#include "TwoSum.h"
#include <iostream>
using namespace std;
TwoSum::TwoSum() {

}


vector<int> TwoSum::twoSum(vector<int>& nums, int target) {

	vector<int> temp;

	for (int i = 0; i < nums.size(); ++i) {
		int current = nums.at(i);
		for (int j = i + 1; j < nums.size(); ++j) {
			if (current + nums.at(j) == target) {
				temp.push_back(i);
				temp.push_back(j);
				return temp;
			}
		}
	}
	return temp;
	
}



int main() {

	vector<int> vect{ 2,5,5,11 };
	int target = 10;
	TwoSum test;

	vector<int> output =  test.twoSum(vect, target);

	for (auto i : output) {
		cout << i << " ";
	}

	return 0;
}