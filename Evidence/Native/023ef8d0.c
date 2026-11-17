/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Settle
void Dino_BusSand_App_UI_HomeStage__Settle (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Settle
   void Dino_BusSand_App_UI_HomeStage__Settle (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Settle_22ef8d0(long param_1)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = 0;
  if ((*(long *)(lVar1 + 0x18) != 0) && ((*(uint *)(lVar1 + 0x50) & 0xfffffffe) != 2)) {
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(lVar1 + 0x44) = 0;
    *(undefined4 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x4c);
    if (*(long *)(lVar1 + 0x10) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(undefined4 *)(lVar1 + 0x4c),0,0,*(long *)(lVar1 + 0x10),0);
      uVar2 = extraout_x1;
      if (*(long *)(lVar1 + 0x20) != 0) {
        *(undefined4 *)(*(long *)(lVar1 + 0x20) + 0x50) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224(0,uVar2);
  }
  return;
}

