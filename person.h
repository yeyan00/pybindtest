
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{

public:
	std::string habbit;             //��Ȥ����

private:
	std::string name;               //����
	std::string gender;             //�Ա�
	int age;                        //����
	std::string idCardNum;          //���֤����
	std::string address;            //סַ

public:
	void setName(std::string name) {
		this->name = name;
	}

	void setAge(int age) {
		this->age = age;
	}

	void setGender(std::string gender) {
		this->gender = gender;
	}

	void setAddress(std::string address) {
		this->address = address;
	}

	void setIdCardNum(std::string idCardNum) {
		this->idCardNum = idCardNum;
	}

	std::string getName() {
		return this->name;
	}

	std::string getGender() {
		return this->gender;
	}

	int getAge() {
		return this->age;
	}

	std::string getAddress() {
		return this->address;
	}

	std::string getIdCardNum() {
		return this->idCardNum;
	}


public:
	//
	static std::string university;
	static std::string getUniversity() {
		return university;
	}

public:
	Person() {};
	Person(std::string name, std::string gender, int age) {
		this->name = name;
		this->gender = gender;
		this->age = age;
	}
	~Person() {};

};

std::string Person::university = "xidian University";


#endif // !1