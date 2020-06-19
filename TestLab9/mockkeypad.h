#ifndef MOCKKEYPAD_H
#define MOCKKEYPAD_H
#include "IKeypad.h"
#include "gmock/gmock.h"

class MockKeypad : public IKeypad
{
public:
    MockKeypad();

    MOCK_METHOD(bool, isActive, (), (override));
    MOCK_METHOD(void, wait, (), (override));
    MOCK_METHOD(PasswordResponse, requestPassword, (), (override));
};

#endif // MOCKKEYPAD_H
