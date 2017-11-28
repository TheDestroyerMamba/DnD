#include "item.hpp"

#include <string>

using namespace std;

//=================================================================== Constructors =================

Item::Item(void){};

Item::Item(Item* item){
	this->setName(item->getName());
	
	this->setQuantity(item->getQuantity());
	
	this->setPrice(item->getPrice());
	
	this->setWeight(item->getWeight());
};

Item::Item(string name, short quantity, int price, float weight){
	this->setName(name);
	
	this->setQuantity(quantity);
	
	this->setPrice(price);
	
	this->setWeight(weight);
};

//=================================================================== Setters and Getters ==========

void Item::setName(string name){
	this->name = name;
};

string Item::getName(void){
	return this->name;
};



void Item::setQuantity(short quantity){
	this->quantity = quantity;
};

short Item::getQuantity(void){
	return this->quantity;
};



void Item::setPrice(int price){
	this->price = price;
};

int Item::getPrice(void){
	return this->price;
};



void Item::setWeight(float weight){
	this->weight = weight;
};

float Item::getWeight(void){
	return this->weight;
};
