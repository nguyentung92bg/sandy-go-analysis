/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<RunStartPopup>d__32$$MoveNext
bool Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_d__32__MoveNext (Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_d__32_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<RunStartPopup>d__32$$MoveNext
   bool Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_d__32__MoveNext
   (Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_d__32_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_BattleRoyaleFeature__RunStartPopup_d__32__MoveNext_222715c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined1 *)(lVar2 + 0x30) = 0;
    uVar3 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar4 = 1;
    uVar1 = Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_219c554(1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    thunk_FUN_02134474();
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar1;
}

