#pragma once
#include "DMEnum.h"
#include <vector>
#include <string>

class Node
{
public:
	Node(const std::string& name, NodeType type, Node* parent);
	virtual ~Node();

	const std::string& getName()const;
	void setName(const std::string& name);

	Node* getParent()const;
	const std::vector<Node*>& getChildren()const;
	

	NodeType getType()const;
	void setParent(Node* parent);

	virtual void addChild(Node* child) = 0;
	virtual void removeChild(Node* child) = 0;

	bool isRoot()const;
	bool haveChilderen()const;

protected:

	std::string m_name;
	std::vector<Node*> m_children;
	NodeType m_type;
	Node* m_parent;
};

