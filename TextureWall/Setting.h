#pragma once
#include"stdafx.h"


struct point3D {
	float x;
	float y;
	float z;
	float xn, yn;//������
	point3D operator + (const point3D& b)
	{
		point3D temp = b;
		temp.x += x;
		temp.y += y;
		temp.z += z;
		return temp;
	}
	point3D operator + (const int& b)
	{
		point3D temp = *this;
		temp.x += b;
		temp.y += b;
		temp.z += b;
		return temp;
	}
	point3D operator - (const point3D& b)
	{
		point3D temp = *this;
		temp.x -= b.x;
		temp.y -= b.y;
		temp.z -= b.z;
		return temp;
	}
	point3D operator - (const int& b)
	{
		point3D temp = *this;
		temp.x -= b;
		temp.y -= b;
		temp.z -= b;
		return temp;
	}
	point3D operator / (const double& b)
	{
		point3D temp = *this;
		temp.x /= b;
		temp.y /= b;
		temp.z /= b;
		return temp;
	}
	point3D operator * (const double& b)
	{
		point3D temp = *this;
		temp.x *= b;
		temp.y *= b;
		temp.z *= b;
		return temp;
	}
};

/*
std::map<std::string, int> texture{
		{ "Pattern0",0 },
		{ "Pattern1",1 },
		{ "Pattern2",2 },
		{ "Pattern3",3 },
		{ "Pattern4",4 },
		{ "Pattern5",5 },
		{ "Pattern6",6 },
		{ "Pattern7",7 },
		{ "Pattern8",8 },
		{ "Pattern9",9 },
};
*/



typedef std::vector<point3D> Layer;
typedef std::vector<Layer> Model;


class Setting {
	public:
	//ש�����
		double g_BrickWidth;//ǽש�Ŀ�� ��λ��mm
		double g_BrickHeight;//ǽש�ĸ߶� ��λ��mm
		double g_BrickThickness;//ǽש�ĺ�� ��λ��mm
		double g_CircleRadius;//�����Ӧ��Բ�İ뾶
		double g_SupportsNumber;//֧�ŵ���Ŀ
		double g_LayerThickness;//���
		int g_LayersNumber;//����
	
	


//��ӡ�����
	std::string g_PrinterID;//��ӡ������
	double g_LineWidth;//�߿�
	double g_PrinterSpeed;//��ӡ���ٶ�
	double g_ExtruderDiameter;//��ӡ��ͷ��ֱ��
	double g_CentralX;//��ӡ������X����
	double g_CentralY;//��ӡ������Y����
	double g_ExtrusionRate;//������

	std::string outputFilePath;//����ļ���·��



	int g_Texture;//��������
	std::string g_TextureName;
	double g_TextureAmplitude;//������������λ��mm
	int g_HorizontalCyclesNumber;//ˮƽ���������������Ŀ
	int g_VerticalCyclesNumber;//��ֱ���������������Ŀ
	int g_PointDensity;//һ�����ڵ���ܶ�

	void Readin_configure(std::string CONGFIGPATH);

};
