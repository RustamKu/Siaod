#include <iostream>





int main() {
	std::cout << "World";
	system("pause");
}



/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int n = 0;
	struct supply //��� ���������
	{
		long int number; // ����� ��������
		char product[25]; //�����
		char supplier[15]; // ���������
		char date[10]; //���� ��������
	};
	supply *obj1 = new supply[n];
	void reading() {
		ifstream in;
		in.open("Text.txt", ios::in);
		string line;
		while (getline(in, line))
		{
			//std::cout << line << std::endl;

			n++;
		}
		in.close();
		/*if (n >= 50 || n <= 0)
		{
			cout << "Mnogo objectov";
			exit(228);
		}
		else {
			cout << "Classno vse norm";
		}
	*/	
/*
	}
	*/
	/*void imput() {
		FILE *myFile;
		myFile = fopen("Text.txt", "r");
		//ifstream in;
		//string line;
		//in.open("Text.txt", ios::in);
		for (int i = 0; i <= n; i++)
		{
			fscanf_s(myFile, "%ld %s %s %s", &obj1[i].number, &obj1[i].product, &obj1[i].supplier, &obj1[i].date);

		}
		for (int i = 0; i <= n; i++)
		{
			cout << obj1[i].number;
			cout << obj1[i].product;
			cout << obj1[i].supplier;
			cout << obj1[i].date;

		}
	}
	

	int main() {
		reading();
		cout <<" vot: " << n << " ";
		FILE *myFile;
		myFile = fopen("Text.txt", "r");
		//ifstream in;
		//string line;
		//in.open("Text.txt", ios::in);
		for (int i = 1; i <= n; i++)
		{
			fscanf(myFile, "%ld %s %s %s", &obj1[i].number, &obj1[i].product, &obj1[i].supplier, &obj1[i].date);

		}
		for (int i = 0; i <= n; i++)
		{
			cout << obj1[i].number << ", ";
			cout << obj1[i].product << ", ";
			cout << obj1[i].supplier << ", ";
			cout << obj1[i].date << endl;

		}
		
		system("pause");
	}
	*/
/*

int main() {
	reading();
	system("pause");
}








#include <fstream>
#include <iostream>
using namespace std;
struct worker //��� ���������
{
	long number; //�����
	char fam[25]; //�������
	char name[15]; //���
	int salary; //��������
};
void output_file(char file_name[30]); //�������� ����� 
int main()
{
	char file_name[30]; //��� �����
	cout << "file_name_file? ";
	cin >> file_name;
	output_file(file_name);
	return 0;
}
void output_file(char file_name[30])
{
	worker r; //��������
	ofstream f; //�������� ����������
	f.open(file_name); //�������� ���������� ����� 
				  // ������ � ���� ������ � 3 ����������
	for (int i = 1; i <= 3; i++)
	{
		cout << "number? ";
		cin >> r.number;
		cout << "number? ";
		cin >> r.fam;
		cout << "number? ";
		cin >> r.name;
		cout << "number? ";
		cin >> r.salary;
		f << r.number << " " << r.fam << " " << r.name << " " << r.salary << endl;
	}
	f.close(); //�������� �����
}
*/