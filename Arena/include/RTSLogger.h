#pragma once
#include <Game/GameCommunicator.h>
#include <Game/RTSGame.h>

class RTSLogger : public SGA::GameCommunicator
{
public:
	RTSLogger(SGA::RTSGame& game)
		: GameCommunicator(-1), game(&game)
	{
	}

	void close() override;
	void onGameStateAdvanced() override;

private:
	SGA::RTSGame* game;
};