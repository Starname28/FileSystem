#include "stdafx.h"
#include "Directory.hpp"


Directory::Directory(const std::string& name, Node* parent):
	Node(name,NT_Directory,parent)
{
}

void Directory::addChild(Node * child)
{
	if (child->getParent() == nullptr)
	{
		m_children.push_back(child);
		child->setParent(this);
	}
}

void Directory::removeChild(Node * child)
{
	int i = 0;
	for (Node* m_child : m_children)
	{
		if (child == m_child)
		{
			m_children.erase(m_children.begin() + i);
			return;
		}
		i++;
	}
}

void Directory::readDirectory()
{
	for (const auto& directory : m_children)
	{
		std::cout << directory << std::endl;
	}
}
void Directory::operator=(Directory & directory)
{
	for (const auto& member : directory.m_children)
	{
		m_children.push_back(member);
	}
}

