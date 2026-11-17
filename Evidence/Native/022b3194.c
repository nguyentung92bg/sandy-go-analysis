/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$Reward
UnityEngine_Sprite_o* Dino_BusSand_App_UI_BusStreakUi__Reward (int32_t rewardId, System_String_o** amount, bool* coin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$Reward
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_BusStreakUi__Reward (int32_t rewardId,
   System_String_o** amount, bool* coin, const MethodInfo* method); */

long Dino_BusSand_App_UI_BusStreakUi__Reward_21b3194
               (undefined4 param_1,undefined8 *param_2,char *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9ba99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04caf218);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9ba99 = 1;
  }
  uStack_38 = 0;
  lVar2 = Dino_BusSand_App_UI_EventKit__RewardOf_21b333c(param_1);
  *param_2 = *(undefined8 *)puVar1;
  thunk_FUN_02134474(param_2);
  *param_3 = '\0';
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      lVar2 = 0;
    }
    else {
      auVar4 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                         (lVar2,0,*(undefined8 *)PTR_DAT_04cadda0);
      uStack_38 = auVar4._8_8_;
      *param_3 = auVar4._0_4_ == 0x3e9;
      uVar3 = System_Int64__ToString_482e7e4(&uStack_38,0);
      if (auVar4._0_4_ != 0x3e9) {
        uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar3,0);
      }
      *param_2 = uVar3;
      thunk_FUN_02134474(param_2);
      if (*param_3 == '\0') {
        lVar2 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(auVar4._0_8_ & 0xffffffff,0);
        if (lVar2 == 0) {
          if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar2 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(auVar4._0_8_ & 0xffffffff,0,0);
        }
      }
      else {
        lVar2 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04caf218,0);
      }
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

