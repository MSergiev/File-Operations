#ifndef TOOL_H
#define TOOL_H

#include <iostream>
#include <iomanip>
using std::string;
using std::ostream;
using std::endl;
using std::setw;

class Tool{
public:
	Tool(const int& id = 0,
			const string& name = "",
			const float& price = 0.0,
			const int& amount = 0);
	void setID(const int id);
	void setName(const string name);
	void setPrice(const float price);
	void setAmount(const int amount);
	int getID() const;
	string getName() const;
	float getPrice() const;
	int getAmount() const;
	friend ostream& operator<<(ostream& os, const Tool& obj);
	~Tool();

private:
	int id;
	string name;
	float price;
	int amount;
};

#endif
