#ifndef MOCKLATCH_H
#define MOCKLATCH_H
#include "gmock/gmock.h"
#include "ILatch.h"

class MockLatch : public ILatch
{
public:
    MockLatch();

    MOCK_METHOD(bool, isActive, (), (override));
    MOCK_METHOD(DoorStatus, open, (), (override));
    MOCK_METHOD(DoorStatus, close, (), (override));
    MOCK_METHOD(DoorStatus, getDoorStatus, (), (override));
};

#endif // MOCKLATCH_H
