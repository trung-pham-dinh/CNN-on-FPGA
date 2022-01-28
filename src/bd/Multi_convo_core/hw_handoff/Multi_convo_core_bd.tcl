
################################################################
# This is a generated script based on design: Multi_convo_core
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
# source Multi_convo_core_script.tcl


# The design that will be created by this Tcl script contains the following 
# module references:
# accumulator

# Please add the sources of those modules before sourcing this Tcl script.


# The design that will be created by this Tcl script contains the following 
# block design container source references:
# Convo_core

# Please add the sources before sourcing this Tcl script.

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
set design_name Multi_convo_core

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
  set BRAM_img_sel_0 [ create_bd_port -dir I BRAM_img_sel_0 ]
  set BRAM_out_dout [ create_bd_port -dir O -from 31 -to 0 BRAM_out_dout ]
  set addr_out [ create_bd_port -dir O -from 31 -to 0 addr_out ]
  set channel_end_0 [ create_bd_port -dir O channel_end_0 ]
  set channel_input_img_0 [ create_bd_port -dir I -from 11 -to 0 channel_input_img_0 ]
  set clk_0 [ create_bd_port -dir I -type clk clk_0 ]
  set en_0 [ create_bd_port -dir I en_0 ]
  set in_psum1_0 [ create_bd_port -dir I -from 7 -to 0 in_psum1_0 ]
  set in_psum2_0 [ create_bd_port -dir I -from 7 -to 0 in_psum2_0 ]
  set in_psum3_0 [ create_bd_port -dir I -from 7 -to 0 in_psum3_0 ]
  set init_signal_0 [ create_bd_port -dir I init_signal_0 ]
  set no_channel_0 [ create_bd_port -dir I -from 10 -to 0 no_channel_0 ]
  set no_entry_0 [ create_bd_port -dir I -from 15 -to 0 no_entry_0 ]
  set out_din [ create_bd_port -dir O -from 31 -to 0 out_din ]
  set out_psum0_0 [ create_bd_port -dir O -from 7 -to 0 out_psum0_0 ]
  set out_psum1_0 [ create_bd_port -dir O -from 7 -to 0 out_psum1_0 ]
  set out_psum2_0 [ create_bd_port -dir O -from 7 -to 0 out_psum2_0 ]
  set out_psum3_0 [ create_bd_port -dir O -from 7 -to 0 out_psum3_0 ]
  set rst_0 [ create_bd_port -dir I -type rst rst_0 ]
  set stride_0 [ create_bd_port -dir I -from 2 -to 0 stride_0 ]
  set weight_end_0 [ create_bd_port -dir O weight_end_0 ]
  set weight_size_1_16_0 [ create_bd_port -dir I -from 31 -to 0 weight_size_1_16_0 ]
  set width_input_img_0 [ create_bd_port -dir I -from 11 -to 0 width_input_img_0 ]

  # Create instance: Convo_core_0, and set properties
  set Convo_core_0 [ create_bd_cell -type container -reference Convo_core Convo_core_0 ]
  set_property -dict [ list \
   CONFIG.ACTIVE_SIM_BD {Convo_core.bd} \
   CONFIG.ACTIVE_SYNTH_BD {Convo_core.bd} \
   CONFIG.ENABLE_DFX {0} \
   CONFIG.LIST_SIM_BD {Convo_core.bd} \
   CONFIG.LIST_SYNTH_BD {Convo_core.bd} \
   CONFIG.LOCK_PROPAGATE {0} \
 ] $Convo_core_0

  # Create instance: accumulator_0, and set properties
  set block_name accumulator
  set block_cell_name accumulator_0
  if { [catch {set accumulator_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $accumulator_0 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: blk_mem_gen_0, and set properties
  set blk_mem_gen_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_0 ]
  set_property -dict [ list \
   CONFIG.Byte_Size {8} \
   CONFIG.EN_SAFETY_CKT {false} \
   CONFIG.Enable_32bit_Address {true} \
   CONFIG.Load_Init_File {false} \
   CONFIG.Register_PortA_Output_of_Memory_Primitives {false} \
   CONFIG.Use_Byte_Write_Enable {true} \
   CONFIG.Use_RSTA_Pin {true} \
   CONFIG.use_bram_block {BRAM_Controller} \
 ] $blk_mem_gen_0

  # Create port connections
  connect_bd_net -net BRAM_img_sel_0_1 [get_bd_ports BRAM_img_sel_0] [get_bd_pins Convo_core_0/BRAM_img_sel]
  connect_bd_net -net Convo_core_0_channel_end [get_bd_ports channel_end_0] [get_bd_pins Convo_core_0/channel_end]
  connect_bd_net -net Convo_core_0_out_psum0 [get_bd_ports out_psum0_0] [get_bd_pins Convo_core_0/out_psum0] [get_bd_pins accumulator_0/in_psum0]
  connect_bd_net -net Convo_core_0_out_psum1 [get_bd_ports out_psum1_0] [get_bd_pins Convo_core_0/out_psum1]
  connect_bd_net -net Convo_core_0_out_psum2 [get_bd_ports out_psum2_0] [get_bd_pins Convo_core_0/out_psum2]
  connect_bd_net -net Convo_core_0_out_psum3 [get_bd_ports out_psum3_0] [get_bd_pins Convo_core_0/out_psum3]
  connect_bd_net -net Convo_core_0_out_psum_vld [get_bd_pins Convo_core_0/out_psum_vld] [get_bd_pins accumulator_0/BRAM_rready]
  connect_bd_net -net Convo_core_0_weight_end [get_bd_ports weight_end_0] [get_bd_pins Convo_core_0/weight_end]
  connect_bd_net -net accum_done_1 [get_bd_pins Convo_core_0/accum_done] [get_bd_pins accumulator_0/accum_done]
  connect_bd_net -net accumulator_0_BRAM_addr [get_bd_ports addr_out] [get_bd_pins accumulator_0/BRAM_addr] [get_bd_pins blk_mem_gen_0/addra]
  connect_bd_net -net accumulator_0_BRAM_clk [get_bd_pins accumulator_0/BRAM_clk] [get_bd_pins blk_mem_gen_0/clka]
  connect_bd_net -net accumulator_0_BRAM_din [get_bd_ports out_din] [get_bd_pins accumulator_0/BRAM_din] [get_bd_pins blk_mem_gen_0/dina]
  connect_bd_net -net accumulator_0_BRAM_en [get_bd_pins accumulator_0/BRAM_en] [get_bd_pins blk_mem_gen_0/ena]
  connect_bd_net -net accumulator_0_BRAM_rst [get_bd_pins accumulator_0/BRAM_rst] [get_bd_pins blk_mem_gen_0/rsta]
  connect_bd_net -net accumulator_0_BRAM_wen [get_bd_pins accumulator_0/BRAM_wen] [get_bd_pins blk_mem_gen_0/wea]
  connect_bd_net -net blk_mem_gen_0_douta [get_bd_ports BRAM_out_dout] [get_bd_pins accumulator_0/BRAM_dout] [get_bd_pins blk_mem_gen_0/douta]
  connect_bd_net -net channel_input_img_0_1 [get_bd_ports channel_input_img_0] [get_bd_pins Convo_core_0/channel_input_img]
  connect_bd_net -net clk_0_1 [get_bd_ports clk_0] [get_bd_pins Convo_core_0/clk] [get_bd_pins accumulator_0/clk]
  connect_bd_net -net en_0_1 [get_bd_ports en_0] [get_bd_pins Convo_core_0/en]
  connect_bd_net -net in_psum1_0_1 [get_bd_ports in_psum1_0] [get_bd_pins accumulator_0/in_psum1]
  connect_bd_net -net in_psum2_0_1 [get_bd_ports in_psum2_0] [get_bd_pins accumulator_0/in_psum2]
  connect_bd_net -net in_psum3_0_1 [get_bd_ports in_psum3_0] [get_bd_pins accumulator_0/in_psum3]
  connect_bd_net -net init_signal_0_1 [get_bd_ports init_signal_0] [get_bd_pins Convo_core_0/init_signal]
  connect_bd_net -net no_channel_0_1 [get_bd_ports no_channel_0] [get_bd_pins accumulator_0/no_channel]
  connect_bd_net -net no_entry_0_1 [get_bd_ports no_entry_0] [get_bd_pins accumulator_0/no_entry]
  connect_bd_net -net rst_0_1 [get_bd_ports rst_0] [get_bd_pins Convo_core_0/rst] [get_bd_pins accumulator_0/rst]
  connect_bd_net -net stride_0_1 [get_bd_ports stride_0] [get_bd_pins Convo_core_0/stride]
  connect_bd_net -net weight_size_1_16_0_1 [get_bd_ports weight_size_1_16_0] [get_bd_pins Convo_core_0/weight_size_1_16]
  connect_bd_net -net width_input_img_0_1 [get_bd_ports width_input_img_0] [get_bd_pins Convo_core_0/width_input_img]

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


