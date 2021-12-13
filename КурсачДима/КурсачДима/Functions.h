#pragma once
#include "libraries.h"
#include "subclasses.h"
#include "User.h"
#include "Learner.h"

using namespace std;

bool operator==(Fio obj1, Fio obj2) {
	if (obj1.name == obj2.name && obj1.surname == obj2.surname && obj1.patronymic == obj2.patronymic) return true;
	else return false;
}

fstream& operator>>(fstream& fs, User& obj) {
	fs >> obj.login >> obj.password;
	return fs;
}

fstream& operator<<(fstream& fs, Date& obj) {
	fs << obj.day << " " << obj.month << " " << obj.year;
	return fs;
}

fstream& operator>>(fstream& fs, Date& obj) {
	fs >> obj.day >> obj.month >> obj.year;
	return fs;
}

fstream& operator<<(fstream& fs, Fio& obj) {
	fs << obj.GetName() << " " << obj.GetSurname() << " " << obj.GetPatronymic();
	return fs;
}

fstream& operator>>(fstream& fs, Fio& obj) {
	fs >> obj.name >> obj.surname >> obj.patronymic;
	return fs;
}

fstream& operator<<(fstream& fs, Learner& obj) {
	fs << endl;
	fs << obj.fio << " " << obj.age << " ";
	fs << obj.receiptDate << " " << obj.faculty << " " << obj.speciality << " " << obj.educForm << " ";
	fs << obj.scientificWork << " " << obj.tuitionFee << " " << obj.averageScore << " " << obj.group;
	return fs;
}

fstream& operator>>(fstream& fs, Learner& obj) {
	fs >> obj.fio >> obj.age;
	fs >> obj.receiptDate >> obj.faculty >> obj.speciality;
	fs >> obj.educForm >> obj.scientificWork >> obj.tuitionFee >> obj.averageScore >> obj.group;
	return fs;
}

int AvoidChar(int& num) {
	string info;
	int flag = 0;
	info = "";
	int ch = 0;
	while (true)
	{
		while (true) {
			ch = _getch();
			if ((ch >= 48 && ch <= 57) || ch == 8 || ch == 13) break;
		}
		if (ch == 13) {
			break;
		}
		if (ch == 27) {
			flag = 1;
			break;
		}
		if (ch == 8 && !info.empty()) {
			cout << (char)8 << ' ' << char(8);
			if (!info.empty()) info.erase(info.length() - 1);
		}
		if (ch != 8) {
			cout << (char)ch;
			info += (char)ch;
		}
	}
	stringstream A; A << info; A >> num;
	cout << endl;
	return flag;
}

int AvoidChar(float& num) {
	string info;
	int flag = 0;
	info = "";
	int ch = 0;
	while (true)
	{
		while (true) {
			ch = _getch();
			if ((ch >= 48 && ch <= 57) || ch == 8 || ch == 13) break;
		}
		if (ch == 13) {
			break;
		}
		if (ch == 27) {
			flag = 1;
			break;
		}
		if (ch == 8 && !info.empty()) {
			cout << (char)8 << ' ' << char(8);
			if (!info.empty()) info.erase(info.length() - 1);
		}
		if (ch != 8) {
			cout << (char)ch;
			info += (char)ch;
		}
	}
	stringstream A; A << info; A >> num;
	cout << endl;
	return flag;
}

int AvoidInt(string& info) {
	int flag = 0;
	info = "";
	int ch = 0;
	while (true)
	{
		while (true) {
			ch = _getch();
			if (ch < 48 || ch > 57 || ch == 8 || ch == 13) break;
		}
		if (ch == 13) {
			break;
		}
		if (ch == 27) {
			flag = 1;
			break;
		}
		if (ch == 8 && !info.empty()) {
			cout << (char)8 << ' ' << char(8);
			if (!info.empty()) info.erase(info.length() - 1);
		}
		if (ch != 8) {
			cout << (char)ch;
			info += (char)ch;
		}
	}
	cout << endl;
	return flag;
}

