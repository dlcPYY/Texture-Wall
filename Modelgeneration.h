#pragma once
#include"stdafx.h"
#include"Setting.h"
class Modelgeneration
{
public:
	Modelgeneration();
	~Modelgeneration();

	static Model *Add_back(Model *model, Setting *basicsetting);//添加墙砖的背面
	static Model *Generate_models(Setting *basicsetting);//生成添加纹理的基础模型
	static Model *Move_models(Model *model, double movex, double movey);//移动模型
	static Model *Move_models(Model *model, double movex, double movey, double movez);
	static Layer *Generate_the_first_layer(point3D StartPoint, point3D EndPoint, int PointsNumber, double PerAngle);//生成第一层的采样点
};

