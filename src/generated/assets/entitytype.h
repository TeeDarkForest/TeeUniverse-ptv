/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#ifndef __CLIENT_ASSETS_ENTITYTYPE__
#define __CLIENT_ASSETS_ENTITYTYPE__

#include <shared/assets/asset.h>
#include <shared/assets/assetpath.h>

class CAsset_EntityType : public CAsset
{
public:
	static const int TypeId = 21;
	
	enum
	{
		NAME = CAsset::NAME,
		GIZMOPATH,
		COLLISIONRADIUS,
	};
	
	class CTuaType : public CAsset::CTuaType
	{
	public:
		CAssetPath::CTuaType m_GizmoPath;
		tua_float m_CollisionRadius;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_EntityType& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_EntityType& SysType, CTuaType& TuaType);
	};
	

private:
	CAssetPath m_GizmoPath;
	float m_CollisionRadius;

public:
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int AddSubItemAt(int Type, const CSubPath& SubPath, int Index);
	
	void DeleteSubItem(const CSubPath& SubPath);
	
	void RelMoveSubItem(const CSubPath& SubPath, int RelMove);
	
	void copy(const CAsset_EntityType& Item)
	{
		CAsset::copy(Item);
		m_GizmoPath = Item.m_GizmoPath;
		m_CollisionRadius = Item.m_CollisionRadius;
	}
	
	void transfert(CAsset_EntityType& Item)
	{
		CAsset::transfert(Item);
		m_GizmoPath = Item.m_GizmoPath;
		m_CollisionRadius = Item.m_CollisionRadius;
	}
	
	inline CAssetPath GetGizmoPath() const { return m_GizmoPath; }
	
	inline float GetCollisionRadius() const { return m_CollisionRadius; }
	
	inline void SetGizmoPath(const CAssetPath& Value) { m_GizmoPath = Value; }
	
	inline void SetCollisionRadius(float Value) { m_CollisionRadius = Value; }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_GizmoPath);
	}
	
};

template<> float CAsset_EntityType::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_EntityType::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> CAssetPath CAsset_EntityType::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_EntityType::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
