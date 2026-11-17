/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass35_0$$<Card>b__0
void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass35_0___Card_b__0 (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass35_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel.<>c__DisplayClass35_0$$<Card>b__0
   void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass35_0___Card_b__0
   (Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass35_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_DailyGiftPanel___c__DisplayClass35_0___Card_b__0_232cd7c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c60f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c60f = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar6 = param_1 * _UNK_00e2098c + _UNK_00e20094;
  if ((bRam0000000004fac320 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09bf8,0);
    bRam0000000004fac320 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fac330 == (code *)0x0) {
      pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
    }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fac330)(fVar6,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

