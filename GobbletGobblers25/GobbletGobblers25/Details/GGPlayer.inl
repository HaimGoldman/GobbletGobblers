#include "GGPlayer.h"

inline GGPlayer::GGPlayer(PlayerType type, PlayerColor color)
	:Player<PlayerColor>(type, color)
{
	createGobblers();
	initHand();
}