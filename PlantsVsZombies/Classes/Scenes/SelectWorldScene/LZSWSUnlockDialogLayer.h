/**
 *Copyright (c) 2021 LZ.All Right Reserved
 *Author : LZ
 *Date: 2021.2.17
 *Email: 2117610943@qq.com
 */
#pragma once
#include "Scenes/MainMenuScene/LZUnlockDialogLayer.h"

class SWSUnlockDialogLayer : public UnlockDialogLayer
{
public:
	CREATE_FUNC(SWSUnlockDialogLayer);
	virtual bool init() override;

CC_CONSTRUCTOR_ACCESS:
	SWSUnlockDialogLayer();

protected:
	virtual void createDiglog() override;	  /* �����Ի��� */
	virtual void createText() override;       /* �����ı� */
	virtual void deleteDialog() override;     /* ɾ���Ի��� */
	virtual void createButtons() override;    /* ������ť */

public:
	static unsigned int unlockNeedNumbers;
};