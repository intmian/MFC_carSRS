#pragma once


// picture2 对话框

class picture2 : public CDialogEx
{
	DECLARE_DYNAMIC(picture2)

public:
	picture2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~picture2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = picture_2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
