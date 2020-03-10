/*#include<iostream>                 //header files
#include<string>

using namespace std;

int strLength(char str[]);

int email_check(char str[])
{                                               //function to check the conditions for email
	int size, pos = 0, pos1 = 0, c = 0;
	size = strLength(str);
	if ((str[0] >= 'a'&& str[0] <= 'z') || (str[0] >= 'A'&& str[0] <= 'Z'))  //first char should be an alphabet
	{
		for (int i = 0; i<size; i++)
		{
			if ((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[i] == '_' || str[i] == '-' || str[i] == '#' || str[i] == '@')                                         //combination of characters allowed
			{
				if (str[i] == '.' || str[i] == '_' || str[i] == '-' || str[i] == '#' || str[i] == '@')    // symbol encountered 
				{
					if ((str[i + 1] >= 'a'&&str[i + 1] <= 'z') || (str[i + 1] >= '0' &&str[i + 1] <= '9')) //no 2 repeated symbols
					{
						if (str[i] == '@')                       //@ encountered, so domain part begins
							pos = i;                                  //pos is the position where domain begins
					}
					else
						return 0;
				}
			}
			else
				return 0;
		}
	}
	else
		return 0;
	if (pos == 0)
		return 0;
	else
	{
		for (int j = pos + 1; j<size; j++)
		{
			if (str[pos + 1] >= 'a'&&str[pos + 1] <= 'z')
			{
				if (str[j] == '.')
					pos1 = j;
			}
			else
				return 0;
		}
	}
	if (pos1 == 0)
		return 0;
	else
	{
		for (int k = pos1 + 1; k<size; k++)
		{
			if (str[k] >= 'a'&&str[k] <= 'z')
				c++;
			else
				return 0;
		}
		if (c >= 2)
			return 1;
		else
			return 0;
	}
}                                           //end of function

int main()
{
	int c;
	char email[100], ch;
	do
	{
		cout << "\nEnter email: ";
		cin.get(email, 100);                                 //accepting email from user
		c = email_check(email);
		if (c == 1)                     //if all criteria matched
		{
			cout << "\nemail accepted...\n";

			cout << "\nYour email address is: ";
			puts(email);
			break;
		}
		else                               //criteria not matched
		{
			cout << "\nInvalid email";
			cout << "\n\nWant to re-enter email(y/n): ";
			cin >> ch;
		}
	} while (ch == 'y' || ch == 'Y');   //user is asked to enter again until the choice is yes
	system("pause");
	return 1;
	
}


int strLength(char str[]) {

	int k = 0;
	for (k = 0; ; k++) {
		if (str[k] == '\0')
			break;
	}
	return k;
}
*/

#include<iostream>
#include<regex>
using namespace std;
bool Email(string email)
{
	const regex pattern("([\\w-\\d]{3,})(@)([\\w\\d-]{2,})(\.)([a-z]{2,5})");   //(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+
	return regex_match(email, pattern);
}
int main()
{
	cout << "Enter E-Mail  - " << endl;
	string str; getline(cin, str);
	if (Email(str))
		cout << "Your E-Mail is valid" << endl;
	else
		cout << "Sorry, Your E-Mail isn't valid." << endl;
	system("pause");
	return 0;
}