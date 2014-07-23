./premake --file cegui.lua --clean
./premake --file cegui.lua --target gnu

make -j8 CONFIG=Release