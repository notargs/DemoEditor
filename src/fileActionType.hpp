#pragma once

enum class FileActionType
{
	kAdded = FILE_ACTION_ADDED,
	kRemoved = FILE_ACTION_REMOVED,
	kModified = FILE_ACTION_MODIFIED,
	kRenamedOld = FILE_ACTION_RENAMED_OLD_NAME,
	kRenamedNew = FILE_ACTION_RENAMED_NEW_NAME,
};
