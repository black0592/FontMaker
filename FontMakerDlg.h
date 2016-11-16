// FontMakerDlg.h : ͷ�ļ�
#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "bitfont.h"
#include "Draw.h"
#include "Charset.h"
#include "EditBox.h"

// CFontMakerDlg �Ի���
class CFontMakerDlg : public CDialog
{
// ����
public:
	CFontMakerDlg(CWnd* pParent = NULL);	// ��׼���캯��
	enum { IDD = IDD_MAIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

private:
	CEditBox m_ebox;
	CDraw m_draw;
	CBitFont m_bitfont;
	CCharset m_charset;
	HFONT m_hFont;
	WCHAR m_wChar;
	UINT  m_nCharIndex;

// ʵ��
protected:
	HICON m_hIcon;
public:
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	void PaintFont();
	void OnFontChange();
	void OnCharChange();
	void OnCharsetChange();
	BOOL CreateBinFile(CFile* pFile,int mode);
	BOOL CreateCFile(CFile* pFile,int mode);
	DECLARE_MESSAGE_MAP()
	BOOL bInitOK;
	CString m_szCharsetPath;
	CComboBox m_listFontName;
	int m_nFontSize;
	CComboBox m_listFontStyle;
	CComboBox m_listCharset;
	CButton m_btnEdit;
	int m_nFontWidth;
	int m_nFontHeight;
	int m_nOffsetX;
	int m_nOffsetY;
	CStatic m_wndCode;
	CButton m_btnSave;
	CStatic m_wndBitmap;
	CSpinButtonCtrl m_spFontSize;
	CSpinButtonCtrl m_spFontWidth;
	CSpinButtonCtrl m_spFontHeight;
	CSpinButtonCtrl m_spOffsetX;
	CSpinButtonCtrl m_spOffsetY;
	CComboBox m_listFormat;
	afx_msg void OnPaint();
	afx_msg void OnBnClickedBtnPrev();
	afx_msg void OnBnClickedBtnNext();
	afx_msg void OnBnClickedBtnEdit();
	afx_msg void OnBnClickedBtnSave();
	afx_msg void OnCbnSelchangeListFontName();
	afx_msg void OnCbnSelchangeListFontStyle();
	afx_msg void OnEnChangeEditFontSize();
	afx_msg void OnCbnSelchangeListCharset();
	afx_msg void OnBnClickedBtnStd();
	afx_msg void OnBnClickedBtnUser();
	afx_msg void OnEnChangeEditWidth();
	afx_msg void OnEnChangeEditHeight();
	afx_msg void OnEnChangeEditHorz();
	afx_msg void OnEnChangeEditVert();
public:
	afx_msg void OnDestroy();
};