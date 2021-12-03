#include<iostream>
#include<vector>
using namespace std;

	class Group {

		class student {

		public:
			string nume;

			int varsta;

			float medie;

			student() :nume(""), varsta(0), medie(0) { };

			student(string fn, int age, float avg) : nume(fn), varsta(age), medie(avg) {};
		};

		vector<student> studentList;

	public:

		void show_student_list() {

			cout << endl;

			for (auto i : studentList)
			{
				
				cout << "Numele: " << i.nume << ", ";
				cout << "Varsta: " << i.varsta << ", ";
				cout << "Media: " << i.medie;
				
			}

		}

		void make_student(string fn, int age, int avg) {

			student s(fn, age, avg);
			studentList.push_back(s);

		}

	};


	int main()
	{

		auto g = new Group();

		cout << "numar de studenti:"; int n;
		cin >> n;
		int a, b;
		string c;
		while(n--) {
			cout << "nume:"; cin >> c;
			cout << "nota:"; cin >> a;
			cout << "varsta:"; cin >> b;
			g->make_student(c, a, b);
		}


		g->show_student_list();
	}