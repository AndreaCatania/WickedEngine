#pragma once
#include "wiLua.h"
#include "wiLuna.h"
#include <DirectXMath.h>
#include "CommonInclude.h"

class Vector_BindLua
{
public:
	DirectX::XMVECTOR vector;

	static const char className[];
	static Luna<Vector_BindLua>::FunctionType methods[];
	static Luna<Vector_BindLua>::PropertyType properties[];

	Vector_BindLua(const DirectX::XMVECTOR& vector);
	Vector_BindLua(lua_State* L);
	~Vector_BindLua();

	int GetX(lua_State* L);
	int GetY(lua_State* L);
	int GetZ(lua_State* L);
	int GetW(lua_State* L);

	int SetX(lua_State* L);
	int SetY(lua_State* L);
	int SetZ(lua_State* L);
	int SetW(lua_State* L);

	int Transform(lua_State* L);
	int Length(lua_State* L);
	int Normalize(lua_State* L);

	static int Dot(lua_State* L);
	static int Cross(lua_State* L);
	static int Multiply(lua_State* L);
	static int Add(lua_State* L);
	static int Subtract(lua_State* L);
	static int Lerp(lua_State* L);
	static int Slerp(lua_State* L);

	static void Bind();

	ALIGN_16
};
