#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* name;
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage) {
		new char[strlen(aname) + 1];
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() {
		delete[] name;
	}
	void getData() {
		cout << "�̸�: " << name << " " << "�ֹ�: " << id << " " << "����:" << age << endl;
	}

};

int main()
{
	Human h("ȫ�浿", 1, 30);
	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 25), Human("sarin", 4, 35)};
		hary[0].getData();
		hary[1].getData();
		hary[2].getData();


	return 0;
}