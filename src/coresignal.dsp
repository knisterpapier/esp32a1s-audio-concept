
//import("stdfaust.lib");
//process = dm.zita_rev_fdn_demo;


//other reverb algorythm
import("stdfaust.lib");
//process = dm.fdnrev0_demo(4,3,1);
process = dm.stereo_reverb_tester; 


// own delay
//import("stdfaust.lib");
//own_delay = hslider("own_delay",15000,2000,20000,500);
//dry_wet = hslider("dry_wet",0.5,0,1,0.1);
//process = + <: +~@(own_delay)*0.5*(dry_wet),*(1-dry_wet):> +;


//simple pipeline
//import ("stdfaust.lib");
//process = +;

// own reverbarator
// A = hslider("label",0.5,0.1,0.9,0.05);
// B = hslider("delay",15000,2000,20000,500);
// process = + : (+<:@(B),*(A))~*(A) : +;
			