int Menu() {
	int choice;
	cout << "\n\n\n\n\n";
	cout << "\t\t\t\t\t||=========================================||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t|| 1. ����������� ������ ������������      ||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t||=========================================||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t|| 2. ����                                 ||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t||=========================================||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t|| 3. �����                                ||\n"
		"\t\t\t\t\t||                                         ||\n"
		"\t\t\t\t\t||=========================================||\n\n";
	cout << "\t\t\t\t\t               ��� �����: "; AvoidChar(choice);
	return choice;
}

int UserMenu() {
	int choice;
	cout << "\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  1. �������� ������                    ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  2. ��������������� ������             ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  3. ������� ������                     ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  4. ����������� ���������� ������      ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  5. ����� ������                       ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  6. ����������� ��������������� ������ ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||  7. �����                              ||\n"
		"\t\t\t\t\t||                                        ||\n"
		"\t\t\t\t\t||========================================||\n"
		"\t\t\t\t\t               ��� �����: "; AvoidChar(choice);
	return choice;

}

int AddMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t  ||==============================================||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||   1. �������� ������ � ��������              ||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||==============================================||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||   2. �������� ������ � �����������           ||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||==============================================||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||   3. �������� ������ � �����������           ||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||==============================================||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||   4. �������� ������ �� ���������            ||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||==============================================||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||   5. �����                                   ||\n"
		"\t\t\t\t  ||                                              ||\n"
		"\t\t\t\t  ||==============================================||\n\n"
		"\t\t\t\t                   ��� �����: "; AvoidChar(choice);
	return choice;
}

int RedMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t||==================================================||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||  1. ��������������� ������ � ��������            ||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||==================================================||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||  2. ��������������� ������ � �����������         ||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||==================================================||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||  3. ��������������� ������ � �����������         ||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||==================================================||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||  4. ��������������� ������ �� ���������          ||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||==================================================||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||  5. �����                                        ||\n"
		"\t\t\t\t||                                                  ||\n"
		"\t\t\t\t||==================================================||\n\n"
		"\t\t\t\t                     ��� �����: "; AvoidChar(choice);
	return choice;
}

int DelMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   1. ������� ������ � ��������              ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   2. ������� ������ � �����������           ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   3. ������� ������ � �����������           ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   4. ������� ������ �� ���������            ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   5. �����                                  ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n\n"
		"\t\t\t\t                 ��� �����: "; AvoidChar(choice); 
	return choice;
}

int ShowMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   1. ����������� ������ � ���������         ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   2. ����������� ������ � ������������      ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   3. ����������� ������ � ������������      ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   4. ����������� ������ �� ����������       ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   5. ����� ���� �� ���������-���������      ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||   6. �����                                  ||\n"
		"\t\t\t\t||                                             ||\n"
		"\t\t\t\t||=============================================||\n\n"
		"\t\t\t\t                 ��� �����: "; AvoidChar(choice);
	return choice;
}

int FindMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t||==========================================||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||   1. ����� ������ � ���������            ||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||==========================================||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||   2. ����� ������ � ������������         ||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||==========================================||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||   3. ����� ������ � ������������         ||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||==========================================||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||   4. ����� ������ �� ����������          ||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||==========================================||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||   5. �����                               ||\n"
		"\t\t\t\t||                                          ||\n"
		"\t\t\t\t||==========================================||\n\n"
		"\t\t\t\t                 ��� �����: "; AvoidChar(choice);
	return choice;
}

int SortMenu() {
	int choice;
	cout << "\n\n\n";
	cout << "\t\t\t\t||===============================================||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||   1. ������������� ������ � ���������         ||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||===============================================||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||   2. ������������� ������ � ������������      ||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||===============================================||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||   3. ������������� ������ � ������������      ||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||===============================================||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||   4. ������������� ������ �� ����������       ||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||===============================================||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||   5. �����                                    ||\n"
		"\t\t\t\t||                                               ||\n"
		"\t\t\t\t||===============================================||\n\n"
		"\t\t\t\t                 ��� �����: "; AvoidChar(choice);
	return choice;
}

