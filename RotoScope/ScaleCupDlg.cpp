// ScaleCupDlg.cpp : implementation file
//

#include "pch.h"
#include "RotoScope.h"
#include "afxdialogex.h"
#include "ScaleCupDlg.h"


// CScaleCupDlg dialog

IMPLEMENT_DYNAMIC(CScaleCupDlg, CDialogEx)

CScaleCupDlg::CScaleCupDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SCALECUPDLG, pParent)
	, m_scale(1.0)
{

}

CScaleCupDlg::~CScaleCupDlg()
{
}

void CScaleCupDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SCALECUP, m_scale);
	DDV_MinMaxDouble(pDX, m_scale, 0.1, 10.0);
}


BEGIN_MESSAGE_MAP(CScaleCupDlg, CDialogEx)
END_MESSAGE_MAP()


// CScaleCupDlg message handlers
