#include<iostream>
#include<vector>
using namespace std;

class Hummer {

	class Wheel {
		int size;
		string tire;

	public:
		Wheel() {};
		Wheel(int sz, string tire) :size(sz), tire(tire){};
	};

	vector<Wheel> wheels;

public:

	Hummer()
	{
		Wheel w(rand() % 20, "Michelin");
		wheels.resize(4, w);
	};

	void removeWheel(int nrWheel)
	{
			wheels.erase(wheels.begin() + nrWheel - 1);
	}

	void replaceWheel(int nrWheel, int sz, string tr, string rm, int stds)
	{
		if (nrWheel >= wheels.size())
		
			return;

		Wheel w(sz, tr);
		wheels[nrWheel] = w;
	}

};
class Carriage {

	class Wheel {
		int size;
		string tire;
		int studs;

	public:
		Wheel() {};
		Wheel(int sz, string tire, int studs) :size(sz), tire(tire) {};
	};

	vector<Wheel> wheels;

public:

	Carriage()
	{
		Wheel w(rand() % 20, "Wooden");
		wheels.resize(4, w);

	};

	void removeWheel(int nrWheel)
	{
			wheels.erase(wheels.begin() + nrWheel - 1);

	}
	void replaceWheel(int nrWheel, int sz)
	{
		if (nrWheel >= wheels.size())
		{
			return;
		}
		Wheel w(sz, tr);
	
		wheels[nrWheel] = w;
	}

};

int main() {

	return 0;
}