
################################################################
# This is a generated script based on design: Multi_accumulator_inst_0
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
# source Multi_accumulator_inst_0_script.tcl


# The design that will be created by this Tcl script contains the following 
# module references:
# accumulator, accumulator, accumulator, accumulator, and_gate_accum, and_gate_accum

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
set design_name Multi_accumulator_inst_0

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
  create_bd_design -dir -bdsource D:/Documents/Xilinx/CNN_FPGA/Vivado/src/bd/Multi_accumulator/Multi_accumulator.bd $str_bd_folder $design_name
} else {

  # Create regular design
  if { [catch {create_bd_design -bdsource D:/Documents/Xilinx/CNN_FPGA/Vivado/src/bd/Multi_accumulator/Multi_accumulator.bd $design_name} errmsg] } {
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
  set BRAM_out_AXI_0 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:bram_rtl:1.0 BRAM_out_AXI_0 ]

  set BRAM_out_AXI_1 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:bram_rtl:1.0 BRAM_out_AXI_1 ]

  set BRAM_out_AXI_2 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:bram_rtl:1.0 BRAM_out_AXI_2 ]

  set BRAM_out_AXI_3 [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:bram_rtl:1.0 BRAM_out_AXI_3 ]


  # Create ports
  set BRAM_addr_sim [ create_bd_port -dir O -from 31 -to 0 BRAM_addr_sim ]
  set WxW_out [ create_bd_port -dir I -from 15 -to 0 WxW_out ]
  set accum_done [ create_bd_port -dir O accum_done ]
  set bram_dout_0 [ create_bd_port -dir O -from 31 -to 0 bram_dout_0 ]
  set bram_dout_1 [ create_bd_port -dir O -from 31 -to 0 bram_dout_1 ]
  set bram_dout_2 [ create_bd_port -dir O -from 31 -to 0 bram_dout_2 ]
  set bram_dout_3 [ create_bd_port -dir O -from 31 -to 0 bram_dout_3 ]
  set clk [ create_bd_port -dir I -type clk clk ]
  set mac_done_0 [ create_bd_port -dir I mac_done_0 ]
  set mac_done_1 [ create_bd_port -dir I mac_done_1 ]
  set mac_done_2 [ create_bd_port -dir I mac_done_2 ]
  set mac_done_3 [ create_bd_port -dir I mac_done_3 ]
  set no_channel_out [ create_bd_port -dir I -from 10 -to 0 no_channel_out ]
  set psum0_0 [ create_bd_port -dir I -from 7 -to 0 psum0_0 ]
  set psum0_1 [ create_bd_port -dir I -from 7 -to 0 psum0_1 ]
  set psum0_2 [ create_bd_port -dir I -from 7 -to 0 psum0_2 ]
  set psum0_3 [ create_bd_port -dir I -from 7 -to 0 psum0_3 ]
  set psum1_0 [ create_bd_port -dir I -from 7 -to 0 psum1_0 ]
  set psum1_1 [ create_bd_port -dir I -from 7 -to 0 psum1_1 ]
  set psum1_2 [ create_bd_port -dir I -from 7 -to 0 psum1_2 ]
  set psum1_3 [ create_bd_port -dir I -from 7 -to 0 psum1_3 ]
  set psum2_0 [ create_bd_port -dir I -from 7 -to 0 psum2_0 ]
  set psum2_1 [ create_bd_port -dir I -from 7 -to 0 psum2_1 ]
  set psum2_2 [ create_bd_port -dir I -from 7 -to 0 psum2_2 ]
  set psum2_3 [ create_bd_port -dir I -from 7 -to 0 psum2_3 ]
  set psum3_0 [ create_bd_port -dir I -from 7 -to 0 psum3_0 ]
  set psum3_1 [ create_bd_port -dir I -from 7 -to 0 psum3_1 ]
  set psum3_2 [ create_bd_port -dir I -from 7 -to 0 psum3_2 ]
  set psum3_3 [ create_bd_port -dir I -from 7 -to 0 psum3_3 ]
  set rst [ create_bd_port -dir I rst ]

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
  
  # Create instance: accumulator_1, and set properties
  set block_name accumulator
  set block_cell_name accumulator_1
  if { [catch {set accumulator_1 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $accumulator_1 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: accumulator_2, and set properties
  set block_name accumulator
  set block_cell_name accumulator_2
  if { [catch {set accumulator_2 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $accumulator_2 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: accumulator_3, and set properties
  set block_name accumulator
  set block_cell_name accumulator_3
  if { [catch {set accumulator_3 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $accumulator_3 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: and_gate_accum_0, and set properties
  set block_name and_gate_accum
  set block_cell_name and_gate_accum_0
  if { [catch {set and_gate_accum_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $and_gate_accum_0 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: and_gate_accum_1, and set properties
  set block_name and_gate_accum
  set block_cell_name and_gate_accum_1
  if { [catch {set and_gate_accum_1 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2095 -severity "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $and_gate_accum_1 eq "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2096 -severity "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: blk_mem_gen_0, and set properties
  set blk_mem_gen_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_0 ]
  set_property -dict [ list \
   CONFIG.Assume_Synchronous_Clk {true} \
   CONFIG.EN_SAFETY_CKT {false} \
   CONFIG.Enable_B {Use_ENB_Pin} \
   CONFIG.Memory_Type {True_Dual_Port_RAM} \
   CONFIG.Port_B_Clock {100} \
   CONFIG.Port_B_Enable_Rate {100} \
   CONFIG.Port_B_Write_Rate {50} \
   CONFIG.Use_RSTB_Pin {true} \
 ] $blk_mem_gen_0

  # Create instance: blk_mem_gen_1, and set properties
  set blk_mem_gen_1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_1 ]
  set_property -dict [ list \
   CONFIG.Assume_Synchronous_Clk {true} \
   CONFIG.EN_SAFETY_CKT {false} \
   CONFIG.Enable_B {Use_ENB_Pin} \
   CONFIG.Memory_Type {True_Dual_Port_RAM} \
   CONFIG.Port_B_Clock {100} \
   CONFIG.Port_B_Enable_Rate {100} \
   CONFIG.Port_B_Write_Rate {50} \
   CONFIG.Use_RSTB_Pin {true} \
 ] $blk_mem_gen_1

  # Create instance: blk_mem_gen_2, and set properties
  set blk_mem_gen_2 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_2 ]
  set_property -dict [ list \
   CONFIG.Assume_Synchronous_Clk {true} \
   CONFIG.EN_SAFETY_CKT {false} \
   CONFIG.Enable_B {Use_ENB_Pin} \
   CONFIG.Memory_Type {True_Dual_Port_RAM} \
   CONFIG.Port_B_Clock {100} \
   CONFIG.Port_B_Enable_Rate {100} \
   CONFIG.Port_B_Write_Rate {50} \
   CONFIG.Use_RSTB_Pin {true} \
 ] $blk_mem_gen_2

  # Create instance: blk_mem_gen_3, and set properties
  set blk_mem_gen_3 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_gen_3 ]
  set_property -dict [ list \
   CONFIG.Assume_Synchronous_Clk {true} \
   CONFIG.EN_SAFETY_CKT {false} \
   CONFIG.Enable_B {Use_ENB_Pin} \
   CONFIG.Memory_Type {True_Dual_Port_RAM} \
   CONFIG.Port_B_Clock {100} \
   CONFIG.Port_B_Enable_Rate {100} \
   CONFIG.Port_B_Write_Rate {50} \
   CONFIG.Use_RSTB_Pin {true} \
 ] $blk_mem_gen_3

  # Create interface connections
  connect_bd_intf_net -intf_net BRAM_PORTB_0_1 [get_bd_intf_ports BRAM_out_AXI_0] [get_bd_intf_pins blk_mem_gen_0/BRAM_PORTB]
  connect_bd_intf_net -intf_net BRAM_PORTB_1_1 [get_bd_intf_ports BRAM_out_AXI_1] [get_bd_intf_pins blk_mem_gen_1/BRAM_PORTB]
  connect_bd_intf_net -intf_net BRAM_PORTB_2_1 [get_bd_intf_ports BRAM_out_AXI_2] [get_bd_intf_pins blk_mem_gen_2/BRAM_PORTB]
  connect_bd_intf_net -intf_net BRAM_PORTB_3_1 [get_bd_intf_ports BRAM_out_AXI_3] [get_bd_intf_pins blk_mem_gen_3/BRAM_PORTB]

  # Create port connections
  connect_bd_net -net Net [get_bd_ports rst] [get_bd_pins accumulator_0/rst] [get_bd_pins accumulator_1/rst] [get_bd_pins accumulator_2/rst] [get_bd_pins accumulator_3/rst]
  connect_bd_net -net Net1 [get_bd_ports WxW_out] [get_bd_pins accumulator_0/no_entry] [get_bd_pins accumulator_1/no_entry] [get_bd_pins accumulator_2/no_entry] [get_bd_pins accumulator_3/no_entry]
  connect_bd_net -net Net2 [get_bd_ports no_channel_out] [get_bd_pins accumulator_0/no_channel] [get_bd_pins accumulator_1/no_channel] [get_bd_pins accumulator_2/no_channel] [get_bd_pins accumulator_3/no_channel]
  connect_bd_net -net accumulator_0_BRAM_addr [get_bd_ports BRAM_addr_sim] [get_bd_pins accumulator_0/BRAM_addr] [get_bd_pins blk_mem_gen_0/addra]
  connect_bd_net -net accumulator_0_BRAM_clk [get_bd_pins accumulator_0/BRAM_clk] [get_bd_pins blk_mem_gen_0/clka]
  connect_bd_net -net accumulator_0_BRAM_din [get_bd_pins accumulator_0/BRAM_din] [get_bd_pins blk_mem_gen_0/dina]
  connect_bd_net -net accumulator_0_BRAM_en [get_bd_pins accumulator_0/BRAM_en] [get_bd_pins blk_mem_gen_0/ena]
  connect_bd_net -net accumulator_0_BRAM_rst [get_bd_pins accumulator_0/BRAM_rst] [get_bd_pins blk_mem_gen_0/rsta]
  connect_bd_net -net accumulator_0_BRAM_wen [get_bd_pins accumulator_0/BRAM_wen] [get_bd_pins blk_mem_gen_0/wea]
  connect_bd_net -net accumulator_0_accum_done [get_bd_pins accumulator_0/accum_done] [get_bd_pins and_gate_accum_1/in0]
  connect_bd_net -net accumulator_1_BRAM_addr [get_bd_pins accumulator_2/BRAM_addr] [get_bd_pins blk_mem_gen_2/addra]
  connect_bd_net -net accumulator_1_BRAM_clk [get_bd_pins accumulator_2/BRAM_clk] [get_bd_pins blk_mem_gen_2/clka]
  connect_bd_net -net accumulator_1_BRAM_din [get_bd_pins accumulator_2/BRAM_din] [get_bd_pins blk_mem_gen_2/dina]
  connect_bd_net -net accumulator_1_BRAM_en [get_bd_pins accumulator_2/BRAM_en] [get_bd_pins blk_mem_gen_2/ena]
  connect_bd_net -net accumulator_1_BRAM_rst [get_bd_pins accumulator_2/BRAM_rst] [get_bd_pins blk_mem_gen_2/rsta]
  connect_bd_net -net accumulator_1_BRAM_wen [get_bd_pins accumulator_2/BRAM_wen] [get_bd_pins blk_mem_gen_2/wea]
  connect_bd_net -net accumulator_1_accum_done [get_bd_pins accumulator_1/accum_done] [get_bd_pins and_gate_accum_1/in1]
  connect_bd_net -net accumulator_2_BRAM_addr [get_bd_pins accumulator_1/BRAM_addr] [get_bd_pins blk_mem_gen_1/addra]
  connect_bd_net -net accumulator_2_BRAM_clk [get_bd_pins accumulator_1/BRAM_clk] [get_bd_pins blk_mem_gen_1/clka]
  connect_bd_net -net accumulator_2_BRAM_din [get_bd_pins accumulator_1/BRAM_din] [get_bd_pins blk_mem_gen_1/dina]
  connect_bd_net -net accumulator_2_BRAM_en [get_bd_pins accumulator_1/BRAM_en] [get_bd_pins blk_mem_gen_1/ena]
  connect_bd_net -net accumulator_2_BRAM_rst [get_bd_pins accumulator_1/BRAM_rst] [get_bd_pins blk_mem_gen_1/rsta]
  connect_bd_net -net accumulator_2_BRAM_wen [get_bd_pins accumulator_1/BRAM_wen] [get_bd_pins blk_mem_gen_1/wea]
  connect_bd_net -net accumulator_2_accum_done [get_bd_pins accumulator_2/accum_done] [get_bd_pins and_gate_accum_1/in2]
  connect_bd_net -net accumulator_3_BRAM_addr [get_bd_pins accumulator_3/BRAM_addr] [get_bd_pins blk_mem_gen_3/addra]
  connect_bd_net -net accumulator_3_BRAM_clk [get_bd_pins accumulator_3/BRAM_clk] [get_bd_pins blk_mem_gen_3/clka]
  connect_bd_net -net accumulator_3_BRAM_din [get_bd_pins accumulator_3/BRAM_din] [get_bd_pins blk_mem_gen_3/dina]
  connect_bd_net -net accumulator_3_BRAM_en [get_bd_pins accumulator_3/BRAM_en] [get_bd_pins blk_mem_gen_3/ena]
  connect_bd_net -net accumulator_3_BRAM_rst [get_bd_pins accumulator_3/BRAM_rst] [get_bd_pins blk_mem_gen_3/rsta]
  connect_bd_net -net accumulator_3_BRAM_wen [get_bd_pins accumulator_3/BRAM_wen] [get_bd_pins blk_mem_gen_3/wea]
  connect_bd_net -net accumulator_3_accum_done [get_bd_pins accumulator_3/accum_done] [get_bd_pins and_gate_accum_1/in3]
  connect_bd_net -net and_gate_accum_0_out [get_bd_pins accumulator_0/BRAM_rready] [get_bd_pins accumulator_1/BRAM_rready] [get_bd_pins accumulator_2/BRAM_rready] [get_bd_pins accumulator_3/BRAM_rready] [get_bd_pins and_gate_accum_0/and_out]
  connect_bd_net -net and_gate_accum_1_and_out [get_bd_ports accum_done] [get_bd_pins and_gate_accum_1/and_out]
  connect_bd_net -net blk_mem_gen_0_douta [get_bd_ports bram_dout_0] [get_bd_pins accumulator_0/BRAM_dout] [get_bd_pins blk_mem_gen_0/douta]
  connect_bd_net -net blk_mem_gen_1_douta [get_bd_ports bram_dout_2] [get_bd_pins accumulator_2/BRAM_dout] [get_bd_pins blk_mem_gen_2/douta]
  connect_bd_net -net blk_mem_gen_2_douta [get_bd_ports bram_dout_3] [get_bd_pins accumulator_3/BRAM_dout] [get_bd_pins blk_mem_gen_3/douta]
  connect_bd_net -net blk_mem_gen_3_douta [get_bd_ports bram_dout_1] [get_bd_pins accumulator_1/BRAM_dout] [get_bd_pins blk_mem_gen_1/douta]
  connect_bd_net -net clk_0_1 [get_bd_ports clk] [get_bd_pins accumulator_0/clk] [get_bd_pins accumulator_1/clk] [get_bd_pins accumulator_2/clk] [get_bd_pins accumulator_3/clk]
  connect_bd_net -net in0_0_1 [get_bd_ports mac_done_0] [get_bd_pins and_gate_accum_0/in0]
  connect_bd_net -net in1_0_1 [get_bd_ports mac_done_1] [get_bd_pins and_gate_accum_0/in1]
  connect_bd_net -net in2_0_1 [get_bd_ports mac_done_2] [get_bd_pins and_gate_accum_0/in2]
  connect_bd_net -net in3_0_1 [get_bd_ports mac_done_3] [get_bd_pins and_gate_accum_0/in3]
  connect_bd_net -net in_psum0_0_1 [get_bd_ports psum0_0] [get_bd_pins accumulator_0/in_psum0]
  connect_bd_net -net in_psum0_1_1 [get_bd_ports psum1_0] [get_bd_pins accumulator_1/in_psum0]
  connect_bd_net -net in_psum0_2_1 [get_bd_ports psum2_0] [get_bd_pins accumulator_2/in_psum0]
  connect_bd_net -net in_psum0_3_1 [get_bd_ports psum3_0] [get_bd_pins accumulator_3/in_psum0]
  connect_bd_net -net in_psum1_0_1 [get_bd_ports psum0_1] [get_bd_pins accumulator_0/in_psum1]
  connect_bd_net -net in_psum1_1_1 [get_bd_ports psum1_1] [get_bd_pins accumulator_1/in_psum1]
  connect_bd_net -net in_psum1_2_1 [get_bd_ports psum2_1] [get_bd_pins accumulator_2/in_psum1]
  connect_bd_net -net in_psum1_3_1 [get_bd_ports psum3_1] [get_bd_pins accumulator_3/in_psum1]
  connect_bd_net -net in_psum2_0_1 [get_bd_ports psum0_2] [get_bd_pins accumulator_0/in_psum2]
  connect_bd_net -net in_psum2_1_1 [get_bd_ports psum1_2] [get_bd_pins accumulator_1/in_psum2]
  connect_bd_net -net in_psum2_2_1 [get_bd_ports psum2_2] [get_bd_pins accumulator_2/in_psum2]
  connect_bd_net -net in_psum2_3_1 [get_bd_ports psum3_2] [get_bd_pins accumulator_3/in_psum2]
  connect_bd_net -net in_psum3_0_1 [get_bd_ports psum0_3] [get_bd_pins accumulator_0/in_psum3]
  connect_bd_net -net in_psum3_1_1 [get_bd_ports psum1_3] [get_bd_pins accumulator_1/in_psum3]
  connect_bd_net -net in_psum3_2_1 [get_bd_ports psum2_3] [get_bd_pins accumulator_2/in_psum3]
  connect_bd_net -net in_psum3_3_1 [get_bd_ports psum3_3] [get_bd_pins accumulator_3/in_psum3]

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


