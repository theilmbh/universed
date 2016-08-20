typedef struct sim_t 
{
	int N_vessel;
	int N_object;
	vessel_t *vessel_tab[MAX_VESSEL];
	object_t *object_tab[MAX_OBJECT];
	mjd_t sim_time; 
	mjd_t sim_reality_offset;
	mjd_t sim_lag;
} sim_t;

void update_simulation(sim_t* simulation, mjd_t delta_t)
{
	vessel_t *curr_vessel;
	object_t *curr_object;
	/* propagate objects */

	/* propagate vessels */
	for(int vid=0; vid<simulation->N_vessel; vid++)
	{
		curr_vessel = simulation->vessel_tab[vid];
		compute_gravitational_forces(simulation, curr_vessel);
		propagate(curr_vessel);
	}

	/* send messages to vessels to update */

}