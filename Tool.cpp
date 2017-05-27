#include "Tool.h"

Tool::Tool(const int& id, const string & name, const float & price, const int & amount) {
	setID(id);
	setName(name);
	setPrice(price);
	setAmount(amount);
}

void Tool::setID(const int id){
	this->id=id;
}

void Tool::setName(const string name) {
	this->name=name;
}

void Tool::setPrice(const float price) {
	this->price=price;
}

void Tool::setAmount(const int amount) {
	this->amount=amount;
}

int Tool::getID() const{
	return id;
}

string Tool::getName() const {
    return name;
}

float Tool::getPrice() const {
    return price;
}

int Tool::getAmount() const {
    return amount;
}

ostream& operator<<(ostream& os, const Tool& obj){
	os << std::left << setw(3) << obj.id <<  setw(12) << obj.name << setw(6) <<  obj.price << obj.amount << endl;
	return os;
}

Tool::~Tool() {
}

