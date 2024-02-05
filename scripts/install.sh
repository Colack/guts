# Install Script for <tbd>

# Install required packages
sudo apt-get update
sudo apt-get install -y gcc g++ make cmake

# Build the project
mkdir build 
cd build
cmake ..

# Install the project
make install

# Clean up
cd ..
rm -rf build

# Print instructions
echo "The project has been installed. To run the project, type <tbd> in the terminal."

# Path: install.sh