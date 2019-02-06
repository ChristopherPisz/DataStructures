#pragma once

#include "DataStructuresLib.h"
#include <vector>

//------------------------------------------------------------------------------
class DATA_STRUCTURES_API BinaryTree
{
public:

	struct Node
	{
		int		m_data;
		Node *	m_left;
		Node *	m_right;

		Node(int data);
	};

	BinaryTree();
	
	void Insert(int value);
	void Remove(int value);

	/// Perform a Breadth First Search
	std::vector<int> GetLevelOrder() const;

	/// Perform a Depth First Search
	std::vector<int> GetPreOrder() const;

private:

	Node * m_root;

	Node * Insert(int value, Node * where);
	void GetPreOrder(Node * node, std::vector<int> & result) const;
	void GetLevelOrder(Node * node, size_t level) const;
};

