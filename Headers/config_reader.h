#ifndef CONFIG_READER_H
#define CONFIG_READER_H

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/foreach.hpp>
#include <string>
#include <set>
#include <exception>
#include <iostream>

class Config_Reader
{
	public:
		// Add_Model
		int resolution;
		int tessellation_level; 
		float view_angle;
		bool optimal_view_angle;
		float radius_tessellated_sphere;
		double scale_factor;
		float leaf_size;
		double cluster_tolerance;
		int min_cluster_size;
		int max_cluster_size;
		double search_radius_mls;
		int mean_k;
		float std_dev_mul_thresh;
		float bad_normals_threshold; 
		bool use_k_search;
		int k_search_normals;
		bool use_radius_search;
		double radius_search_normals;
		bool scale;
		bool largest_cluster_extraction;
		bool downsample;
		bool smooth;
		bool remove_outliers;
		bool view_processed_clouds;
		bool view_normals;
		float normal_magnitude;
		bool view_complete_model;
		bool view_graph;
		bool avg_glb_feature;

		// System
		std::string save_path;
		int pose_visualization_mode;
		int pose_print_mode;
		float hint_view_weight;
		float hint_normal_weight;
		float hint_feature_weight;
		float hint_distinguish_weight;
		double hint_below_plane_threshold;
		int hint_misalignment_angle_threshold;
		bool hint_view_search_results;
		bool hint_normalize_search_results;
		bool hint_print_info;
		bool rdf_enabled;
		std::string rdf_url;
		std::string rdf_repo_name;
		bool use_centered_cluster;
		double centered_threshold;
		int max_id_views;
		int max_pose_views;
		int max_merged_views;
		bool visualize_merged_views;
		std::string web_service_username;
		std::string web_service_password;
		std::string hand_web_service_url;

		/**
		  Loads all parameters associated with adding a new model to the system (Rendering views)
		  @param filename The name of the config file (.ini)
		*/
		void 
		add_model_load_config (const std::string &filename);

		/**
			Loads all parameters associated with the system
			@param filename The name of the config file (.ini)
		 */
		void
		system_load_config (const std::string &filename);
};

#endif