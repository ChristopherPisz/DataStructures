
#include "precompiled-header.h"
#include "Searches.h"

TEST(BinarySearchTest, SearchForLastElement) {
	int testArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) -1, 9);
	ASSERT_EQ(index, 9);
}

TEST(BinarySearchTest, SearchForFirstElement) {
	int testArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) -1, 0);
	ASSERT_EQ(index, 0);
}

TEST(BinarySearchTest, SearchForInsideRightElement) {
	int testArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) -1, 8);
	ASSERT_EQ(index, 8);
}

TEST(BinarySearchTest, SearchForInsideLeftElement) {
	int testArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) - 1, 1);
	ASSERT_EQ(index, 1);
}

TEST(BinarySearchTest, SearchForMiddleElement) {
	int testArray[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8};
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) - 1, 4);
	ASSERT_EQ(index, 4);
}

TEST(BinarySearchTest, SearchForLargeDoesNotExist) {
	int testArray[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) - 1, 9);
	ASSERT_EQ(index, -1);
}

TEST(BinarySearchTest, SearchForSmallDoesNotExist) {
	int testArray[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int index = BinarySearch(testArray, 0, sizeof(testArray) / sizeof(int) - 1, 0);
	ASSERT_EQ(index, -1);
}
