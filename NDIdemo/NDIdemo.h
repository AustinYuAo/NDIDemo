
// NDIdemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CNDIdemoApp: 
// �йش����ʵ�֣������ NDIdemo.cpp
//

class CNDIdemoApp : public CWinApp
{
public:
	CNDIdemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CNDIdemoApp theApp;