/*基于捂脸猫FaceCat框架 v1.0
上海卷卷猫信息技术有限公司
 */

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__
#pragma once
#include "stdafx.h"
#include "..\\facecat\\include\\xml\\FCUIXml.h"

class MainFrame : public FCUIXml{
public:
	MainFrame();
	virtual ~MainFrame();
public:
	//加载文件
	virtual void loadFile(const String& fileName, FCView *view);
};


#endif