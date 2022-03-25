
# Compile 

`make -C /lib/modules/$(uname -r)/build M=$PWD modulea`

# Add module 

`sudo insmod hello_world.ko`


# Remove module

`sudo rmmod hello_world`
