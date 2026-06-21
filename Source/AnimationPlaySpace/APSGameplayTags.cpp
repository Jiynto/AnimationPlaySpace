#include "APSGameplayTags.h"
 
// Gameplay Ability Tags.
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_GAMEPLAYABILITY_DODGE, "GameplayAbility.Movement.Dodge", "primary asset tag for the dodge gameplay ability.")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_GAMEPLAYABILITY_COOLDOWN, "Cooldown", "root cooldown tag")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_GAMEPLAYABILITY_COOLDOWN_DODGE, "Cooldown.Dodge", "cooldown tag for dodge abilities.")

// Gameplay Effect Tags.
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_GAMEPLAYEFFECT_STATUS_STAMINA_REGEN, "Status.Stamina.Regen", "tag granted by the stamina regen effect.")


// Gameplay Cue Tags.
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_GAMEPLAYCUE_DODGE_START, "GameplayCue.Movement.Dodge.Start", "primary asset tag for the dodge start gameplay cue.")

// Event Tags.
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EVENT_EQUIPITEM, "Event.EquipItem", "Event tag used to trigger equipping of an item.")

// Data Tags
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_DATA_DAMAGE, "Data.Damage", "Base damage date tag.")


// Message Channels
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_MESSAGE_ATTRIBUTECHANGE_HEALTH, "Message.AttributeChange.Health", "Message tag for when player health attribute changes.")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_MESSAGE_ATTRIBUTECHANGE_STAMINA, "Message.AttributeChange.Stamina", "Message tag for when player stamina attribute changes.")

// Inventory System.
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EQUIPMENT_SLOT_LEFT, "Equipment.Slot.Left", "Tag representing the left hand equipment slot for characters.")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_EQUIPMENT_SLOT_RIGHT, "Equipment.Slot.Right", "Tag representing the right hand equipment slot for characters.")