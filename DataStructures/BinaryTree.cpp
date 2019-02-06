
#include "BinaryTree.h"

//------------------------------------------------------------------------------
BinaryTree::Node::Node(int data)
	:
	  m_data(data)
	, m_left(nullptr)
	, m_right(nullptr)
{
}

//------------------------------------------------------------------------------
BinaryTree::BinaryTree()
	:
	m_root(nullptr)
{
}
