#pragma once

#include "DataStructuresLib.h"

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

private:

	Node * m_root;
};

