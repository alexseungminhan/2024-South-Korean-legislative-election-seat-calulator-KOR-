#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "election.h"

using namespace std;

Election::Election(){}

vector<bool> che;
vector<float> copy_of_adjusted_seat_allocation; 
vector<float> copy_of_real_seat_allocation; 
int left_top1 = -1, left_top2 = -1;

void Election::check_if_eligible(vector<float> &c_seat, vector<float> &p_seat) {

	for (int i = 0;i < 7;i++) {
		che.push_back(false);
	}
/* 
A political party which has obtained at least 3/100 of the total valid votes nationwide 
in an election of proportional representation or A political party which has won at least five seats 
in the election of constituency members of the National Assembly is eligible for allocation.
*/
	for (int i = 0;i < c_seat.size();i++) {
		if (c_seat[i] >= 5) che[i] = true;
	}
	for (int i = 0;i < p_seat.size();i++) {
		if (p_seat[i] >= 3.0) che[i] = true;
	}
	
}

void Election::vote_percentage(vector<float>& p_seat) {
	float sum = 0;
	for (int i = 0;i < che.size();i++) {
		if (che[i] == true) sum += p_seat[i];
	}

	for (int i = 0;i < p_seat.size();i++) {
		if(che[i]==true) p_seat[i] = ((p_seat[i] / sum)*100);
		if (che[i] == false) p_seat[i] = 0;
	}
}

void Election::proportional_seat_allocation(vector<float>& c_seat, vector<float>& p_seat, float n) {
	for (int i = 0;i < 2;i++) {
		p_seat[i] = round(((300 - n) * (p_seat[i] / 100)) / 2);
	}

	for (int i = 2;i < 7;i++) {
		if ((300 - n) * (p_seat[i]/100) - c_seat[i] < 2) p_seat[i] = 0;
		else p_seat[i] = round(((300 - n) * (p_seat[i] / 100) - c_seat[i]) / 2);
	}

}

void Election::adjusted_seat_allocation(vector<float>& p_seat) {
	float sum=0;

	for (int i = 0;i < p_seat.size();i++) {
		sum += p_seat[i];
	}
	for (int i = 0;i < p_seat.size();i++) {
		p_seat[i] = (46 * (p_seat[i] / sum));
	}

}

void Election::real_seat_allocation(vector<float>& p_seat) {
	for(int i =0;i<p_seat.size();i++) {
		copy_of_adjusted_seat_allocation.push_back(p_seat[i]);
		p_seat[i] = floor(p_seat[i]);
	}

	for (int i = 0;i < p_seat.size();i++) {
		copy_of_real_seat_allocation.push_back(p_seat[i]);
	}
	
}

void Election::left_seat(vector<float>& p_seat) {
	for (int i = 0;i < p_seat.size();i++) {
		p_seat[i] = copy_of_adjusted_seat_allocation[i] - copy_of_real_seat_allocation[i];
	}
}

void Election::left_seat_priority(vector<float>& p_seat) {
	float temp1 = 0;

	for (int i = 0;i < p_seat.size();i++) {
		if (p_seat[i] > temp1) {
			temp1 = p_seat[i];
			left_top1 = i;
		}
	}

	float temp2 = 0;

	for (int i = 0;i < p_seat.size();i++) {
		if (p_seat[i] > temp2&&p_seat[i]<temp1) {
			temp2 = p_seat[i];
			left_top2 = i;
		}
	}

}

void Election::final_seat_allocation(vector<float>& p_seat) {
	for (int i = 0;i < p_seat.size();i++) {
		p_seat[i] = copy_of_real_seat_allocation[i];
	}

	p_seat[left_top1]++;
	p_seat[left_top2]++;

}

void Election::print(vector<float>& p_seat) {

	cout << "--------Proportional Representation Seats--------" << endl;
	cout << endl;

	cout << "\033[34mDemocratic Party:\033[0m" << p_seat[0]<< "seat(s)" << endl;
	cout << endl;

	cout << "\033[31mPeople Power Party:\033[0m" << p_seat[1] << "seat(s)" << endl;
	cout << endl;

	cout << "\033[32mGreen Justice Party:\033[0m" << p_seat[2] << "seat(s)" << endl;
	cout << endl;

	cout << "\033[36mNew Future Party:\033[0m" << p_seat[3] << "seat(s)" << endl;
	cout << endl;

	cout << "\033[33mReform Party:\033[0m" << p_seat[4] << "seat(s)" << endl;
	cout << endl;

	cout << "\033[35mThe Progressive Party:\033[0m" << p_seat[5] << "seat(s)" << endl;
	cout << endl;

	cout << "\033[0mRebuilding Korea Party:\033[0m" << p_seat[6] << "seat(s)" << endl;


}
