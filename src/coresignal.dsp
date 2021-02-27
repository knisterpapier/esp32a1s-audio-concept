
//import("stdfaust.lib");
//process = dm.zita_rev_fdn_demo;

// own delay
import("stdfaust.lib");
own_delay = hslider("own_delay",15000,2000,20000,500);
process = + : +~@(own_delay)*0.5;
	

// own reverbarator
// A = hslider("label",0.5,0.1,0.9,0.05);
// B = hslider("delay",15000,2000,20000,500);
// process = + : (+<:@(B),*(A))~*(A) : +;
			