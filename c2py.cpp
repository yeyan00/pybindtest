#include "teacher.h"
#include "pybind11/pybind11.h"

namespace py = pybind11;

// pycplus为模块名
PYBIND11_MODULE(pycplus, m) {

	m.doc() = "Simple Class";

	py::class_<Person>(m, "Person")
		.def(py::init())
		.def(py::init<std::string, std::string, int>())
		.def("setName", &Person::setName)
		.def("setAge", &Person::setAge)
		.def("setGender", &Person::setGender)
		.def("setAddress", &Person::setAddress)
		.def("setIdCardNum", &Person::setIdCardNum)
		.def("getName", &Person::getName)
		.def("getAge", &Person::getAge)
		.def("getGender", &Person::getGender)
		.def("getAddress", &Person::getAddress)
		.def("getIdCardNum", &Person::getIdCardNum)
		.def_static("getUniversity", &Person::getUniversity)
		.def_readonly_static("university", &Person::university)
		.def_readwrite("habbit", &Person::habbit)
		.def_property("name", &Person::getName, &Person::setName)
		.def_property("age", &Person::getAge, &Person::setAge)
		.def_property("gender", &Person::getGender, &Person::setGender)
		.def_property("address", &Person::getAddress, &Person::setAddress)
		.def_property("idCardNum", &Person::getIdCardNum, &Person::setIdCardNum);


	/*
	继承
	class_<子类， 父类>
	*/
	py::class_<Teacher, Person>(m, "Teacher")
		.def(py::init())
		.def(py::init<std::string, std::string, int, float, std::string, std::string>())
		.def("setSalary", &Teacher::setSalary)
		.def("setSubject", &Teacher::setSubject)
		.def("setLevel", &Teacher::setLevel)
		.def_property("salary", &Teacher::getSalary, &Teacher::setSalary)
		.def_property("subject", &Teacher::getSubject, &Teacher::setSubject)
		.def_property("level", &Teacher::getLevel, &Teacher::setLevel)
		.def("eat", py::overload_cast<const std::string&  >(&Teacher::eat))
		.def("eat", py::overload_cast<std::string, int>(&Teacher::eat))
		.def("eat", py::overload_cast<>(&Teacher::eat));
}