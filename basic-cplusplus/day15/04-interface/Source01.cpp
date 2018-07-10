class IShape {
public:
	virtual void Draw() const = 0;
};

/*
An interface is a class that contains only public pure virtual functions.
Other than pure virtual functions, it does not have anything else such as constructor, destructor, data members, etc.

every interface is an abstract class but not every abstract class is an interface.
*/