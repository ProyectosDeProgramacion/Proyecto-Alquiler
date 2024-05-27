// (.hpp) EXCEPTIONS

#pragma once
#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <stdexcept>
#include <exception>
using namespace std;

class ExceptionError : public exception { // General exception.
public:
    ExceptionError(const char* message) : exception(message) {}
};

// They all derive from the ExceptionErrror.
// It shows all the exceptions for each particular case that will later be shown in the classes related to them.
class ExceptionReadingFile : public ExceptionError {
public:
    ExceptionReadingFile() : ExceptionError("Error reading the file.") {}
};

class ExceptionWritingFile : public ExceptionError {
public:
    ExceptionWritingFile() : ExceptionError("Error writing the file.") {}
};

class ExceptionLogin : public ExceptionError {
public:
    ExceptionLogin() : ExceptionError("Error in user or password imposed.") {}
};

#endif // !EXCEPTIONS_HPP

