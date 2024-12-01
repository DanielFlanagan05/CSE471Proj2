// CPhaserSizeDlg.cpp : implementation file
//

#include "pch.h"
#include "RotoScope.h"
#include "afxdialogex.h"
#include "CPhaserSizeDlg.h"


// CPhaserSizeDlg dialog

IMPLEMENT_DYNAMIC(CPhaserSizeDlg, CDialogEx)

CPhaserSizeDlg::CPhaserSizeDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PHASERSIZEDLG, pParent)
	, m_scale(1.0) 
{
}
CPhaserSizeDlg::~CPhaserSizeDlg()
{
}

void CPhaserSizeDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_SCALE, m_scale);
    DDV_MinMaxDouble(pDX, m_scale, 0.1, 10.0);
}


BEGIN_MESSAGE_MAP(CPhaserSizeDlg, CDialogEx)
	ON_EN_CHANGE(IDC_SCALE, &CPhaserSizeDlg::OnEnChangeScale)
END_MESSAGE_MAP()


// CPhaserSizeDlg message handlers


void CPhaserSizeDlg::OnEnChangeScale()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
