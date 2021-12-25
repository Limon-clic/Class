//Райков ИВТ-20
#include "pch.h"
#include "../Класс/LaptopBag.h"
/*
  EXPECT_EQ(1, 1);		// эквиваленция
  EXPECT_TRUE(true);	// истинность
*/

TEST(LaptopBag, Height) {
	LaptopBag b;
	b.set_height(200);
	EXPECT_EQ(b.get_height(), 200);
}

TEST(LaptopBag, Material) {
	LaptopBag b;
	b.set_material("мифрил");
	EXPECT_EQ(b.get_material(), "мифрил");
}

TEST(LaptopBag, Length) {
	LaptopBag b;
	b.set_length(123);
	EXPECT_EQ(b.get_length(), 123);
}


TEST(LaptopBag, Pocket) {
	LaptopBag b;
	b.set_pocket(6);
	EXPECT_EQ(b.get_pocket(), 6);
}

TEST(LaptopBag, Weight) {
	LaptopBag b;
	b.set_weight(35);
	EXPECT_EQ(b.get_weight(), 35);
}

TEST(LaptopBag, Width) {
	LaptopBag b;
	b.set_width(40);
	EXPECT_EQ(b.get_width(), 40);
}