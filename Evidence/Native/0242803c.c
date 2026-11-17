/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$get_FlyFrom
UnityEngine_Vector3_o Dino_BusSand_App_UI_DailyGiftPanel__get_FlyFrom (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$get_FlyFrom
   UnityEngine_Vector3_o Dino_BusSand_App_UI_DailyGiftPanel__get_FlyFrom
   (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_DailyGiftPanel__get_FlyFrom_232803c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c5f4 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x60);
  }
  if (lVar3 != 0) {
    if ((bRam0000000004fa8b30 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b30 = 1;
    }
    uStack_28 = 0;
    uStack_30 = 0;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
    if (pcRam0000000004fa8b80 == (code *)0x0) {
      pcRam0000000004fa8b80 = (code *)FUN_02132f40(&UNK_00e4daa9);
    }
    (*pcRam0000000004fa8b80)(lVar3,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

