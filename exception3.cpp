//in the end there is a list of standard c++ exceptions!

#include "pch.h"
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
	public:
		virtual const char * what() const throw()
		{
			return "Error";
		}

};
class Test
{
	public:
		void wrong() {
			throw MyException();
		}

};
int main()
{
	Test test;
	try
	{
		test.wrong();
		}
	catch (MyException &e)
	{
		cout << e.what();

	}
}
/*
std::exception <exception> interface (debatable if you should catch this)
    std::bad_alloc <new> failure to allocate storage
        std::bad_array_new_length <new> invalid array length
    std::bad_cast <typeinfo> execution of an invalid dynamic-cast
    std::bad_exception <exception> signifies an incorrect exception was thrown
    std::bad_function_call <functional> thrown by "null" std::function
    std::bad_typeid <typeinfo> using typeinfo on a null pointer
    std::bad_weak_ptr <memory> constructing a shared_ptr from a bad weak_ptr
    std::logic_error <stdexcept> errors detectable before the program executes
        std::domain_error <stdexcept> parameter outside the valid range
        std::future_error <future> violated a std::promise/std::future condition
        std::invalid_argument <stdexcept> invalid argument
        std::length_error <stdexcept> length exceeds its maximum allowable size
        std::out_of_range <stdexcept> argument value not in its expected range
    std::runtime_error <stdexcept> errors detectable when the program executes
        std::overflow_error <stdexcept> arithmetic overflow error.
        std::underflow_error <stdexcept> arithmetic underflow error.
        std::range_error <stdexcept> range errors in internal computations
        std::regex_error <regex> errors from the regular expression library.
        std::system_error <system_error> from operating system or other C API
            std::ios_base::failure <ios> Input or output error
*/
