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
* 





