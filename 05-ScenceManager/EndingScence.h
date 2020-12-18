#pragma once
#include "Game.h"
#include "Textures.h"
#include "Scence.h"
#include "GameObject.h"
class CEndingScence : public CScene
{
protected:
	void _ParseSection_TEXTURES(string line);
	void _ParseSection_SPRITES(string line);
	void _ParseSection_ANIMATIONS(string line);
	void _ParseSection_ANIMATION_SETS(string line);
	void _ParseSection_OBJECTS(string line);

public:

	CEndingScence(int id, LPCWSTR filePath);

	virtual void Load() {};
	virtual void Load(int _alive = 0, int _power = 0);
	virtual void Update(DWORD dt);
	virtual void Render();
	virtual void Unload();
};

class CEndingScenceKeyHandler : public CScenceKeyHandler
{
public:
	virtual void KeyState(BYTE* states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);
	CEndingScenceKeyHandler(CScene* s) :CScenceKeyHandler(s) {};
};

