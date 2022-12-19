#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

// sort elements in vector
/*
bool comparator(string &a, string &b){
	// longest string first
  	return a.length() > b.length();
}
*/
void backwards(vector<string> &strVec){
	//  reverse each string in vector
	for(int i = 0; i < strVec.size() ;i++) {
        reverse(strVec[i].begin(), strVec[i].end());
    }
    sort(strVec.begin(), strVec.end(), greater<string>());
}
int main() {
	vector<string> strVec;
	string userInput;
	string stopCommand ("stop");

	while(true){
		cout << "Enter a string "<<": ";
		getline (cin, userInput);
		if(userInput==stopCommand){
			break;
		}else{
			strVec.push_back(userInput);
		}
	}
	// sort vector and reverse each element
	backwards(strVec);
	
	// display vector
	for(int i = 0; i < strVec.size() ;i++) {
        cout << strVec[i] << '\n';
    }
}