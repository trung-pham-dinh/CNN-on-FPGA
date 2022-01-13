
################################################################
# This is a generated script based on design: Convo_core
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2021.1
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   catch {common::send_gid_msg -ssname BD::TCL -id 2041 -severity "ERROR" "This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."}

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source Convo_core_script.tcl


# The design that will be created by this Tcl script contains the following 
# module references:
# computing_core, load_weight

# Please add the sources of those modules before sourcing this Tcl script.

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set list_projs [get_projects -quiet]
if { $list_projs eq "" } {
   create_project project_1 myproj -part xc7z020clg400-1
   set_property BOARD_PART tul.com.tw:pynq-z2:part0:1.0 [current_project]
}


# CHANGE DESIGN NAME HERE
variable design_name
set design_name Convo_core

# This script was generated for a remote BD. To create a non-remote design,
# change the variable <run_remote_bd_flow> to <0>.

set run_remote_bd_flow 1
if { $run_remote_bd_flow == 1 } {
  # Set the reference directory for source file relative paths (by default 
  # the value is script directory path)
  set origin_dir ./bd

  # Use origin directory path location variable, if specified in the tcl shell
  if { [info exists ::origin_dir_loc] } {
     set origin_dir $::origin_dir_loc
  }

  set str_bd_folder [file normalize ${origin_dir}]
  set str_bd_filepath ${str_bd_folder}/${design_name}/${design_name}.bd

  # Check if remote design exists on disk
  if { [file exists $str_bd_filepath ] == 1 } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2030 -severity "ERROR" "The remote BD file path <$str_bd_filepath> already exists!"}
     common::send_gid_msg -ssname BD::TCL -id 2031 -severity "INFO" "To create a non-remote BD, change the variable <run_remote_bd_flow> to <0>."
     common::send_gid_msg -ssname BD::TCL -id 2032 -severity "INFO" "Also make sure there is no design <$design_name> existing in your current project."

     return 1
  }

  # Check if design exists in memory
  set list_existing_designs [get_bd_designs -quiet $design_name]
  if { $list_existing_designs ne "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2033 -severity "ERROR" "The design <$design_name> already exists in this project! Will not create the remote BD <$design_name> at the folder <$str_bd_folder>."}

     common::send_gid_msg -ssname BD::TCL -id 2034 -severity "INFO" "To create a non-remote BD, change the variable <run_remote_bd_flow> to <0> or please set a different value to variable <design_name>."

     return 1
  }

  # Check if design exists on disk within project
  set list_existing_designs [get_files -quiet */${design_name}.bd]
  if { $list_existing_designs ne "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2035 -severity "ERROR" "The design <$design_name> already exists in this project at location:
    $list_existing_designs"}
     catch {common::send_gid_msg -ssname BD::TCL -id 2036 -severity "ERROR" "Will not create the remote BD <$design_name> at the folder <$str_bd_folder>."}

     common::send_gid_msg -ssname BD::TCL -id 2037 -severity "INFO" "To create a non-remote BD, change the variable <run_remote_bd_flow> to <0> or please set a different value to variable <design_name>."

     return 1
  }

  # Now can create the remote BD
  # NOTE - usage of <-dir> will create <$str_bd_folder/$design_name/$design_name.bd>
  create_bd_design -dir $str_bd_folder $design_name
} else {

  # Create regular design
  if { [catch {create_bd_design $design_name} errmsg] } {
     common::send_gid_msg -ssname BD::TCL -id 2038 -severity "INFO" "Please set a different value to variable <design_name>."

     return 1
  }
}

