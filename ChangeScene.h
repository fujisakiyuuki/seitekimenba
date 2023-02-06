#pragma once
class ChangeScene
{
private:
	// コンストラクタをprivateにする
	ChangeScene() {};
	// デストラクタをprivateにする
	~ChangeScene() {};

	int SceneNo = 1;

public:
	// コピーコンストラクタを無効にする
	ChangeScene(const ChangeScene& obj) = delete;
	// 代入演算子を無効にする
	ChangeScene& operator=(const ChangeScene& obj) = delete;

	static ChangeScene* GetInstance();

	void Change(char* key, char* oldkey);
};