void Encryption(string& str) {
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = str[i] + 5;
	}
}

void Decryption(string& str) {
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = str[i] - 5;
	}
}

int HidePass(string& info) {
	int flag = 0;
	info = "";
	int ch = 0;
	while (true) {
		ch = _getch();
		if (ch == 13) {
			break;
		}
		if (ch == 27) {
			flag = 1;
			break;
		}
		if (ch == 8 && !info.empty()) {
			cout << (char)8 << ' ' << char(8);
			if (!info.empty()) info.erase(info.length() - 1);
		}
		if (ch != 8) {
			cout << "*";
			info += (char)ch;
		}
	}
	cout << endl;
	return flag;
}

int CheckLog(string log, string pass) {
	int flag = 1;
	fstream fs;
	fs.open("Users.txt");
	if (fs.is_open()) {
		deque <User> U;
		while (!fs.eof())
		{
			User user;
			fs >> user;
			U.push_back(user);
		}
		fs.close();
		for (int i = 0; i < U.size(); i++)
		{
			Decryption(U[i].password);
			(U[i].login == log) ? flag = 0 : flag;
			(U[i].login == log && U[i].password == pass) ? flag = 2 : flag;
		}
	}
	else {
		flag = -1;
	}
	return flag;
}

int Check(string path) {
	int res = 0;
	fstream fs;
	fs.open(path);
	if (fs.is_open()) res = 1;
	return res;
}

void registration() {
	User user;
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "������� �����: "; cin >> user.login;
		int ch = CheckLog(user.login, "");
		if (ch == 1 || ch == -1) {
			cout << "\n������� ������: "; HidePass(user.password);
			cout << "\n��������� ������: "; HidePass(user.confpass);
			if (user.password == user.confpass) {
				system("pause");
				fstream fs;
				fs.open("Users.txt", fstream::in | fstream::app);
				if (fs.is_open()) {
					Encryption(user.password);
					fs << user.login << " " << user.password << endl;
					cout << "\n����������� ������ �������" << endl;
					fs.close();
				}
				else {
					system("cls");
					cout << "�� ������� �������� ���������� � ����!\n";
					system("pause");
				}
				flag = false;
			}
			else {
				cout << "������ ��� ����� �� ���������!" << endl;
				system("pause");
			}
		}
		else {
			cout << "������������ � ����� ������� ��� ���������������!" << endl;
			system("pause");
		}
	}
}

int authorization() {
	int res;
	User user;
	bool flag = true;
	while (flag) {
		system("cls");
		int ch = Check("Users.txt");
		if (ch == 0) {
			cout << "���������� �����������!" << endl;
			res = -1;
			system("pause");
			break;
		}
		cout << "������� �����: "; cin >> user.login;
		cout << "\n������� ������: "; HidePass(user.password);
		ch = CheckLog(user.login, user.password);
		if (ch == 2) {
			res = 1;
			cout << "���� �������� �������!" << endl;
			system("pause");
			flag = false;
		}
		else {
			cout << "\n�������� ����� ��� ������!\n";
			system("pause");
			continue;
		}
	}
	return res;
}

void AddInfo(Learner* obj, string path) {
	obj->SetInfo();
	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (fs.is_open()) {
		fs << *obj;
		obj->PrintUniqueInfo(fs);
		fs.close();
	}
	else {
		cout << "�� ������� �������� ����������" << endl;
	}
}

