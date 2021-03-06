// knowledgeDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "knowledgeDialog.h"
#include "afxdialogex.h"
#include "picture1.h"
#include "picture2.h"
// knowledgeDialog 对话框

IMPLEMENT_DYNAMIC(knowledgeDialog, CDialogEx)

knowledgeDialog::knowledgeDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(knowledgeLib, pParent)
{
}

knowledgeDialog::~knowledgeDialog()
{
}

void knowledgeDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(knowledgeDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON6, &knowledgeDialog::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON1, &knowledgeDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &knowledgeDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &knowledgeDialog::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &knowledgeDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &knowledgeDialog::OnBnClickedButton5)
END_MESSAGE_MAP()


// knowledgeDialog 消息处理程序


void knowledgeDialog::OnBnClickedButton6()
{
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_HIDE);
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_HIDE);
	CDialogEx::OnOK();
}


void knowledgeDialog::OnBnClickedButton1()
{
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_HIDE);
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(_T("为了在车辆发生碰撞事故时，尽量减小撞车对驾乘人员的伤害程度，现代汽车广泛装备了辅助约束系统（Supplemental Restraint System，SRS），也称辅助乘员保护系统。"));
}


void knowledgeDialog::OnBnClickedButton2()
{
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_HIDE);
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"安全气囊系统主要由传感器、安全气囊系统警告灯、电子控制系统和气囊组件四部分组成。其中电子控制系统主要由SRS ECU、螺旋形电缆、SRS指示灯、SRS电源、线束等组成。气囊组件主要由气体发生器、气囊、衬垫和固定部件等组成。");
}


void knowledgeDialog::OnBnClickedButton3()
{
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"①碰撞方位为正前方或斜向±30°\n②碰撞时，减速度>ECU设定的减速阀值");
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_SHOW);
}


void knowledgeDialog::OnBnClickedButton4()
{
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"从汽车发生碰撞的瞬间开始到气囊泄气收缩的整个过程仅为120ms，其引爆过程可以分为四个阶段：\n⑴碰撞约10ms后，SRS达到引爆极限，SRS组件中的电雷管引爆点火剂并产生大量热量，使充气剂，受热分解，驾驶人尚未动作；\n⑵碰撞约40ms后，气囊完全充满，体积最大，驾驶人向前移动，安全带斜系在驾驶人身上并收紧，部分冲击能量已被吸收；\n⑶碰撞约60ms后，驾驶人头部及身体上部压向气囊，气囊背面的排气孔在气体和人体压力作用下排气，利用排气节流作用吸收人体和气囊之间弹性碰撞产生的动能；\n⑷碰撞约110ms后，大部分气体已从气囊逸出，驾驶人身体上部回到座椅靠背上，车辆前方恢复视野；\n⑸碰撞约120ms后，碰撞危害解除，车速降低至零。");
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_SHOW);
}


void knowledgeDialog::OnBnClickedButton5()
{
	GetDlgItem(IDD_static_pictyre)->ShowWindow(SW_HIDE);
	GetDlgItem(IDD_static_pictyre2)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"\n安全气囊系统的检修注意事项\n安全规范除原设计的线束外，严禁将其他线束接到气囊系统线束上；\n禁止使用万用表以及其他能产生电源的仪器检测点火器；\n存放安全气囊时，应按照气囊向上和连接器向下的方式放置，万一误爆时，这样放置的危险性较小；\n不要试图用工具打开安全气囊的气袋或点火器，并禁止对其加热；\n维修焊接前应拆掉蓄电池正极；连接电气线束前，认真检查线束是否处于断电状态。\n拆卸注意事项\n拆卸注意事项进行任何拆卸工作前，应先进行下列操作。\n①先接通点火开关，检查仪表板上安全气囊指示灯工作是否正常。\n②关闭点火开关，拔出钥匙。断开蓄电池正极，等待2 min以上，如果安全气囊指示灯工作异常，断开蓄电池正极后应该等待10 min，再进行操作。拆卸转向盘时，应使用专用工具将转向柱锁定在“直向前”的位置，以保证控制装置和螺旋线束在安装中不会被损坏。\n③只能安装与原车零部件编号相同的配件，点火器是有失效期的，要遵守配件上注明的使用期限。\n④接通蓄电池后，打开点火开关时，维修人员不要将身体放在安全气囊打开的轨迹之内。\n⑤安装完毕后，检查安全气囊指示灯运行是否正常。");		
}
