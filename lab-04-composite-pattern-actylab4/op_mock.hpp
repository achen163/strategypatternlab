#ifndef __OP_MOCK_HPP__
#define __OP_MOCK_HPP__

#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}

class ZeroOpMock: public Base {
	public:
		ZeroOpMock() { };
		
		virtual double evaluate() { return 0; }
		virtual string stringify() { retutrn "0"; }
}

class NegOpMock: public Base {
	public:
		NegOpMock() { };
		
		virtual double evaluate() { return -1; }
		virtual string stringify() { return "-1" }
}

#endif 
