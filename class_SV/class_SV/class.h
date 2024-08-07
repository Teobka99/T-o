#include<string>
#include<vector>

using namespace std;

class person
{
private:

	int pid;
	int age;
	string ho;
	string dem;
	string ten;
	string gioitinh;
	string address;
	string phone;

public:
	static int id;
	person();
	person(int, int, string, string, string, string, string, string);

	void setid(int);
	void setage(int);
	void setho(string);
	void setdem(string);
	void setten(string);
	void setgioitinh(string);
	void setaddress(string);
	void setphone(string);

	int getid();

	int getage();

	string getho();

	string getdem();

	string getten();

	string getgioitinh();

	string getaddress();

	string getphone();

	void show();
};

