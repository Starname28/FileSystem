#pragma once
#include "Document.hpp"
#include "Node.hpp"

class DocumentControler
{
public:
	DocumentControler();
	~DocumentControler();

	Document* createDocument(const std::string& name, const std::string& color, Node* parent);
	Document* move(Document* doc, Node* parent);
	Document* copy(Document* doc, Node* parent);
	Document* rename(Document* doc, const std::string& name);
	std::string read(Document* doc);
	bool deleteDocument(Node* doc);
	Document* write(Document* doc, const std::string& body);
	Document* append(Document* doc, const std::string& body);
	Document* changeColor(Document* doc, const std::string& color);
};

//DocumentControler
//
//+createDocument(name, color, node* parent): Document*
//+move(Document* doc, node* parent):document*
//+copy
//+rename(Document* doc, name)Document*
//+delete(Document*)bool
//+read(Document* doc): string body
//+write(document* doc, string body): document *
//+append(document* doc, string body) : document *
//+changeColor(Document* doc, color): document*