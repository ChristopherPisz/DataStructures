
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

//------------------------------------------------------------------------------
void BinaryTree::Insert(int value)
{
	m_root = Insert(value, m_root);
}

//------------------------------------------------------------------------------
BinaryTree::Node * BinaryTree::Insert(int value, Node * node)
{
	if (!node )
	{
		return new Node(value);
	}

	if (value < node->m_data)
	{
		node->m_left = Insert(value, node->m_left);
	}
	else if (value > node->m_data)
	{
		node->m_right = Insert(value, node->m_right);
	}

	// Return the unchanged node
	return node;
}

//------------------------------------------------------------------------------
std::vector<int> BinaryTree::GetPreOrder() const
{
	std::vector<int> result;
	GetPreOrder(m_root, result);
	return result;
}

//------------------------------------------------------------------------------
void BinaryTree::GetPreOrder(Node * node, std::vector<int> & result) const
{
	if (!node)
	{
		return;
	}

	result.push_back(node->m_data);
	GetPreOrder(node->m_left, result);
	GetPreOrder(node->m_right, result);
}

