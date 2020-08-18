/*�жϵ㵽�߶ε������
���������*/ 
static float distancePtSeg(const float* pt, const float* p, const float* q)
{
	float pqx = q[0] - p[0];
	float pqy = q[1] - p[1];
	float pqz = q[2] - p[2];
	float dx = pt[0] - p[0];
	float dy = pt[1] - p[1];
	float dz = pt[2] - p[2];
	float d = pqx*pqx + pqy*pqy + pqz*pqz;      // qp�߶γ��ȵ�ƽ��
	float t = pqx*dx + pqy*dy + pqz*dz;         // p pt���� ��� pq ������p�൱��A�㣬q�൱��B�㣬pt�൱��P�㣩
	if (d > 0)               // ��������Ϊ0; ���Ϊ�� tӦ��ҲΪ�㡣�����������Ȼ������                   
		t /= d;              // ��ʱt �൱�� �����Ƶ��е� r��
	if (t < 0)
		t = 0;               // ��t��r��< 0ʱ����̾��뼴Ϊ pt�� �� p�㣨A���P�㣩֮��ľ��롣
	else if (t > 1)
		t = 1;               // ��t��r��> 1ʱ����̾��뼴Ϊ pt�� �� q�㣨B���P�㣩֮��ľ��롣
 
	// t = 0������ pt�� �� p��ľ���; t = 1, ���� pt�� �� q�� �ľ���; ������� pt�� �� ͶӰ�� �ľ��롣
	dx = p[0] + t*pqx - pt[0];
	dy = p[1] + t*pqy - pt[1];
	dz = p[2] + t*pqz - pt[2];
	return dx*dx + dy*dy + dz*dz;
}

//�ο���https://blog.csdn.net/u012138730/article/details/79779996?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param 
