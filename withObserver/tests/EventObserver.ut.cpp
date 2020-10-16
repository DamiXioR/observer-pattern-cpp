#include <gtest/gtest.h>
#include "mocks/MockDarkElvesEventInformer.hpp"
#include "mocks/MockDragonsEventInformer.hpp"

using namespace ::testing;

struct DarkElvesEventInformerTest : public ::testing::Test {
};

struct DragonsEventInformerTest : public ::testing::Test {
};

TEST_F(DarkElvesEventInformerTest, shouldNoticeListeners)
{
    MockDarkElvesEventInformer* mDarkElvesInfo = new MockDarkElvesEventInformer();
    EXPECT_CALL(*mDarkElvesInfo, notifyListeners);

    mDarkElvesInfo->notifyListeners();

    delete mDarkElvesInfo;
}

TEST_F(DragonsEventInformerTest, shouldNoticeListeners)
{
    MockDragonsEventInformer* mDragonsInfo = new MockDragonsEventInformer();
    EXPECT_CALL(*mDragonsInfo, notifyListeners);

    mDragonsInfo->notifyListeners();

    delete mDragonsInfo;
}
