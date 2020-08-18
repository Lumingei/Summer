/*判断点到线段的最近点
分三种情况*/ 
static float distancePtSeg(const float* pt, const float* p, const float* q)
{
	float pqx = q[0] - p[0];
	float pqy = q[1] - p[1];
	float pqz = q[2] - p[2];
	float dx = pt[0] - p[0];
	float dy = pt[1] - p[1];
	float dz = pt[2] - p[2];
	float d = pqx*pqx + pqy*pqy + pqz*pqz;      // qp线段长度的平方
	float t = pqx*dx + pqy*dy + pqz*dz;         // p pt向量 点积 pq 向量（p相当于A点，q相当于B点，pt相当于P点）
	if (d > 0)               // 除数不能为0; 如果为零 t应该也为零。下面计算结果仍然成立。                   
		t /= d;              // 此时t 相当于 上述推导中的 r。
	if (t < 0)
		t = 0;               // 当t（r）< 0时，最短距离即为 pt点 和 p点（A点和P点）之间的距离。
	else if (t > 1)
		t = 1;               // 当t（r）> 1时，最短距离即为 pt点 和 q点（B点和P点）之间的距离。
 
	// t = 0，计算 pt点 和 p点的距离; t = 1, 计算 pt点 和 q点 的距离; 否则计算 pt点 和 投影点 的距离。
	dx = p[0] + t*pqx - pt[0];
	dy = p[1] + t*pqy - pt[1];
	dz = p[2] + t*pqz - pt[2];
	return dx*dx + dy*dy + dz*dz;
}

//参考：https://blog.csdn.net/u012138730/article/details/79779996?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-1.channel_param 
