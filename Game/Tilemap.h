﻿#pragma once
#include"GameTexture.h"
class Tilemap
{
	/* chiều rộng tile */
	int tileWidth;
	/* chiều dài tile */
	int tileHeight;
	/* số lượng dòng trong matrix */
	int tileRows;
	/* số lượng cột trong matrix */
	int tileColumns;
	/* số lượng cột trong tilesheet */
	int tilesheetColumns;

	/* tilesheet */
	GameTexture* tilesheet;

	/* ma trận tile */
	int** matrix;
public:
	/* tilesheetPath: đường dẫn tilesheet
		matrixPath : đường dẫn file ma trận
	*/
	void Init(const char* tilesheetPath, const char* matrixPath);
	/* folderPath : đường dẫn thư mục chứa ma trận và tilesheet */
	void Init(const char* folderPath);
	Tilemap();
	~Tilemap();
};