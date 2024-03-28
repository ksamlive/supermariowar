#pragma once

#include "MovingObject.h"


class MO_SledgeHammer : public IO_MovingObject
{
	public:
		MO_SledgeHammer(gfxSprite *nspr, short x, short y, short iNumSpr, float fVelyX, float fVelyY, short aniSpeed, short iGlobalID, short iTeamID, short iColorID, bool superHammer);
		~MO_SledgeHammer(){};

		void update();
		bool collide(CPlayer * player);
		void explode();
		void draw();

		short playerID;
		short teamID;
		short colorOffset;

	private:
		bool fSuper;
};
