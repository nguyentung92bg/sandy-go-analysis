/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<RunAll>d__31$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__RunAll_d__31__MoveNext (Dino_BusSand_Cheat_AutoQa__RunAll_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02454bac) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<RunAll>d__31$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__RunAll_d__31__MoveNext
   (Dino_BusSand_Cheat_AutoQa__RunAll_d__31_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__RunAll_d__31__MoveNext_2354374(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  int iStack_64;
  
  if ((bRam0000000004f9c715 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba070);
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cba078);
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04cba080);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacf40);
    FUN_02132f7c(PTR_DAT_04cad1c8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cba088);
    FUN_02132f7c(PTR_DAT_04cba090);
    FUN_02132f7c(PTR_DAT_04cba098);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba0a0);
    bRam0000000004f9c715 = 1;
  }
  puVar12 = PTR_DAT_04cb9568;
  lVar23 = *(long *)(param_1 + 0x20);
  iStack_64 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_02454908;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar13 = *(long *)PTR_DAT_04cb9568;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c7a2 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb9568);
      cRam0000000004f9c7a2 = '\x01';
    }
    lVar13 = *(long *)puVar12;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar12;
    }
    lVar13 = *(long *)(lVar13 + 0xb8);
    lVar22 = *(long *)(lVar13 + 8);
    *(undefined1 *)(lVar13 + 0x10) = 1;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(lVar22 + 0x18);
    *(undefined4 *)(lVar22 + 0x18) = 0;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar22 + 0x10),0,iVar1,0);
      lVar13 = *(long *)(*(long *)puVar12 + 0xb8);
    }
    lVar13 = *(long *)(lVar13 + 0x20);
    if (lVar13 != 0) {
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
    }
    puVar6 = PTR_DAT_04cabaf8;
    lVar13 = *(long *)PTR_DAT_04cabaf8;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar6;
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
    thunk_FUN_02134474();
    puVar5 = PTR_DAT_04cabaa8;
    lVar13 = *(long *)PTR_DAT_04cabaa8;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar5;
    }
    *(undefined8 *)(param_1 + 0x38) = **(undefined8 **)(lVar13 + 0xb8);
    thunk_FUN_02134474();
    puVar10 = PTR_DAT_04cad1f0;
    lVar13 = *(long *)PTR_DAT_04cad1f0;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar10;
    }
    *(undefined8 *)(param_1 + 0x40) = **(undefined8 **)(lVar13 + 0xb8);
    thunk_FUN_02134474();
    puVar9 = PTR_DAT_04cad1c8;
    puVar8 = PTR_DAT_04cacf40;
    puVar4 = PTR_DAT_04cab380;
    lVar13 = *(long *)(*(long *)PTR_DAT_04cab380 + 0xb8);
    uVar2 = **(undefined1 **)(*(long *)PTR_DAT_04cad1c8 + 0xb8);
    *(undefined1 *)(param_1 + 0x48) = **(undefined1 **)(*(long *)PTR_DAT_04cacf40 + 0xb8);
    uVar3 = *(undefined1 *)(lVar13 + 2);
    *(undefined1 *)(param_1 + 0x49) = uVar2;
    *(undefined1 *)(param_1 + 0x4a) = uVar3;
    uVar24 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    *(undefined4 *)(param_1 + 0x4c) = uVar24;
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *(long *)(lVar23 + 0x30);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
    }
    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cba080);
    UnityEngine_Application_LogCallback___ctor_43545dc
              (uVar14,lVar23,*(undefined8 *)PTR_DAT_04cba070,0);
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Application__add_logMessageReceived_4353188(uVar14,0);
    puVar7 = PTR_DAT_04cac5c0;
    lVar13 = *(long *)PTR_DAT_04cac5c0;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar7;
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10);
    thunk_FUN_02134474();
    puVar11 = PTR_DAT_04cb2240;
    lVar13 = *(long *)PTR_DAT_04cb2240;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar11;
    }
    *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(lVar13 + 0xb8);
    thunk_FUN_02134474();
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
    thunk_FUN_02134474();
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    *puVar15 = 0;
    thunk_FUN_02134474(puVar15,0);
    **(undefined8 **)(*(long *)puVar11 + 0xb8) = 0;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar11 + 0xb8),0);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
    *puVar15 = 0;
    thunk_FUN_02134474(puVar15,0);
    uVar14 = *(undefined8 *)puVar8;
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    uVar14 = thunk_FUN_0216e89c(uVar14);
    Dino_BusSand_App_SimulatedAds___ctor_21759dc(uVar14,0);
    **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar14;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar14);
    uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
                    /* try { // try from 024547e4 to 02554a57 has its CatchHandler @ 024547e4
                       catch() { ... } // from try @ 024547e4 with catch @ 024547e4
                       catch() { ... } // from try @ 02454e24 with catch @ 024547e4
                       catch() { ... } // from try @ 02454e2c with catch @ 024547e4
                       catch() { ... } // from try @ 02454eec with catch @ 024547e4
                       catch() { ... } // from try @ 02454f30 with catch @ 024547e4
                       catch() { ... } // from try @ 02454fd4 with catch @ 024547e4 */
    Dino_BusSand_App_SimulatedIap___ctor_2179be8(uVar14,0);
    **(undefined8 **)(*(long *)puVar10 + 0xb8) = uVar14;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar10 + 0xb8),uVar14);
    **(undefined2 **)(*(long *)puVar9 + 0xb8) = 1;
    puVar20 = *(undefined2 **)(*(long *)puVar8 + 0xb8);
    *puVar20 = 1;
    puVar5 = PTR_DAT_04cba088;
    lVar22 = *(long *)puVar4;
    lVar13 = *(long *)puVar6;
    *(undefined4 *)(puVar20 + 2) = 0;
    uVar14 = *(undefined8 *)puVar5;
    lVar13 = *(long *)(lVar13 + 0xb8);
    *(undefined1 *)(*(long *)(lVar22 + 0xb8) + 2) = 0;
    *(undefined8 *)(lVar13 + 8) = uVar14;
    thunk_FUN_02134474();
    lVar13 = *(long *)puVar12;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar12;
    }
    *(undefined8 *)(param_1 + 0x68) = **(undefined8 **)(lVar13 + 0xb8);
    thunk_FUN_02134474();
    uVar21 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    while( true ) {
      plVar17 = (long *)(param_1 + 0x68);
      lVar13 = *plVar17;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar21) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar14 = *(undefined8 *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (uVar16 = System_String__op_Inequality_46d110c(*(long *)(param_1 + 0x28),uVar14,0),
         (uVar16 & 1) == 0)) {
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9c7a3 == '\0') {
          FUN_02132f7c(PTR_DAT_04cb9568);
          cRam0000000004f9c7a3 = '\x01';
        }
        lVar13 = *(long *)puVar12;
                    /* try { // try from 02454a58 to 02554a7f has its CatchHandler @ 02454f0c */
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar12;
        }
        puVar15 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
        *puVar15 = uVar14;
        thunk_FUN_02134474(puVar15,uVar14);
        if (lVar23 != 0) {
          *(undefined8 *)(lVar23 + 0x20) = uVar14;
          thunk_FUN_02134474((undefined8 *)(lVar23 + 0x20),uVar14);
          lVar13 = *(long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0x20);
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
          }
          uVar14 = Dino_BusSand_Cheat_AutoQa__Scenario_23416c8(lVar23,uVar14,0);
                    /* try { // try from 02454abc to 02554ae3 has its CatchHandler @ 02454f08 */
          uVar14 = Dino_BusSand_Cheat_AutoQa__Guard_2341618(lVar23,uVar14,0);
          *(undefined8 *)(param_1 + 0x18) = uVar14;
          thunk_FUN_02134474();
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
LAB_02454908:
      uVar21 = *(int *)(param_1 + 0x70) + 1;
      *(uint *)(param_1 + 0x70) = uVar21;
    }
    *plVar17 = 0;
    thunk_FUN_02134474(plVar17,0);
    uVar14 = *(undefined8 *)PTR_DAT_04cba090;
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c7a3 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb9568);
      cRam0000000004f9c7a3 = '\x01';
    }
    lVar13 = *(long *)puVar12;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar12;
    }
    puVar15 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
    *puVar15 = uVar14;
    thunk_FUN_02134474(puVar15,uVar14);
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar23 + 0x20) = uVar14;
    thunk_FUN_02134474((undefined8 *)(lVar23 + 0x20),uVar14);
    if (*(long *)(lVar23 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(*(long *)(lVar23 + 0x30) + 0x18);
    uVar14 = *(undefined8 *)PTR_DAT_04cba098;
    if (iVar1 == 0) {
                    /* try { // try from 02454b14 to 02554b1f has its CatchHandler @ 02454e74 */
      uVar18 = *(undefined8 *)PTR_DAT_04ca9c30;
    }
    else {
      iStack_64 = iVar1;
      uVar18 = System_Int32__ToString_482d750(&iStack_64,0);
      if (*(long *)(lVar23 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar19 = System_Collections_Generic_List_object___get_Item_3a81924
                         (*(long *)(lVar23 + 0x30),0,*(undefined8 *)PTR_DAT_04cb4190);
      uVar18 = System_String__Concat_46d2b84(uVar18,*(undefined8 *)PTR_DAT_04cba0a0,uVar19,0);
    }
                    /* try { // try from 02454b2c to 02554b37 has its CatchHandler @ 02454e60 */
    Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar23,iVar1 == 0,uVar14,uVar18,0);
    Dino_BusSand_Cheat_AutoQa__RunAll_d__31____m__Finally1_2354cb0(param_1);
                    /* try { // try from 02454b38 to 02554b43 has its CatchHandler @ 02454e70 */
  }
                    /* try { // try from 02454aec to 02554af3 has its CatchHandler @ 02454efc */
                    /* try { // try from 02454af4 to 02554aff has its CatchHandler @ 02454f00 */
  return 0;
}

