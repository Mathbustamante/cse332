#pragma once
#include<memory>
#include<vector>


// forward declaration, needed for friend declaration
class ToDoListInterface;

// abstract base class representing a composite object
class DisplayableComponent {
	friend ToDoListInterface;
public:
	// defined by concrete classes deriving from DisplayableComponent
	virtual void display() = 0;

	virtual std::weak_ptr<DisplayableComponent> getParent();
	virtual std::shared_ptr<DisplayableComponent> getChild(unsigned int);
protected:
	// member variables
	std::vector<std::shared_ptr<DisplayableComponent> > children;
	std::weak_ptr<DisplayableComponent> parent; // weak_ptr to avoid cycles, does not contribute to reference count

	// construction, destruction
	DisplayableComponent(std::shared_ptr<DisplayableComponent>);
	virtual ~DisplayableComponent();

	// composite and traversal functions
	virtual std::shared_ptr<DisplayableComponent> addComponent(std::shared_ptr<DisplayableComponent>);
	virtual std::shared_ptr<DisplayableComponent> removeComponent(unsigned int);
};
