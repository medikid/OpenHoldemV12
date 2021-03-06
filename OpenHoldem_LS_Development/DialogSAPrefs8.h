#ifndef INC_DIALOGSAPREFS8_H
#define INC_DIALOGSAPREFS8_H

#include "resource.h"

#include "SAPrefsDialog.h"

// CDlgSAPrefs8 dialog

class CDlgSAPrefs8 : public CSAPrefsSubDlg
{
	DECLARE_DYNAMIC(CDlgSAPrefs8)

public:
	CDlgSAPrefs8(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgSAPrefs8();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	enum { IDD = IDD_SAPREFS8 };

	DECLARE_MESSAGE_MAP()

public:
	CButton m_RecordFrames;
	CButton m_RecordEveryChange;
	CEdit m_MaxFrames;
	CButton m_RecordEveryChangePlaying;
	CSpinButtonCtrl m_MaxFramesSpin;
	afx_msg void OnBnClickedRecordFrames();
	afx_msg void OnBnClickedRecordFramesPlaying();
	afx_msg void OnBnClickedRecordFramesChanging();
	
};


#endif //INC_DIALOGSAPREFS8_H
