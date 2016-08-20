#include "vessel.h"
#include "object.h"
#include "vectors.h"

typedef struct vessel_t
{
	int vessel_id;
	char *vessel_name[VESSEL_NAME_MAX];
	
	double mass;
	mat_t I0;

	vec_t pos;
	vec_t vel;
	quat_t ang_pos;
	quat_t ang_vel;

	vec_t net_force;
	vec_t net_torque;

	object_t *SOI_obj;
	sock_t vessel_socket;

} vessel_t;

vessel_t *create_vessel(sim_t *simulation, vec_t init_pos, quat_t init_orientation)
{
	vessel_t *new_vessel = NULL;
	if(simulation->n_vessel >= MAX_VESSEL)
	{
		sim_error("Cannot add new vessel\n");
	}

	/* Allocate a new vessel structure */
	new_vessel = malloc(sizeof(vessel_t));

	/* Fill in vessel entries */

	/* recompute SOI */
	new_vessel->SOI_obj = recompute_SOI(simulation, new_vessel);

	/* store new vessel in vessel table */
	new_vessel_id = (simulation->n_vessel)+1;
	new_vessel->vessel_id = new_vessel_id;
	simulation->vessel_table[new_vessel_id] = new_vessel;
	simulation->n_vessel += 1;
	return new_vessel;
}

void destroy_vessel(sim_t *simulation, int vessel_id)
{

}


