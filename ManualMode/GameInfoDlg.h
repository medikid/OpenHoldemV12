#pragma once
#include "afxwin.h"
#include "resource.h"

// CGameInfoDlg dialog

class CGameInfoDlg : public CDialog {

public:
	CGameInfoDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CGameInfoDlg();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();

	// Dialog Data
	enum { IDD = IDD_GAMEINFO };
	CEdit m_SmallBlind;
	CEdit m_BigBlind;
	CEdit m_BigBet;
	CEdit m_Ante;
	CComboBox m_GameType;
	CComboBox m_Network;
	CButton m_Tournament;

	CString	m_sblind, m_bblind, m_bigbet, m_ante, m_network;
	int		m_gametype;
	bool	m_tournament;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	WINDOWPLACEMENT *pPlacement; 

	DECLARE_MESSAGE_MAP()
};