current_bd_design $design_name

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2090 -severity "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2091 -severity "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports

  # Create ports
  set activate0_0 [ create_bd_port -dir I -from 23 -to 0 activate0_0 ]
  set activate1_0 [ create_bd_port -dir I -from 23 -to 0 activate1_0 ]
  set activate2_0 [ create_bd_port -dir I -from 23 -to 0 activate2_0 ]
  set activate_ready_0 [ create_bd_port -dir I activate_ready_0 ]
  set addr_rst_0 [ create_bd_port -dir I -type rst addr_rst_0 ]
  set clk_0 [ create_bd_port -dir I -type clk clk_0 ]
  set_property -dict [ list \
   CONFIG.ASSOCIATED_RESET {rst_0} \
 ] $clk_0
  set load_start_0 [ create_bd_port -dir I load_start_0 ]
  set out_psum0_0 [ create_bd_port -dir O -from 7 -to 0 out_psum0_0 ]
  set out_psum1_0 [ create_bd_port -dir O -from 7 -to 0 out_psum1_0 ]
  set out_psum2_0 [ create_bd_port -dir O -from 7 -to 0 out_psum2_0 ]
  set out_psum3_0 [ create_bd_port -dir O -from 7 -to 0 out_psum3_0 ]
  set out_psum_vld_0 [ create_bd_port -dir O out_psum_vld_0 ]
  set rst_0 [ create_bd_port -dir I -type rst rst_0 ]
  set weight_done [ create_bd_port -dir O weight_done ]

  # Create instance: blk_mem_gen_0, and set properties
  set blk_mem_gen_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_0 ]
  set_property -dict [ list \
   CONFIG.Byte_Size {8} \
   CONFIG.Coe_File {../../../../../BRAM_init.coe} \
   CONFIG.EN_SAFETY_CKT {true} \
   CONFIG.Enable_32bit_Address {true} \
   CONFIG.Fill_Remaining_Memory_Locations {false} \
   CONFIG.Load_Init_File {true} \
   CONFIG.Register_PortA_Output_of_Memory_Primitives {false} \
   CONFIG.Use_Byte_Write_Enable {true} \
   CONFIG.Use_RSTA_Pin {true} \
   CONFIG.use_bram_block {Stand_Alone} \
 ] $blk_mem_gen_0

  # Create instance: blk_mem_gen_1, and set properties
  set blk_mem_gen_1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_1 ]
  set_property -dict [ list \
   CONFIG.Byte_Size {8} \
   CONFIG.Coe_File {../../../../../BRAM_init.coe} \
   CONFIG.EN_SAFETY_CKT {true} \
   CONFIG.Enable_32bit_Address {true} \
   CONFIG.Load_Init_File {true} \
   CONFIG.Register_PortA_Output_of_Memory_Primitives {false} \
   CONFIG.Use_Byte_Write_Enable {true} \
   CONFIG.Use_RSTA_Pin {true} \
   CONFIG.use_bram_block {Stand_Alone} \
 ] $blk_mem_gen_1

  # Create instance: blk_mem_gen_2, and set properties
  set blk_mem_gen_2 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_2 ]
  set_property -dict [ list \
   CONFIG.Byte_Size {8} \
   CONFIG.Coe_File {../../../../../BRAM_init.coe} \
   CONFIG.EN_SAFETY_CKT {true} \
   CONFIG.Enable_32bit_Address {true} \
   CONFIG.Load_Init_File {true} \
   CONFIG.Register_PortA_Output_of_Memory_Primitives {false} \
   CONFIG.Use_Byte_Write_Enable {true} \
   CONFIG.Use_RSTA_Pin {true} \
   CONFIG.use_bram_block {Stand_Alone} \
 ] $blk_mem_gen_2

  # Create instance: blk_mem_gen_3, and set properties
  set blk_mem_gen_3 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_3 ]
  set_property -dict [ list \
   CONFIG.Byte_Size {8} \
   CONFIG.Coe_File {../../../../../BRAM_init.coe} \
   CONFIG.EN_SAFETY_CKT {true} \
   CONFIG.Enable_32bit_Address {true} \
   CONFIG.Load_Init_File {true} \
   CONFIG.Register_PortA_Output_of_Memory_Primitives {false} \
   CONFIG.Use_Byte_Write_Enable {true} \
   CONFIG.Use_RSTA_Pin {true} \
   CONFIG.use_bram_block {Stand_Alone} \
 ] $blk_mem_gen_3

  # Create instance: computing_core_0, and set properties
  set block_name computing_core
  set block_cell_name computing_core_0
  if { [catch {set computing_core_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $computing_core_0 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: load_weight_0, and set properties
  set block_name load_weight
  set block_cell_name load_weight_0
  if { [catch {set load_weight_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $load_weight_0 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create port connections
  connect_bd_net -net activate0_0_1 [get_bd_ports activate0_0] [get_bd_pins computing_core_0/activate0]
  connect_bd_net -net activate1_0_1 [get_bd_ports activate1_0] [get_bd_pins computing_core_0/activate1]
  connect_bd_net -net activate2_0_1 [get_bd_ports activate2_0] [get_bd_pins computing_core_0/activate2]
  connect_bd_net -net activate_ready_0_1 [get_bd_ports activate_ready_0] [get_bd_pins computing_core_0/activate_ready]
  connect_bd_net -net addr_rst_0_1 [get_bd_ports addr_rst_0] [get_bd_pins load_weight_0/addr_rst]
  connect_bd_net -net blk_mem_gen_0_douta [get_bd_pins blk_mem_gen_0/douta] [get_bd_pins load_weight_0/BRAM_0_dout]
  connect_bd_net -net blk_mem_gen_1_douta [get_bd_pins blk_mem_gen_1/douta] [get_bd_pins load_weight_0/BRAM_1_dout]
  connect_bd_net -net blk_mem_gen_2_douta [get_bd_pins blk_mem_gen_2/douta] [get_bd_pins load_weight_0/BRAM_3_dout]
  connect_bd_net -net blk_mem_gen_3_douta [get_bd_pins blk_mem_gen_3/douta] [get_bd_pins load_weight_0/BRAM_2_dout]
  connect_bd_net -net clk_0_1 [get_bd_ports clk_0] [get_bd_pins computing_core_0/clk] [get_bd_pins load_weight_0/clk]
  connect_bd_net -net computing_core_0_out_psum0 [get_bd_ports out_psum0_0] [get_bd_pins computing_core_0/out_psum0]
  connect_bd_net -net computing_core_0_out_psum1 [get_bd_ports out_psum1_0] [get_bd_pins computing_core_0/out_psum1]
  connect_bd_net -net computing_core_0_out_psum2 [get_bd_ports out_psum2_0] [get_bd_pins computing_core_0/out_psum2]
  connect_bd_net -net computing_core_0_out_psum3 [get_bd_ports out_psum3_0] [get_bd_pins computing_core_0/out_psum3]
  connect_bd_net -net computing_core_0_out_psum_vld [get_bd_ports out_psum_vld_0] [get_bd_pins computing_core_0/out_psum_vld]
  connect_bd_net -net computing_core_0_weight_load_done [get_bd_ports weight_done] [get_bd_pins computing_core_0/weight_load_done] [get_bd_pins load_weight_0/load_done]
  connect_bd_net -net load_start_0_1 [get_bd_ports load_start_0] [get_bd_pins load_weight_0/load_start]
  connect_bd_net -net load_weight_0_BRAM_0_addr [get_bd_pins blk_mem_gen_0/addra] [get_bd_pins load_weight_0/BRAM_0_addr]
  connect_bd_net -net load_weight_0_BRAM_1_addr [get_bd_pins blk_mem_gen_1/addra] [get_bd_pins load_weight_0/BRAM_1_addr]
  connect_bd_net -net load_weight_0_BRAM_2_addr [get_bd_pins blk_mem_gen_3/addra] [get_bd_pins load_weight_0/BRAM_2_addr]
  connect_bd_net -net load_weight_0_BRAM_3_addr [get_bd_pins blk_mem_gen_2/addra] [get_bd_pins load_weight_0/BRAM_3_addr]
  connect_bd_net -net load_weight_0_BRAM_clk [get_bd_pins blk_mem_gen_0/clka] [get_bd_pins blk_mem_gen_1/clka] [get_bd_pins blk_mem_gen_2/clka] [get_bd_pins blk_mem_gen_3/clka] [get_bd_pins load_weight_0/BRAM_clk]
  connect_bd_net -net load_weight_0_BRAM_din [get_bd_pins blk_mem_gen_0/dina] [get_bd_pins blk_mem_gen_1/dina] [get_bd_pins blk_mem_gen_2/dina] [get_bd_pins blk_mem_gen_3/dina] [get_bd_pins load_weight_0/BRAM_din]
  connect_bd_net -net load_weight_0_BRAM_en [get_bd_pins blk_mem_gen_0/ena] [get_bd_pins blk_mem_gen_1/ena] [get_bd_pins blk_mem_gen_2/ena] [get_bd_pins blk_mem_gen_3/ena] [get_bd_pins load_weight_0/BRAM_en]
  connect_bd_net -net load_weight_0_BRAM_rst [get_bd_pins blk_mem_gen_0/rsta] [get_bd_pins blk_mem_gen_1/rsta] [get_bd_pins blk_mem_gen_2/rsta] [get_bd_pins blk_mem_gen_3/rsta] [get_bd_pins load_weight_0/BRAM_rst]
  connect_bd_net -net load_weight_0_BRAM_wen [get_bd_pins blk_mem_gen_0/wea] [get_bd_pins blk_mem_gen_1/wea] [get_bd_pins blk_mem_gen_2/wea] [get_bd_pins blk_mem_gen_3/wea] [get_bd_pins load_weight_0/BRAM_wen]
  connect_bd_net -net load_weight_0_weight0 [get_bd_pins computing_core_0/weight0] [get_bd_pins load_weight_0/weight0]
  connect_bd_net -net load_weight_0_weight1 [get_bd_pins computing_core_0/weight1] [get_bd_pins load_weight_0/weight1]
  connect_bd_net -net load_weight_0_weight2 [get_bd_pins computing_core_0/weight2] [get_bd_pins load_weight_0/weight2]
  connect_bd_net -net load_weight_0_weight3 [get_bd_pins computing_core_0/weight3] [get_bd_pins load_weight_0/weight3]
  connect_bd_net -net load_weight_0_weight_vld [get_bd_pins computing_core_0/weight_load] [get_bd_pins load_weight_0/weight_vld]
  connect_bd_net -net rst_0_1 [get_bd_ports rst_0] [get_bd_pins computing_core_0/rst] [get_bd_pins load_weight_0/rst]

  # Create address segments


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


