/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$get_Cam
UnityEngine_Camera_o* Dino_BusSand_App_UI_GuideDimHoles__get_Cam (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$get_Cam
   UnityEngine_Camera_o* Dino_BusSand_App_UI_GuideDimHoles__get_Cam (const MethodInfo* method); */

long Dino_BusSand_App_UI_GuideDimHoles__get_Cam_22c6770(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c35b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c35b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 023c67dc to 024c67e3 has its CatchHandler @ 023c6800 */
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
                    /* try { // try from 023c67e4 to 024c681b has its CatchHandler @ 023c6654 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023c67dc with catch @ 023c6800
                        */
  uVar8 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
                    /* try { // try from 023c681c to 024c681f has its CatchHandler @ 023c6988 */
                    /* try { // try from 023c6820 to 024c698b has its CatchHandler @ 023c6654 */
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
LAB_023c6908:
    if ((bRam0000000004fa5c50 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6300);
      bRam0000000004fa5c50 = 1;
    }
    puVar2 = PTR_DAT_04cf6300;
    if (pcRam0000000004fa60d0 == (code *)0x0) {
      pcRam0000000004fa60d0 = (code *)FUN_02132f40(&UNK_00e31b97);
    }
    uVar4 = (*pcRam0000000004fa60d0)();
    lVar3 = *(long *)puVar2;
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_0216b4cc(lVar3);
    }
    if (uVar4 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar7 = *plVar5;
      }
      else {
        lVar7 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar4,0);
      }
      lVar3 = **(long **)(lVar3 + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470(lVar3);
      }
      if (lVar7 != 0) {
        lVar6 = thunk_FUN_0216e7a0(lVar7,lVar3);
        if (lVar6 != 0) {
          return lVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar7,lVar3);
      }
    }
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar8 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar4 & 1) == 0) goto LAB_023c6908;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x20), lVar3 != 0)) {
      if ((bRam0000000004f9c221 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004f9c221 = 1;
      }
      uVar8 = *(undefined8 *)(lVar3 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      lVar7 = 0;
      if ((uVar4 & 1) != 0) {
        if (*(long *)(lVar3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0);
        }
        lVar7 = *(long *)(*(long *)(lVar3 + 0x38) + 0x38);
      }
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

