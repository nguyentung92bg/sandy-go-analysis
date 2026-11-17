/* IL2CPP: Dino.BusSand.App.UI.KitPop$$get_PanelAlpha
float Dino_BusSand_App_UI_KitPop__get_PanelAlpha (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$get_PanelAlpha
   float Dino_BusSand_App_UI_KitPop__get_PanelAlpha (Dino_BusSand_App_UI_KitPop_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_KitPop__get_PanelAlpha_228ede0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1a7 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return ZEXT816(0x3f800000);
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fac31f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09bf8,0);
    bRam0000000004fac31f = 1;
  }
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fac328 == (code *)0x0) {
      pcRam0000000004fac328 = (code *)FUN_02132f40(&UNK_00e435dc);
    }
                    /* WARNING: Could not recover jumptable at 0x0477acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fac328)(lVar4);
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_8_ = extraout_var_00;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

