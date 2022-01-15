#pragma once
#include <iostream>
class GoodBasic
{
private:

	int _itemId;

public:

	GoodBasic(int id) {
		_itemId = id;
	}

	int getItemId() {
		return _itemId;
	}

	void goodsPublicFunction() {
		std::cout << "Message from parent class\n";
	}
};

