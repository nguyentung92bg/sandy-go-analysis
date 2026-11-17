/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$get_FlyTarget
UnityEngine_Transform_o* Dino_BusSand_App_UI_CommerceCoinBar__get_FlyTarget (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$get_FlyTarget
   UnityEngine_Transform_o* Dino_BusSand_App_UI_CommerceCoinBar__get_FlyTarget
   (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceCoinBar__get_FlyTarget_22a7a74(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c28e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c28e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return *(long *)(param_1 + 0x30);
  }
  if ((bRam0000000004fa8306 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7648,0);
    FUN_02132f7c(PTR_DAT_04cf5c60);
    bRam0000000004fa8306 = 1;
  }
  puVar1 = PTR_DAT_04cf5c60;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
  }
  if (pcRam0000000004fa8310 == (code *)0x0) {
    pcRam0000000004fa8310 = (code *)FUN_02132f40(&UNK_00e2fdd4);
  }
  uVar2 = (*pcRam0000000004fa8310)(lVar5);
  lVar5 = *(long *)puVar1;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_0216b4cc(lVar5);
  }
  if (uVar2 != 0) {
    if (cRam0000000004f9d849 == '\0') {
      FUN_02132f7c(&DAT_04ddbd40);
      cRam0000000004f9d849 = '\x01';
    }
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)System_IntPtr__op_Explicit_487833c();
      lVar7 = *plVar3;
    }
    else {
      lVar7 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
    }
    lVar5 = **(long **)(lVar5 + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
    }
    if (lVar7 != 0) {
      lVar4 = thunk_FUN_0216e7a0(lVar7,lVar5);
      if (lVar4 != 0) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(lVar7,lVar5);
    }
  }
  return 0;
}

