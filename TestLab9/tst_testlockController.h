#ifndef TST_TESTDIVISIONBYZERO_H
#define TST_TESTDIVISIONBYZERO_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mockkeypad.h"
#include "mocklatch.h"
#include "lockcontroller.h"
#include "ILatch.h"

using namespace testing;

TEST(LockControllerTest, TestKeypadWaitCallOne)
{
    MockKeypad keypad;
    MockLatch latch;

    EXPECT_CALL(keypad, wait()).Times(AtLeast(1));

    LockController controller(&keypad, &latch);

    controller.wait();
}

TEST(LockControllerTest, TestDoorClose)
{
    MockKeypad keypad;
    MockLatch latch;

    EXPECT_CALL(latch, getDoorStatus()).WillOnce(Return(DoorStatus::CLOSE));

    LockController controller(&keypad, &latch);

    EXPECT_FALSE(controller.isDoorOpen());
}


TEST(LockControllerTest, TestDoorOpen)
{
    MockKeypad keypad;
    MockLatch latch;

    EXPECT_CALL(latch, getDoorStatus()).WillOnce(Return(DoorStatus::OPEN));

    LockController controller(&keypad, &latch);

    EXPECT_TRUE(controller.isDoorOpen());
}


TEST(LockControllerTest, TestUnlockDoor)
{
    MockKeypad keypad;
    MockLatch latch;

     EXPECT_CALL(latch, open()).WillOnce(Return(DoorStatus::OPEN));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.unlockDoor(), DoorStatus::OPEN);
}


TEST(LockControllerTest, TestLockDoor)
{
    MockKeypad keypad;
    MockLatch latch;

     EXPECT_CALL(latch, close()).WillOnce(Return(DoorStatus::CLOSE));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.lockDoor(), DoorStatus::OPEN);
}

TEST(LockControllerTest, Test6)
{
    MockKeypad keypad;
    MockLatch latch;

    EXPECT_CALL(latch, isActive()).WillOnce(Return(true));
    EXPECT_CALL(keypad, isActive()).WillOnce(Return(true));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.hardWareCheck(), HardWareStatus::OK);
}


TEST(LockControllerTest, Test7)
{
    MockLatch latch;

    EXPECT_CALL(latch, isActive()).Times(AtLeast(0)).WillOnce(Return(true));

    LockController controller(nullptr, &latch);

    EXPECT_EQ(controller.hardWareCheck(), HardWareStatus::ERROR);
}

TEST(LockControllerTest, Test8)
{
    MockLatch latch;
    MockKeypad keypad;

    EXPECT_CALL(latch, isActive()).Times(AtLeast(0)).WillOnce(Return(false));
     EXPECT_CALL(keypad, isActive()).Times(AtLeast(0)).WillOnce(Return(true));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.hardWareCheck(), HardWareStatus::ERROR);
}

TEST(LockControllerTest, Test9)
{
    MockLatch latch;
    MockKeypad keypad;

    PasswordResponse response;
    response.password = "0000";
    response.status = PasswordResponse::Status::OK;
    EXPECT_CALL(keypad, requestPassword()).Times(1).WillOnce(Return(response));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.isCorrectPassword(), true);
}

TEST(LockControllerTest, Test10)
{
    MockLatch latch;
    MockKeypad keypad;

    PasswordResponse response;
    response.password = "1234";
    response.status = PasswordResponse::Status::OK;
    EXPECT_CALL(keypad, requestPassword()).Times(1).WillOnce(Return(response));

    LockController controller(&keypad, &latch);

    EXPECT_EQ(controller.isCorrectPassword(), false);
}

TEST(LockControllerTest, Test11)
{
    MockLatch latch;
    MockKeypad keypad;

    PasswordResponse response;
    response.password = "0000";
    response.status = PasswordResponse::Status::OK;
    EXPECT_CALL(keypad, requestPassword()).Times(2).WillOnce(Return(response));

    LockController controller(&keypad, &latch);

    controller.resetPassword();
}
#endif // TST_TESTDIVISIONBYZERO_H
