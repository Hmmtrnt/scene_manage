#include "DxLib.h"

#include "SceneMain.h"
#include "SceneTitle.h"
#include "SceneTest.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;
}

SceneBase* SceneMain::update()
{
	// ï∂éöÇÃà⁄ìÆ
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 300)
	{
		m_textPosX = 300;
		m_textVecX = -4;
	}

	if (CheckHitKey(KEY_INPUT_A))
	{
		PlaySoundFile("sound/cursor0.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_S))
	{
		PlaySoundFile("sound/cursor1.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_D))
	{
		PlaySoundFile("sound/cursor2.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_F))
	{
		PlaySoundFile("sound/cursor3.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_G))
	{
		PlaySoundFile("sound/cursor4.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_H))
	{
		PlaySoundFile("sound/cursor5.mp3", DX_PLAYTYPE_BACK);
	}
	if (CheckHitKey(KEY_INPUT_J))
	{
		PlaySoundFile("sound/cursor6.mp3", DX_PLAYTYPE_BACK);
	}
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if (padState & PAD_INPUT_3)
	{
		return (new SceneTitle);
	}
	
	return this;
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0,"ÉÅÉCÉìâÊñ ",GetColor(255,255,255));
}