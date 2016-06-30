//
// Created by Vanessa Ulloa on 5/11/16.
//

#include <iostream>
#include <string>

using namespace std;

class synapse
{
private:
	string neuronA;
	string neuronB;
	int weight;

public:
	synapse();
	synapse(string a, int weight);
	synapse(string a, string b, int weight);

	string get_neuronA();
	void set_neuronA(string x);

	string get_neuronB();
	void set_neuronB(string x);

	int get_weight();
	//void set_weight(string x);
	void set_weight(int x);
	void reset_weight();
};
