#include "GoodBasic.h"

GoodBasic::GoodBasic(int id) {
		_itemId = id;
	}

int GoodBasic::getItemId() {
		return _itemId;
	}

void GoodBasic::goodsPublicFunction() {
		std::cout << "Message from parent class\n";
	}