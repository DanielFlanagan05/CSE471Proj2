#pragma once
#include "afxdialogex.h"


// CScaleCupDlg dialog

class CScaleCupDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CScaleCupDlg)

public:
	CScaleCupDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CScaleCupDlg();
	double m_scale = 1.0;


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCALECUPDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeScale();
};
