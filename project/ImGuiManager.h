#pragma once
#include "DirectXCommon.h"
#include "WinApp.h"
class ImGuiManager
{
public:

	// 初期化
	void Initialize(DirectXCommon* dxCommon, WinApp* winapp);

	// 終了
	void Finalize();

	// Imgui受付開始
	void Begin();

	// Imgui受付終了
	void End();

	// 描画
	void Draw();

private:
	Microsoft::WRL::ComPtr<ID3D12DescriptorHeap>srvHeap_;

	DirectXCommon* dxCommon_ = nullptr;
	WinApp* winapp_ = nullptr;
};