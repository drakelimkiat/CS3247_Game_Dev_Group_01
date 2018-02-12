// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ChopItLkeItsHotEditorTarget : TargetRules
{
	public ChopItLkeItsHotEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("ChopItLkeItsHot");
	}
}
