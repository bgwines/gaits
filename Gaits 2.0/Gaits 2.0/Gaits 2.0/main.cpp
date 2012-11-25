//
//  main.cpp
//  Gaits 2.0
//
//  Created by Brett Wines on 11/25/12.
//  Copyright (c) 2012 Brett Wines. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <time.h>
using namespace std;
using namespace std;

void PrintEachPaw(const vector<string> &v)
{
	cout << "In the order of FL, FR, BL, BR:\n";
	copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
}

void PrintEachBeat(const vector<string> &v)
{
	cout << endl;
	for (size_t i=0; i<8; i++)
    {
		for (size_t j=0; j<4; j++)
        {
			if (j == 2)
				cout << endl;
			cout << v[j][i];
		}
		cout << "\n\n";
	}
}

void set_up(vector<string> &v)
{
    for (size_t i=0; i<4; i++) {
        v.push_back(string());
    }
	
	for (size_t i = 0; i < v.size(); i++)
    {
		v[i] = "........";
		for (int j=0; j<3; j++)
        {
			v[i][((i*2)+j)%8] = '0';
        }
	}
}

int main (int argc, char *const argv[]) {
	vector<string> v;
	set_up(v);
    
	PrintEachPaw(v);
	PrintEachBeat(v);
    
	return 0;
}

