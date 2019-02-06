
#include "precompiled-header.h"
#include "BinaryTree.h"

TEST(BinaryTreeTest, InsertRoot) {
	
	std::vector<int> expectedResults = { 50, 40, 60, 70, 80};
	BinaryTree tree;
	tree.Insert(50);
	tree.Insert(40);
	tree.Insert(60);
	tree.Insert(70);
	tree.Insert(80);

	auto results = tree.GetPreOrder();
	ASSERT_EQ(expectedResults, results);
}


