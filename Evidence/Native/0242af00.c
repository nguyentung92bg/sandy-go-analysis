/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$SetBar
void Dino_BusSand_App_UI_DailyGiftPanel__SetBar (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, float claims, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$SetBar
   void Dino_BusSand_App_UI_DailyGiftPanel__SetBar (Dino_BusSand_App_UI_DailyGiftPanel_o* __this,
   float claims, const MethodInfo* method); */

void Dino_BusSand_App_UI_DailyGiftPanel__SetBar_232af00(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float afStack_18 [2];
  
  iVar1 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
  lVar2 = *(long *)(param_2 + 0x78);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1 = param_1 / (float)iVar1;
  fVar4 = 1.0;
  if (param_1 <= 1.0) {
    fVar4 = param_1;
  }
  fVar3 = 0.0;
  if (0.0 <= param_1) {
    fVar3 = fVar4;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  afStack_18[0] = fVar4 * _UNK_00e20a2c + 51.0;
  afStack_18[1] = 57.0;
  if ((bRam0000000004fa8a8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7bc8,0);
    bRam0000000004fa8a8a = 1;
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      if (pcRam0000000004fa8ae0 == (code *)0x0) {
        pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
      }
      (*pcRam0000000004fa8ae0)(lVar2,afStack_18);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

