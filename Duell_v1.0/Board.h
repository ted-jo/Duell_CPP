#pragma once
#include "stdafx.h"
#include "Die.h"

class Board
{
public:
	Board();
	~Board();
	void movePieceUp(int, int);
	void movePieceDown(int, int);
	void movePieceLeft(int, int);
	void movePieceRight(int, int);
	void overtakePiece(int, int);
	bool checkOccupiedSpace(int, int, string);
	bool checkPath(int, int, int, int, int);
	bool checkNumSpaces(int, int, int, int);
	vector< vector<Die> > & GetBoard() { return gameboard; };
	void setBoard(vector<vector<Die>>);
private:
	vector< vector<Die> > gameboard;
};

