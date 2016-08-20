typedef struct vec_t
{
	double x;
	double y;
	double z;
} vec_t;

typedef struct quat_t
{
	double r;
	double i;
	double j;
	double k;
} quat_t;

vec_t body_to_sim_vec(vec_t body_coords)
{

}

quat_t body_to_sim_quat(quat_t body_coords)
{

}

vec_t vec_add(vec_t x, vec_t y, double c)
{
	/* computes x + c*y */
}

quat_t quat_add(quat_t x, quat_t y, double c)
{

}

quat_t quat_mul(quat_t x, quat_t y)
{
	
}