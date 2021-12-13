#pragma once
#include "libraries.h"
#include "subclasses.h"

using namespace std;

class Learner {
protected:
	Fio fio;
	int age;
	Date receiptDate;
	string faculty;
	string speciality;
	string educForm;
	string dormitory;
	string scientificWork;
	float averageScore;
	float tuitionFee;
	int group;
public:

	Learner();

	int GetAge() { return age; }
	string GetFaculty() { return faculty; }
	string GetSpeciality() { return speciality; }
	string GetEducForm() { return educForm; }
	string GetScientificWork() { return scientificWork; }
	float GetTuitionFee() { return tuitionFee; }
	float GetAverageScore() { return averageScore; }
	int GetGroup() { return group; }

	virtual void SetInfo();
	virtual void PrintUniqueInfo(fstream& fs) = 0;
	virtual void SetUniqueInfo(fstream& fs) = 0;
	virtual string GetDormitory() = 0;

	template <class Type> friend void ShowInfo(Type type, string path, int flag);
	template <class Type> friend void FindInfo(Type type, string path);
	template <class Type> friend void RedactInfo(Type type, string path);
	template <class Type> friend void DeleteInfo(Type type, string path);
	template <class Type> friend void Income(Type type, string path, float& total);
	friend fstream& operator<<(fstream& fs, Learner& obj);
	friend fstream& operator>>(fstream& fs, Learner& obj);
};

Learner::Learner() {
	age = 0;
	faculty = "-";
	speciality = "-";
	educForm = "-";
	dormitory = "-";
	scientificWork = "-";
	averageScore = 0;
	tuitionFee = 0;
}

void Learner::SetInfo() {
	cout << "������� ��� ���������:\n"; fio.Set();
	cout << "\n������� ������� ���������: "; AvoidChar(age);
	cout << "\n������� ���� �����������:\n"; receiptDate.Set();
	cout << "\n������� ���������: "; cin >> faculty;
	cout << "\n������� �������������: "; cin >> speciality;
	cout << "\n������� ����� ��������: "; cin >> educForm;
	cout << "\n������� � ����������������� �������(��� ��� ���� ������, ���� ��): "; cin >> scientificWork;
	cout << "\n������� ����� �� ��������(��� 0, ���� �������� �� ��������� �����): "; AvoidChar(tuitionFee);
	cout << "\n������� ������� ����: "; cin >> averageScore;
	cout << "\n������� ������: "; AvoidChar(group);
}