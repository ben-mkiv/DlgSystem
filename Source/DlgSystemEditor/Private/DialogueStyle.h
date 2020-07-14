// Copyright Csaba Molnar, Daniel Butum. All Rights Reserved.
#pragma once

#include "Styling/SlateStyle.h"

// how everything looks, fancy stuff
class FDialogueStyle
{
public:
	static void Initialize();

	static void Shutdown();

	static TSharedPtr<ISlateStyle> Get() { return StyleSet; }

	/** Gets the style name. */
	static FName GetStyleSetName() { return TEXT("DlgSystemStyle"); }

	/** Gets the small property name variant */
	static FName GetSmallProperty(FName PropertyName)
	{
		return FName(*(PropertyName.ToString() + TEXT(".Small")));
	}

	/** Get the RelativePath to the DlgSystem Content Dir */
	static FString GetPluginContentPath(const FString& RelativePath)
	{
		return PluginContentRoot / RelativePath;
	}

	/** Get the RelativePath to the Engine Content Dir */
	static FString GetEngineContentPath(const FString& RelativePath)
	{
		return EngineContentRoot / RelativePath;
	}

public:
	static const FName PROPERTY_DialogueClassIcon;
	static const FName PROPERTY_DialogueClassThumbnail;

	static const FName PROPERTY_GraphNodeCircleBox;
	static const FName PROPERTY_ConditionIcon;
	static const FName PROPERTY_EventIcon;
	static const FName PROPERTY_VoiceIcon;
	static const FName PROPERTY_GenericIcon;
	static const FName PROPERTY_QuestionMarkIcon;

	static const FName PROPERTY_ShowPrimarySecondaryEdgesIcon;
	static const FName PROPERTY_ReloadAssetIcon;
	static const FName PROPERTY_OpenAssetIcon;
	static const FName PROPERTY_FindAssetIcon;

	static const FName PROPERTY_SaveAllDialoguesIcon;
	static const FName PROPERTY_DeleteAllDialoguesTextFilesIcon;
	static const FName PROPERTY_DialogueSearch_TabIcon;
	static const FName PROPERTY_DialogueBrowser_TabIcon;
	static const FName PROPERTY_DialogueDataDisplay_TabIcon;

	static const FName PROPERTY_FindInDialogueEditorIcon;
	static const FName PROPERTY_FindInAllDialogueEditorIcon;

	static const FName PROPERTY_CommentBubbleOn;

private:
	/** Singleton instance. */
	static TSharedPtr<FSlateStyleSet> StyleSet;

	/** Engine content root. */
	static FString EngineContentRoot;

	/** DlgSystem Content Root */
	static FString PluginContentRoot;
};
