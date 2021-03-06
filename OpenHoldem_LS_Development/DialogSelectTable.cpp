// SelectTableDialog.cpp : implementation file
//

#include "stdafx.h"
#include "OpenHoldem.h"
#include "DialogSelectTable.h"

// CDlgSelectTable dialog

IMPLEMENT_DYNAMIC(CDlgSelectTable, CDialog)

CDlgSelectTable::CDlgSelectTable(CWnd* pParent /*=NULL*/) : CDialog(CDlgSelectTable::IDD, pParent) 
{
}

CDlgSelectTable::~CDlgSelectTable() 
{
}

void CDlgSelectTable::DoDataExchange(CDataExchange* pDX) 
{
	CDialog::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_LIST_SELECT_TABLE, m_List_Select_Table);
	DDX_Control(pDX, IDC_LIST_SELECT_TABLE, m_HSLB);
	DDX_Control(pDX, IDOK, m_OK);
}

BEGIN_MESSAGE_MAP(CDlgSelectTable, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgSelectTable::OnBnClickedOk)
	ON_LBN_DBLCLK(IDC_LIST_SELECT_TABLE, &CDlgSelectTable::OnLbnDblclkListSelectTable)
	ON_LBN_SELCHANGE(IDC_LIST_SELECT_TABLE, &CDlgSelectTable::OnLbnSelchangeListSelectTable)
END_MESSAGE_MAP()

// CDlgSelectTable message handlers
void CDlgSelectTable::OnBnClickedOk() 
{
	selected_item = m_HSLB.GetCurSel();
	OnOK();
}

BOOL CDlgSelectTable::OnInitDialog() 
{
	int			i = 0, N = 0;
	CString		t = "";

	CDialog::OnInitDialog();

	selected_item = -1;

	// Populate listbox
	N = (int) tlist.GetSize();
	for (i=0; i<N; i++)
	{
		t = tlist[i].title + " {" + tlist[i].path + "}";
		m_HSLB.AddString(t);
	}

	m_OK.EnableWindow(false);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CDlgSelectTable::OnLbnDblclkListSelectTable() 
{
	OnBnClickedOk();
}

void CDlgSelectTable::OnLbnSelchangeListSelectTable() 
{
	m_OK.EnableWindow(true);
}