template <class Type>
void RedactInfo(Type type, string path) {
	cout << endl;
	if (Check(path) == 0) {
		cout << "���������� �� �������� �����������!" << endl;
		system("pause");
		return;
	}
	Fio fio;
	cout << "������� ��� ���������, ���������� � ������� ���������� ��������: " << endl;
	fio.Set();
	fstream fs;
	fs.open(path, fstream::in | fstream::out);
	if (fs.is_open()) {
		int flag = 0;
		deque <Type> D;
		while (!fs.eof()) {
			Type object;
			fs >> object;
			object.SetUniqueInfo(fs);
			D.push_back(object);
		}
		fs.close();
		for (int i = 0; i < D.size(); i++)
		{
			if (D[i].fio == fio) {
				flag = 1;
				cout << "������� ����� ����������:" << endl << endl;
				D[i].SetInfo();
			}
		}
		if (flag == 0) {
			cout << endl << "�������� � ������ ������� �� ������, ��������� �������� ������" << endl;
			system("pause");
			return;
		}
		char Fname[20];
		for (int i = 0; i < path.size(); i++)
		{
			Fname[i] = path[i];
		}
		Fname[path.size()] = '\0';
		remove(Fname);
		fs.open(path, fstream::out | fstream::in | fstream::app);
		if (fs.is_open()) {
			for (int i = 0; i < D.size(); i++)
			{
				fs << D[i];
				D[i].PrintUniqueInfo(fs);
			}
			fs.close();
		}
	}
	else {
		cout << "�� ������� ��������������� ����������" << endl;
	}
}

template <class Type>
void DeleteInfo(Type type, string path) {
	if (Check(path) == 0) {
		cout << "���������� �� �������� �����������!" << endl;
		system("pause");
		return;
	}
	Fio fio;
	cout << "������� ��� ���������, ���������� � ������� ���������� �������: " << endl;
	fio.Set();
	fstream fs;
	fs.open(path, fstream::in | fstream::out);
	if (fs.is_open()) {
		int flag = 0;
		deque <Type> D;
		while (!fs.eof()) {
			Type object;
			fs >> object;
			object.SetUniqueInfo(fs);
			D.push_back(object);
		}
		fs.close();
		for (int i = 0; i < D.size(); i++)
		{
			if (D[i].fio == fio) flag = 1;
		}
		if (flag == 0) {
			cout << endl << "�������� � ������ ������� �� ������, ��������� �������� ������" << endl;
			system("pause");
			return;
		}
		char Fname[20];
		for (int i = 0; i < path.size(); i++)
		{
			Fname[i] = path[i];
		}
		Fname[path.size()] = '\0';
		remove(Fname);
		fs.open(path, fstream::out | fstream::in | fstream::app);
		if (fs.is_open()) {
			for (int i = 0; i < D.size(); i++)
			{
				if (!(D[i].fio == fio)) {
					fs << D[i];
					D[i].PrintUniqueInfo(fs);
				}
			}
			fs.close();
		}
	}
	else {
		cout << "�� ������� ������� ����������" << endl;
	}
}

