#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int n = 0;
struct supply //тип «Работник»
{
	long int number; // номер поставки
	char product[25]; //товар
	char supplier[15]; // поставщик
	char date[10]; //дата поставки
};

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
	if (n >= 50 || n <= 0)
	{
	cout << "Mnogo objectov";
	exit(228);
	}
	else {
	cout << "Classno vse norm";
	}

	}

/*void imput() {
	FILE *myFile;
	myFile = fopen("Text.txt", "r");
	//ifstream in;
	//string line;
	//in.open("Text.txt", ios::in);
	for (int i = 1; i <= n; i++)
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
	*/

	void main() {
	reading();
	cout <<" vot: " << n << " ";
	supply *obj1 = new supply[n];
	FILE *myFile;
	fopen_s(&myFile, "Text.txt", "r");
	//ifstream in;
	//string line;
	//in.open("Text.txt", ios::in);
	for (int i = 0; i < n; i++)
	{
	fscanf_s(myFile, "%ld %s %s %s", &obj1[i].number, &obj1[i].product, &obj1[i].supplier, &obj1[i].date);

	}
	for (int i = 0; i < n; i++)
	{
	cout << obj1[i].number << ", ";
	cout << obj1[i].product << ", ";
	cout << obj1[i].supplier << ", ";
	cout << obj1[i].date << endl;

	}
	system("pause");
	
	}