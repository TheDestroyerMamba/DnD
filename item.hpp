#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

using namespace std;

class Item {
	private:
		string name;
		
		short quantity;
		int price;
		float weight;
	
	public:
		Item(void);
		Item(Item* item);
		Item(string name, short quantity, int price, float weight);
		
		void setName(string name);
		string getName(void);
		
		void setQuantity(short quantity);
		short getQuantity(void);
		
		void setPrice(int price);
		int getPrice(void);
		
		void setWeight(float weight);
		float getWeight(void);
};

#endif
