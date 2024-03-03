//#include <iostream> 
//#include <vector> 
//#include <string> 
//using namespace std;
//struct student
//{
//	string name;
//	vector<int> grades;
//};
//void addstudent(vector<student>& students)
//{
//	student newstudent;
//	cout << "enter student name: ";
//	cin >> newstudent.name;
//	char choice;
//	do
//	{
//		int grade;
//		cout << "enter grade for " << newstudent.name << ": ";
//		cin >> grade;
//		newstudent.grades.push_back(grade);
//		cout << "do you want to add another grade? (y/n): ";
//		cin >> choice;
//	} while (choice == 'y' || choice == 'y');
//	students.push_back(newstudent);
//}
//void displaystudents(const vector<student>& students)
//{
//	for (const auto& student : students) {
//		cout << "name: " << student.name << ", grades: ";
//		for (int grade : student.grades) {
//			cout << grade << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	vector<student> students;
//	char option;
//	do
//	{
//		cout << "menu:\n";
//		cout << "1. add a student\n";
//		cout << "2. display all students\n";
//		cout << "3. quit\n";
//		cout << "enter your choice: ";
//		cin >> option;
//		switch (option)
//		{
//		case '1':
//			system("cls");
//			addstudent(students);
//			break;
//		case '2':
//			system("cls");
//			displaystudents(students);
//			break;
//		case '3':
//			cout << "end program.\n";
//			break;
//		default:
//			cout << "invalid.\n";
//		} 
//	}while (option != '3');
//	return 0;
//}
