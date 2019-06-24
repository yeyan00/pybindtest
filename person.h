
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{

public:
	std::string habbit;             //兴趣爱好

private:
	std::string name;               //姓名
	std::string gender;             //性别
	int age;                        //年龄
	std::string idCardNum;          //身份证号码
	std::string address;            //住址

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