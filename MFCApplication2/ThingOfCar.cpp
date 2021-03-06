// ThingOfCar.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "ThingOfCar.h"
#include "afxdialogex.h"


// ThingOfCar 对话框

IMPLEMENT_DYNAMIC(ThingOfCar, CDialogEx)

ThingOfCar::ThingOfCar(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_LARGE1, pParent)
{

}

ThingOfCar::~ThingOfCar()
{
}

void ThingOfCar::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ThingOfCar, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ThingOfCar::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &ThingOfCar::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &ThingOfCar::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &ThingOfCar::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &ThingOfCar::OnBnClickedButton5)
END_MESSAGE_MAP()


// ThingOfCar 消息处理程序


void ThingOfCar::OnBnClickedButton1()
{
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"一辆大众宝来汽车起动发动机后，安全气囊警告灯一直亮。");
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(L"使用诊断仪对安全气囊系统进行自诊断，结果有一个故障码00595 碰撞数据储存。清除故障码，但是发现故障码无法清除掉。有维修经验可知，当安全气囊控制模块激活触发功能之后，将会存储故障码00595，以便作为安全气囊控制模块的更换依据，因此在通常情况下，故障码00595不会自行产生，也不会通过诊断仪进行清除。\n    难道该车曾经发生过碰撞事故？咨询车主，得知该车没有发生过碰撞事故。对车辆外观进行检查，没有发现碰撞过的痕迹，由此说明安全气囊控制模块本身损坏的可能性极大。在中央控制台下方找到安全气囊控制模块，检查外观状况和线束插头，没有发现异常现象。检查线路连接情况，正常。将安全气囊控制模块更换掉，并对新的安全气囊控制模块进行编码，完成后试车，安全气囊系统恢复正常，检修工作结束。");
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(L"在实际维修工作中，经常会遇到与安全气囊系统碰撞数据相关的问题，经过总结之后可以归纳为以下两种情况：一是安全气囊控制模块本身存储于碰撞数据相关的故障码；二是其他电控单元储存与安全气囊系统碰撞数据相关的故障码。在实际检修工作中，应以故障码是否能够完全清除、安全气囊警告灯是否能够正常熄灭为检修标准，并以此标准更换安全气囊控制模块或其他相关部件。");
}


void ThingOfCar::OnBnClickedButton4()
{
	CDialogEx::OnOK();
}


void ThingOfCar::OnBnClickedButton3()
{
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"一辆上海别克GL配置了3.8L电控发动机和自动变速器，行驶里程约为80000km，故障现象如下：起动发动机之后，仪表板的安全气囊警告灯一直点亮。");
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(L"使用诊断仪对安全气囊系统进行自诊断，结果无法与安全气囊控制模块（SDM）进行通信联系。对其他系统进行自诊断，诊断仪能够与动力系统、电控制动控制系统、仪表板进行通信联系，而且仪表板储存有一个故障码，内容为内容为“U1016失去与安全气囊控制模块通信”，这说明诊断座的二级串行数据线是正常的，故障很有可能是安全气囊控制模块损坏或线路连接不良造成的。在前排乘客座椅下方找到安全气囊控制模关，拔下线束插头，发现有水浸泡的痕迹。拆下安全气囊控制模块，打开外壳，内部电路板腐蚀严重。进行清洁处理，修复电路板，接好线束插头，试车，故障依旧。检查安全气囊控制模块的电源线、搭铁线和二级串行数据线，没有问题。更换安全气囊控制模块，并进行编码，完成后起动发动机，安全气囊警告灯正常熄灭，检修工作结束。");
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(L"安全气囊控制模块的损坏率比较高，究其原因是安装位置较低，容易受到潮气侵蚀而损坏。此类故障在国产别克车型中比较普遍，如果在检测时发现有通信中断的问题，那么应重点对安全气囊控制模块的安装状况及线路进行检查");
}


void ThingOfCar::OnBnClickedButton2()
{
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"一辆奥迪车在行驶过程中，安全气囊警告灯间歇点亮。为此进行过多次检修，清除故障码之后，当时安全气囊警告灯熄灭，但使用一段时间故障再现。");
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(L"使用诊断仪对安全气囊系统进行自诊断，结果有一个故障码，内容为前排乘客侧面碰撞传感器断路。清除故障码，安全气囊警告灯熄灭。进行路试，当车辆经过一段颠簸路面时，安全气囊警告灯再次点亮。重新进行自诊断，还是原先的故障码。看来故障与前排乘客侧面碰撞传感器的线路连接不良有关，于是在右前翼子板部位找到前排乘客侧面碰撞传感器，检查线束插头及线路连接情况，没有发现异常现象。插好线束插头，清除故障码，安全气囊警告灯又能够正常熄灭。轻轻敲击前排乘客侧面碰撞传感器，安全气囊警告灯突然点亮，由此说明前排乘客侧面碰撞传感器性能不良。进行更换处理，故障彻底排除。");
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(L"前排乘客侧面碰撞传感器是一种加速度传感器，其信号用于精确地触发相关引爆装置。当车辆发生碰撞时，该传感器能够将碰撞方向及撞击力等数据传输送安全气囊控制模块，并由安全气囊控制模块进行分析处理，然后决定是否触发前排乘客一侧的引爆装置。\n    碰撞传感器的导线与安全气囊直接相连，常见的故障形式包括：碰撞传感器本身损坏，线路连接不良，碰撞传感器未授权等。这些故障形式都会导致安全气囊警告灯异常点亮。其中碰撞传感器未授权的故障比较特殊，一般与控制模块编码错误、部件之间功能不匹配有关，在实际维修工作中要多加注意。");
}


void ThingOfCar::OnBnClickedButton5()
{
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(L"一辆海马轿车配置1.3L电控发动机和自动变速器，行使里程约为50000km，起动发动机之后，仪表板的安全气囊警告灯直点亮，诊断座为方。");
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(L"使用诊断仪进行自诊断，选择锦州锦恒安全气囊系统，有两个故障码，内容分别如下:“B9061安全气囊警告灯故障，偶发性故障”，“B9032 蓄电池电压过低，偶发性故障”.清除故障码，安全气囊警告灯熄天。进行试车，安全气囊系统恢复正常，检修工作结束。");
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(L"事后得知该车曾因其他故障检修过仪表板，因此分析可能是维修人员在点火开关打开的情况下拔下仪表板的线束插头，导致安全气囊控制模块记录相关故障码，安全气囊警告灯无法正常熄灭。本例检修工作给我们的启示和下:在对车辆电控系统进行检修时， 如果需要拔、插安全气囊系统的线束插头，那么应新开蓄电池电缆，或者在点大开关美闭的情况下进行操作，这样就能够避免安全气囊控制模换记录故障码。");
}
