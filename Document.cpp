#include "stdafx.h"
#include "Document.hpp"


Document::Document(const std::string& name = NULL, Node* parent = nullptr) :
	Node(name, NT_Document, parent)
{
}


std::string Document::getColor()const
{
	return m_color;
}

void Document::setColor(const std::string & color)
{
	m_color = color;
}

std::string Document::getBody() const
{
	return m_body;
}

void Document::setBody(const std::string & body)
{
	m_body = body;
}

void Document::addChild(Node * child)
{
	if (child->getParent() == nullptr)
	{
		m_children.push_back(child);
		child->setParent(this);
	}
}

void Document::removeChild(Node * child)
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

std::string Document::appBody(const std::string & body)
{
	return (m_body + body);
}
