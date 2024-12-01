#pragma once
#include "afxdialogex.h"


// CPhaserSizeDlg dialog

class CPhaserSizeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPhaserSizeDlg)

public:
	CPhaserSizeDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CPhaserSizeDlg();
	double m_scale = 1.0;


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PHASERSIZEDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnEnChangeScale();
};
