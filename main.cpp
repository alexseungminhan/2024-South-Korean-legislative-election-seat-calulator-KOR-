#include <iostream>
#include <vector>
#include <string>

#include "election.h"

using namespace std;

int main() {

	Election example;

	vector<float> c_seat;
	//c_seat: constituency seats
	vector<float> p_seat;
	//p_seat: proportional seats

	cout << "--------2024 South Korea General Election Seat Calculator--------" << endl;

	float seat1;
	float seat2;
	float seat3;
	float seat4;
	float seat5;
	float seat6;
	float seat7;

	cout << "\033[34mDemocratic Party Constituency Seats:\033[0m" << endl;
	cin >> seat1;
	c_seat.push_back(seat1);
	cout << "\033[31mPeople Power Party Constituency Seats:\033[0m" << endl;
	cin >> seat2;
	c_seat.push_back(seat2);
	cout << "\033[32mGreen Justice Party Constituency Seats:\033[0m" << endl;
	cin >> seat3;
	c_seat.push_back(seat3);
	cout << "\033[36mNew Future Party Constituency Seats:\033[0m" << endl;
	cin >> seat4;
	c_seat.push_back(seat4);
	cout << "\033[33mReform Party Constituency Seats:\033[0m" << endl;
	cin >> seat5;
	c_seat.push_back(seat5);
	cout << "\033[35mThe Progressive Party Constituency Seats:\033[0m" << endl;
	cin >> seat6;
	c_seat.push_back(seat6);
	c_seat.push_back(0);

	cout << "\033[0mIndependent Constituency Seats:\033[0m" << endl;
	cin >> seat7;

	float vote_percentage1;
	float vote_percentage2;
	float vote_percentage3;
	float vote_percentage4;
	float vote_percentage5;
	float vote_percentage6;
	float vote_percentage7;

	cout << "\033[34mDemocratic Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage1;
	p_seat.push_back(vote_percentage1);
	cout << "\033[31mPeople Power Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage2;
	p_seat.push_back(vote_percentage2);
	cout << "\033[32mGreen Justice Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage3;
	p_seat.push_back(vote_percentage3);
	cout << "\033[36mNew Future Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage4;
	p_seat.push_back(vote_percentage4);
	cout << "\033[33mReform Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage5;
	p_seat.push_back(vote_percentage5);
	cout << "\033[35mThe Progressive Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage6;
	p_seat.push_back(vote_percentage6);
	cout << "\033[0mRebuilding Korea Party Proportional Representation (%):\033[0m" << endl;
	cin >> vote_percentage7;
	p_seat.push_back(vote_percentage7);
	
	example.check_if_eligible(c_seat, p_seat);
	example.vote_percentage(p_seat);
	example.proportional_seat_allocation(c_seat, p_seat, seat7);
	example.adjusted_seat_allocation(p_seat);
	example.real_seat_allocation(p_seat);
	example.left_seat(p_seat);
	example.left_seat_priority(p_seat);
	example.final_seat_allocation(p_seat);
	example.print(p_seat);

}
