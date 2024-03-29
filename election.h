#ifndef __ELECTION_H__
#define __ELECTION_H__

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Election {

public:
	Election();

	void check_if_eligible(vector<float>& c_seat, vector<float>& p_seat);

	void vote_percentage(vector<float>& p_seat);

	void proportional_seat_allocation(vector<float>& c_seat, vector<float>& p_seat, float n);

	void adjusted_seat_allocation(vector<float>& p_seat);

	void real_seat_allocation(vector<float>& p_seat);

	void left_seat(vector<float>& p_seat);

	void left_seat_priority(vector<float>& p_seat);

	void final_seat_allocation(vector<float>& p_seat);

	void print(vector<float>& p_seat);

};

#endif __ELECTION_H__