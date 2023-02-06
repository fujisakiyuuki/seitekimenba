#include "ChangeScene.h"
#include "DxLib.h"

ChangeScene* ChangeScene::GetInstance()
{
	// ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é
	static ChangeScene instance;

	return &instance;
}

void ChangeScene::Change(char* key, char* oldkey)
{
	if (key[KEY_INPUT_SPACE] == 1 && oldkey[KEY_INPUT_SPACE] == 0)
	{
		SceneNo += 1;

		if (SceneNo > 4)
		{
			SceneNo = 1;
		}

	}
	DrawFormatString(0, 0, GetColor(255, 0, 0), "SceneNo=%d", SceneNo);
}