template <class Type>
void ShowInfo(Type type, string path, int flag) {
	if (Check(path) == 0) {
		cout << "���������� �����������!" << endl;
		system("pause");
		return;
	}
	fstream fs;
	fs.open(path, fstream::in | fstream::out);
	if (fs.is_open()) {
		deque <Type> D;
		while (!fs.eof()) {
			Type object;
			fs >> object;
			object.SetUniqueInfo(fs);
			D.push_back(object);
		}
		fs.close();

		if (flag == 1) {
			for (int i = 1; i < D.size(); i++)
			{
				int d = exp2(i) - 1;
				if (d <= D.size()) {

					for (int k = 0; k < D.size() - d; k++)
					{
						int j = k;
						while (j >= 0 && D[j].receiptDate.GetYear() * 365 + D[j].receiptDate.GetMonth() * 30 + D[j].receiptDate.GetDay() > D[j+d].receiptDate.GetYear() * 365 + D[j+d].receiptDate.GetMonth() * 30 + D[j+d].receiptDate.GetDay())
						{
							Type object = D[j];
							D[j] = D[j + d];
							D[j + d] = object;
							j--;
						}
					}
				}
			}
		}

		//1� � 2� ������ �����
		cout << "|" << setw(150) << setfill('=') << "|" << endl;
		cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
		cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << setw(15) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << endl;

		//��������� ������ �����
		cout << resetiosflags(ios::adjustfield);
		cout.setf(ios::left);
		cout << "| " << setw(29) << setfill(' ') << "��� ������� ��������" << "| " << setw(8) << setfill(' ') << "�������" << "| " << setw(12) << setfill(' ') << "�����������" << "| ";
		cout << setw(10) << setfill(' ') << "���������" << "| " << setw(14) << setfill(' ') << "�������������" << "| " << setw(9) << setfill(' ') << "��������" << "| " << setw(10) << setfill(' ') << "����.���." << "| ";
		cout << setw(10) << setfill(' ') << "���������" << "| " << setw(6) << setfill(' ') << "�����" << "|" << setw(14) << setfill(' ') << " ������� ����" << "|" << setw(8) << setfill(' ') << " ������" << "|" << endl;

		//4� � 5� ������ �����
		cout << resetiosflags(ios::adjustfield);
		cout.setf(ios::right);
		cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
		cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << setw(15) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << endl;
		cout << "|" << setw(150) << setfill('=') << "|" << endl;
		for (int i = 0; i < D.size(); i++)
		{
			cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
			cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << setw(15) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << endl;

			cout << resetiosflags(ios::adjustfield);
			cout.setf(ios::left);
			string fio = D[i].fio.GetName() + " " + D[i].fio.GetSurname() + " " + D[i].fio.GetPatronymic();
			stringstream A;
			A << D[i].receiptDate.GetDay() << "." << D[i].receiptDate.GetMonth() << "." << D[i].receiptDate.GetYear();
			string date; A >> date;

			cout << "| " << setw(29) << setfill(' ') << fio << "| " << setw(8) << setfill(' ') << D[i].GetAge() << "| " << setw(12) << setfill(' ') << date << "| " << setw(10) << setfill(' ') << D[i].GetFaculty() << "| ";
			cout << setw(14) << setfill(' ') << D[i].GetSpeciality() << "| " << setw(9) << setfill(' ') << D[i].GetEducForm() << "| " << setw(10) << setfill(' ') << D[i].GetScientificWork() << "| " << setw(10) << setfill(' ') << D[i].GetDormitory() << "| " << setw(6) << setfill(' ') << D[i].GetTuitionFee() << "| " << setw(13) << setfill(' ') << D[i].GetAverageScore() << "| " << setw(7) << setfill(' ') << D[i].GetGroup() << "|" << endl;

			cout << resetiosflags(ios::adjustfield);
			cout.setf(ios::right);
			cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
			cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << setw(15) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << endl;
			cout << "|" << setw(150) << setfill('=') << "|" << endl;
		}
		system("pause");
	}
	else {
		cout << "�� ������� ����������� ����������" << endl;
	}
}

