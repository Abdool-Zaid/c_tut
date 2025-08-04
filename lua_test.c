#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>


// C function to expose to Lua
static int c_multiply(lua_State *L) {
    // Check and get arguments from the stack
    double a = luaL_checknumber(L, 1); // First argument
    double b = luaL_checknumber(L, 2); // Second argument
    
    // Push the result onto the stack
    lua_pushnumber(L, a * b);
    
    // Return the number of results (1)
    return 1;
}

int main() {
    // Create a new Lua state
    lua_State *L = luaL_newstate();
    luaL_openlibs(L); // Load standard libraries

    // Register the C function as a global Lua function
    lua_register(L, "multiply", c_multiply);

    // Lua script that uses the C function
    const char *lua_script = "print(multiply(4, 5))"; // Should print 20

    // Run the Lua script
    if (luaL_dostring(L, lua_script)) {
        printf("Error: %s\n", lua_tostring(L, -1));
        lua_close(L);
        return 1;
    }

    // Clean up
    lua_close(L);
    return 0;
}