/*
Teacher¿‡£¨ ºÃ≥–”⁄Person
*/
#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include <iostream>

class Teacher : public Person
{

private:
	float salary;
	std::string subject;
	std::string level;

public:
	Teacher() {
		Person("xiaoMing", "male", 35);
		this->salary = 5000;
		this->subject = "Math";
		this->level = "Professor";
	};
	~Teacher() {};

	Teacher(std::string name, std::string gender, int age, float salary, std::string subject, std::string level) {
		this->setName(name);
		this->setAge(age);
		this->setGender(gender);
		this->salary = salary;
		this->subject = subject;
		this->level = level;
	}

public:
	//setter 
	void setSalary(float salary) {
		this->salary = salary;
	}

	void setSubject(std::string subject) {
		this->subject = subject;
	}

	void setLevel(std::string level) {
		this->level = level;
	}

	std::string getSubject() {
		return this->subject;
	}

	float getSalary() {
		return this->salary;
	}

	std::string getLevel() {
		return this->level;
	}

public:
	//÷ÿ‘ÿ  overload
	void eat(const std::string&  food) {
		std::cout << this->getName() + " " + "eat" + " " + food << std::endl;
	}

	void eat() {
		std::cout << this->getName() + " " + "eat" + " " + "rice(default)" << std::endl;
	}

	void eat(std::string food, int time) {
		std::cout << this->getName() + " " + "eat" + " " + food + ". At " + std::to_string(time) + "clock." << std::endl;
	}



};

#endif
