#pragma once
#include "Node.hpp"
class Document :
	public Node
{
public:
	Document(const std::string& name, Node* parent);
	~Document() = default;

	std::string getColor()const;
	void setColor(const std::string& color);

	std::string getBody()const;
	void setBody(const std::string& body);

	virtual void addChild(Node* child)override;
	virtual void removeChild(Node* child)override;
	std::string appBody(const std::string& body);
private:
	std::string m_color = "white";
	std::string m_body = "I grow up";
};

