## Notes from learncpp.com

* Just like a struct declaration, a class declaration does not allocate any memory. It only defines what the class looks like.
* Class (and struct) definitions are like a blueprint -- they describe what the resulting object will look like, but they do not actually create the object. To actually create an object of the class, a variable of that class type must be defined:
* Functions defined inside of a class are called member functions (or sometimes methods). Member functions can be defined inside or outside of the class definition.
* All member function calls must be associated with an object of the class. When we call “today.print()”, we’re telling the compiler to call the print() member function, associated with the today object. In this way, the associated object is essentially implicitly passed to the member function. For this reason, it is often called the implicit object.
* Using the “m_” prefix for member variables helps distinguish member variables from function parameters or local variables inside member functions.
* By convention, class names should begin with an upper-case letter.
* With normal non-member functions, a function can’t call a function that’s defined “below” it (without a forward declaration). With member functions, this limitation doesn’t apply:
* Use the struct keyword for data-only structures. Use the class keyword for objects that have both data and functions.
* The class keyword lets us create a custom type in C++ that can contain both member variables and member functions. Classes form the basis for Object-oriented programming


* Public members are members of a struct or class that can be accessed from outside of the struct or class.
* by default, all members of a class are private. Private members are members of a class that can only be accessed by other members of the class. Because main() is not a member of DateClass, it does not have access to date’s private members.
* The public keyword, along with the following colon, is called an access specifier. Access specifiers determine who has access to the members that follow the specifier.
* C++ provides 3 different access specifier keywords: public, private, and protected.
* In general, member variables are usually made private, and member functions are usually made public.
* The group of public members of a class are often referred to as a public interface. Because only public members can be accessed from outside of the class, the public interface defines how programs using the class will interact with the class.
* One nuance of C++ that is often missed or misunderstood is that access control works on a per-class basis, not a per-object basis. This means that when a function has access to the private members of a class, it can access the private members of any object of that class type that it can see.
* we can talk about the actual differences between a class and a struct in C++. A class defaults its members to private. A struct defaults its members to public. That’s it!


* In object-oriented programming, Encapsulation (also called information hiding) is the process of keeping the details about how an object is implemented hidden away from users of the object. Instead, users of the object access the object through a public interface. In this way, users are able to use the object without having to understand how it is implemented.
* In C++, we implement encapsulation via access specifiers. Typically, all member variables of the class are made private (hiding the implementation details), and most member functions are made public (exposing an interface for the user).
* Benefit: encapsulated classes are easier to use and reduce the complexity of your programs
* Benefit: encapsulated classes help protect your data and prevent misuse
* Benefit: encapsulated classes are easier to change
* Benefit: encapsulated classes are easier to debug
* The primary benefit is that encapsulation allows us to use a class without having to know how it was implemented. This makes it a lot easier to use classes we’re not familiar with.


* An access function is a short public function whose job is to retrieve or change the value of a private member variable.
* Access functions typically come in two flavors: getters and setters. Getters (also sometimes called accessors) are functions that return the value of a private member variable. Setters (also sometimes called mutators) are functions that set the value of a private member variable.
* Getters should provide “read-only” access to data. Getters should return by value or const reference.


* A constructor is a special kind of class member function that is automatically called when an object of that class is instantiated. Constructors are typically used to initialize member variables of the class to appropriate default or user-provided values, or to do any setup steps necessary for the class to be used (e.g. open a file or database).
* Constructors must have the same name as the class (with the same capitalization)
* Constructors have no return type (not even void)
* A constructor that takes no parameters (or has parameters that all have default values) is called a default constructor. The default constructor is called if no user-provided initialization values are provided.
* If your class has no constructors, C++ will automatically generate a public default constructor for you. This is sometimes called an implicit constructor (or implicitly generated constructor).
* If you have constructors in your class and need a default constructor that does nothing, use = default.





