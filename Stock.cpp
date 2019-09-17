#include "Stock.h"



	Stock::Stock(const string& symbol, const string& name)
	{
		symbol = symbol;
		name = name;
	}

	Stock::string getSymbol() const
	{
		return symbol;
	}

	Stock::string getName() const
	{
		return name;
	}

	double Stock::getPreviousClosingPrice() const
	{
		return previousClosingPrice;
	}

	double Stock::getCurrentPrice() const
	{
		return currentPrice;
	}

	void Stock::setSymbol(const string& symbol)
	{
		this->symbol = symbol;
	}

	void Stock::setName(const string& name)
	{
		this->name = name;
	}

	void Stock::setPreviousClosingPrice(double price)
	{
		this->previousClosingPrice = price;
	}

	void Stock::setCurrentPrice(double price)
	{
		this->currentPrice = price;
	}

	double Stock::getChangePercent()
	{
		return (currentPrice - previousClosingPrice) / previousClosingPrice;
	}

private:
	string symbol;
	string name;
	double previousClosingPrice;
	double currentPrice;
};