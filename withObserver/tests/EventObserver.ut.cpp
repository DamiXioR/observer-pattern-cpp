#include <gtest/gtest.h>
#include "../DragonsEventInformer.hpp"
#include "mocks/MockDarkElvesEventInformer.hpp"
#include "mocks/MockDragonsEventInformer.hpp"
#include "mocks/MockPlayer.hpp"

using namespace ::testing;

struct DarkElvesEventInformerTest : public ::testing::Test {
};

struct DragonsEventInformerTest : public ::testing::Test {
};

struct PlayerTest : public ::testing::Test {
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

TEST_F(PlayerTest, shouldNoticeOnlyRegisterPlayers)
{
    DragonsEventInformer* dragonsInfo = new DragonsEventInformer();
    MockPlayer* mDoomSlayer = new MockPlayer("Doom");
    dragonsInfo->addListener(mDoomSlayer);

    EXPECT_CALL(*mDoomSlayer, updateInformations("respawn of dragons!"));

    dragonsInfo->notifyListeners();
    dragonsInfo->removeListener(mDoomSlayer);

    delete mDoomSlayer;
    delete dragonsInfo;
}
