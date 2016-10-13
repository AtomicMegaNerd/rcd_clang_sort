/*
 * num_io.cpp
 *
 *  Created on: 2011-12-20
 *      Author: cdunphy
 */

#include "num_io.h"

using std::string;
using std::ifstream;
using std::ofstream;
using std::size_t;
using std::endl;
using std::vector;

typedef vector<int>::const_iterator ivec_it;

void get_nums_from_file(const string& filename, vector<int>& nums)
{
	ifstream infile(filename.c_str());
	int num = 0;
	int ix = 0;
	while (infile >> num)
	{
		nums[ix++] = num;
	}
}

void write_nums_to_file(const string& filename, const vector<int>& nums)
{
	ofstream outfile(filename.c_str());
	for (ivec_it it = nums.begin(); it != nums.end(); ++it)
	{
		outfile << *it << endl;
	}
}