template <class Type>
void FindInfo(Type type, string path) {
	if (Check(path) == 0) {
		cout << "���������� �� �������� �����������!" << endl;
		system("pause");
		return;
	}
	Fio fio;
	cout << "������� ��� ���������, ���������� � ������� ���������� �����: " << endl;
	fio.Set();
	fstream fs;
	fs.open(path, fstream::in | fstream::out);
	if (fs.is_open()) {
		int flag = 0;
		deque <Type> D;
		while (!fs.eof()) {
			Type object;
			fs >> object;
			object.SetUniqueInfo(fs);
			D.push_back(object);
		}
		fs.close();
		for (int i = 0; i < D.size(); i++)
		{
			if (D[i].fio == fio) flag = 1;
		}
		if (flag == 0) {
			cout << endl << "�������� � ������ ������� �� ������, ��������� �������� ������" << endl;
			system("pause");
			return;
		}
		cout << endl;
		for (int i = 0; i < D.size(); i++)
		{
			if (D[i].fio == fio) {
				//1� � 2� ������ �����
				cout << "|" << setw(118) << setfill('=') << "|" << endl;
				cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
				cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << endl;

				//��������� ������ �����
				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::left);
				cout << "| " << setw(29) << setfill(' ') << "��� ������� ��������" << "| " << setw(8) << setfill(' ') << "�������" << "| " << setw(12) << setfill(' ') << "�����������" << "| ";
				cout << setw(10) << setfill(' ') << "���������" << "| " << setw(14) << setfill(' ') << "�������������" << "| " << setw(9) << setfill(' ') << "��������" << "| " << setw(10) << setfill(' ') << "����.���." << "| ";
				cout << setw(10) << setfill(' ') << "���������" << "|" << endl;

				//4� � 5� ������ �����
				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::right);
				cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
				cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << endl;
				cout << "|" << setw(118) << setfill('=') << "|" << endl;

				cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
				cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << endl;

				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::left);
				string fio = D[i].fio.GetName() + " " + D[i].fio.GetSurname() + " " + D[i].fio.GetPatronymic();
				stringstream A;
				A << D[i].receiptDate.GetDay() << "." << D[i].receiptDate.GetMonth() << "." << D[i].receiptDate.GetYear();
				string date; A >> date;

				cout << "| " << setw(29) << setfill(' ') << fio << "| " << setw(8) << setfill(' ') << D[i].GetAge() << "| " << setw(12) << setfill(' ') << date << "| " << setw(10) << setfill(' ') << D[i].GetFaculty() << "| ";
				cout << setw(14) << setfill(' ') << D[i].GetSpeciality() << "| " << setw(9) << setfill(' ') << D[i].GetEducForm() << "| " << setw(10) << setfill(' ') << D[i].GetScientificWork() << "| " << setw(10) << setfill(' ') << D[i].GetDormitory() << "|" << endl;

				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::right);
				cout << "|" << setw(31) << setfill(' ') << "|" << setw(10) << setfill(' ') << "|" << setw(14) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|";
				cout << setw(16) << setfill(' ') << "|" << setw(11) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << endl;
				cout << "|" << setw(118) << setfill('=') << "|" << endl;
			}
		}
		system("pause");
	}
	else {
		cout << "�� ������� ������� ����������" << endl;
	}
}

template <class Type>
void Income(Type type, string path, float& total) {
	if (Check(path) == 0) {
		cout << "���������� �����������!" << endl;
		system("pause");
		return;
	}
	fstream fs;
	fs.open(path, fstream::in | fstream::out);
	if (fs.is_open()) {
		float res = 0;
		deque <Type> D;
		while (!fs.eof()) {
			Type object;
			fs >> object;
			object.SetUniqueInfo(fs);
			D.push_back(object);
		}
		fs.close();

		//1� � 2� ������ �����
		cout << "|" << setw(48) << setfill('=') << "|" << endl;
		cout << "|" << setw(31) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << endl;

		//��������� ������ �����
		cout << resetiosflags(ios::adjustfield);
		cout.setf(ios::left);
		cout << "|" << setw(30) << setfill(' ') << " ��� ������� ��������" << "|" << setw(8) << setfill(' ') << " ������" << "|" << setw(7) << setfill(' ') << " �����" << "|" << endl;

		//4� � 5� ������ �����
		cout << resetiosflags(ios::adjustfield);
		cout.setf(ios::right);
		cout << "|" << setw(31) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << endl;
		cout << "|" << setw(48) << setfill('=') << "|" << endl;
		for (int i = 0; i < D.size(); i++)
		{
			if (D[i].GetTuitionFee() > 0) {
				res += D[i].GetTuitionFee();
				cout << "|" << setw(31) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << endl;

				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::left);
				string fio = D[i].fio.GetName() + " " + D[i].fio.GetSurname() + " " + D[i].fio.GetPatronymic();

				cout << "| " << setw(29) << setfill(' ') << fio << "| " << setw(7) << setfill(' ') << D[i].GetGroup() << "| " << setw(6) << setfill(' ') << D[i].GetTuitionFee() << "|" << endl;

				cout << resetiosflags(ios::adjustfield);
				cout.setf(ios::right);
				cout << "|" << setw(31) << setfill(' ') << "|" << setw(9) << setfill(' ') << "|" << setw(8) << setfill(' ') << "|" << endl;
				cout << "|" << setw(48) << setfill('=') << "|" << endl;
			}
		}
		cout << "����� - " << res;
		total += res;
	}
	else {
		cout << "�� ������� ����������� ����������" << endl;
	}
}