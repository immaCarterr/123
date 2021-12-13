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
	cout << "¬ведите ‘»ќ учащегос€:\n"; fio.Set();
	cout << "\n¬ведите возраст учащегос€: "; AvoidChar(age);
	cout << "\n¬ведите дату поступлени€:\n"; receiptDate.Set();
	cout << "\n¬ведите факультет: "; cin >> faculty;
	cout << "\n¬ведите специальность: "; cin >> speciality;
	cout << "\n¬ведите форму обучени€: "; cin >> educForm;
	cout << "\n”частие в исследовательских работах(нет или тема работы, если да): "; cin >> scientificWork;
	cout << "\n¬ведите плату за обучение(или 0, если учащийс€ на бюджетной форме): "; AvoidChar(tuitionFee);
	cout << "\n¬ведите средний балл: "; cin >> averageScore;
	cout << "\n¬ведите группу: "; AvoidChar(group);
}