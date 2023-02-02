#include<iostream>
using namespace std;

int main()
{
	cout << "Welcome to our auto repair shop" << endl << endl;
	cout << "We will have your vehicle inspected soon" << endl;
	cout << "inspecting..." << endl;
	int inspect = 75;
	int min = 120;
	int labour = 75;
	int hour = 0;
	int dmg = 0;
	cout << "inspection finishes." << endl;
	cout << "Damaged parts: ";
	cin >> dmg;

	int light = 25;
	int wheel = 50;
	int chassis = 100;
	int engine = 200;

	int lightQ = 0;
	int wheelQ = 0;
	int chassisQ = 0;
	int engineQ = 0;

	if (dmg == 0)
	{
		cout << "your vehicle has no damages." << endl;
		cout << "Bill printing..." << endl << endl;
		cout << "BILL:" << endl;
		cout << "inspection cost: 75$" << endl << "total: 75$" << endl;
	}
	else
	{
		cout << "enter a specific number of each damaged part: " << endl;
		cout << "Light: ";
		cin >> lightQ;
		cout << "Wheel: ";
		cin >> wheelQ;
		cout << "Chassis: ";
		cin >> chassisQ;
		cout << "Engine: ";
		cin >> engineQ;

		if (lightQ + wheelQ + chassisQ + engineQ != dmg)
		{
			do
			{
				cout << "please enter again the right amount of each damaged part: " << endl;
				cout << "Light: ";
				cin >> lightQ;
				cout << "Wheel: ";
				cin >> wheelQ;
				cout << "Chassis: ";
				cin >> chassisQ;
				cout << "Engine: ";
				cin >> engineQ;
			} while (lightQ + wheelQ + chassisQ + engineQ != dmg);
		}

		int a = lightQ * light;
		int b = wheelQ * wheel;
		int c = chassisQ * chassis;
		int d = engineQ * engine;

		cout << "Enter the hours of labour: ";
		cin >> hour;
		int e = hour * labour;

		cout << endl << "BILL:" << endl;
		cout << "Damaged light parts: " << lightQ << "->" << "$" << a << endl;
		cout << "Damaged wheel parts: " << wheelQ << "->" << "$" << b << endl;
		cout << "Damaged chassis parts: " << chassisQ << "->" << "$" << c << endl;
		cout << "Damaged engine parts: " << engineQ << "->" << "$" << d << endl;
		cout << "Hours of labour: " << hour << "->" << "$" << e << endl;
		cout << "minimum charge: $120" << endl << "total: $" << a + b + c + d + e + min << endl;
	}
	return 0;
}