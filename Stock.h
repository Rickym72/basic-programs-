#include <iostream>
#include <string>


using namespace std;

#ifndef STOCK_H
#define STOCK_H

class Stock
{
public:
	Stock(const string& symbol, const string& name)
	{
		this->symbol = symbol;
		this->name = name;
	}

	string getSymbol() const
	{
		return symbol;
	}

	string getName() const
	{
		return name;
	}

	double getPreviousClosingPrice() const
	{
		return previousClosingPrice;
	}

	double getCurrentPrice() const
	{
		return currentPrice;
	}

	void setSymbol(const string& symbol)
	{
		this->symbol = symbol;
	}

	void setName(const string& name)
	{
		this->name = name;
	}

	void setPreviousClosingPrice(double price)
	{
		this->previousClosingPrice = price;
	}

	void setCurrentPrice(double price)
	{
		this->currentPrice = price;
	}

	double getChangePercent()
	{
		return (currentPrice - previousClosingPrice) / previousClosingPrice;
	}

private:
	string symbol;
	string name;
	double previousClosingPrice;
	double currentPrice;
};
#endif