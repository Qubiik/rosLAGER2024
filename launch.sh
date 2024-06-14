#!/bin/bash
source devel/setup.bash | rosrun sus2 addition_service_node | source devel/setup.bash | rosrun sus2 addition_client_node
