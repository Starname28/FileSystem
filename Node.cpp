#include "stdafx.h"
#include "Node.hpp"


Node::Node(const std::string& name, NodeType type, Node* parent): m_name(name), m_parent(parent), m_type(type)
{
}

Node::~Node()
{
	for (Node* child : m_children)
	{
		delete child;
		child = nullptr;
	}
	m_children.clear();
}

const std::string & Node::getName()const
{
	return m_name;
}

void Node::setName(const std::string & name)
{
	m_name = name;
}

Node * Node::getParent() const
{
	return m_parent;
}

const std::vector<Node*>& Node::getChildren() const
{
	return m_children;
}

NodeType Node::getType() const
{
	return NodeType();
}

void Node::setParent(Node * parent)
{
	m_parent = parent;
}

bool Node::isRoot() const
{
	return (m_parent == nullptr) ? true : false;
}

bool Node::haveChilderen() const
{
	return !m_children.empty();
}

