#pragma once
#include"stdafx.h"
#include"Setting.h"
class Modelgeneration
{
public:
	Modelgeneration();
	~Modelgeneration();

	static Model *Add_back(Model *model, Setting *basicsetting);//���ǽש�ı���
	static Model *Generate_models(Setting *basicsetting);//�����������Ļ���ģ��
	static Layer *Generate_the_first_layer(point3D StartPoint, point3D EndPoint, int PointsNumber, double PerAngle);//���ɵ�һ��Ĳ�����
};

