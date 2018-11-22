﻿#pragma once
#include "BaseObject.h"
/* đối tượng vật lý là những đối tượng có thể rơi tự do chuyển động nhanh dần, chậm dần đều
	kế thừa từ lớp BaseObject */
class PhysicsObject :
	public BaseObject
{
	/* gia tốc và vận tốc */
	float ax, ay, vx, vy;
	/* cho phép trọng lực hay không */
	bool physicsEnable;
public:
	float getAx();
	float getAy();
	float getVx();
	float getVy();
	virtual void setAx(float ax);
	virtual void setAy(float ay);
	virtual void setVx(float vx);
	virtual void setVy(float vy);

	bool getPhysicsEnable();
	virtual void setPhysicsEnable(bool physicsEnable);

	/* override lại phương thức update của BaseObject */
	void onUpdate(float dt) override;

	PhysicsObject();
	~PhysicsObject();
};
