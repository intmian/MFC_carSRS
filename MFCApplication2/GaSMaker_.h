#pragma once


// GaSMaker_ 对话框

class GaSMaker_ : public CDialogEx
{
	DECLARE_DYNAMIC(GaSMaker_)

public:
	GaSMaker_(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~GaSMaker_();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = gasMaker };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
