/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$SaveOpenAttempt
void Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt (System_String_o* jr, bool live, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$SaveOpenAttempt
   void Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt (System_String_o* jr, bool live, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__SaveOpenAttempt_2211ba8(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bd4e = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  puVar5 = PTR_DAT_04cac498;
  puVar3 = PTR_DAT_04ca9c30;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x88), lVar8 == 0)) {
LAB_02311e84:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = *(long *)PTR_DAT_04cac498;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *(undefined1 *)(lVar8 + 0x10) = 1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar5;
  }
  lVar9 = *(long *)(lVar9 + 0xb8);
  uVar7 = *(undefined4 *)(lVar9 + 0x18);
  *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(lVar9 + 4);
  *(undefined4 *)(lVar8 + 0x18) = uVar7;
  *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(lVar9 + 8);
  uVar6 = Dino_BusSand_App_Meta_GameTracking__PlayMs_22133b8();
  uVar7 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
  *(undefined4 *)(lVar8 + 0x24) = uVar6;
  *(undefined4 *)(lVar8 + 0x28) = uVar7;
  uVar7 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
  lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
  lVar9 = *(long *)puVar3;
  if (lVar12 != 0) {
    lVar9 = lVar12;
  }
  *(long *)(lVar8 + 0x30) = lVar9;
  *(undefined4 *)(lVar8 + 0x2c) = uVar7;
  thunk_FUN_02134474((long *)(lVar8 + 0x30));
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
  lVar9 = *(long *)puVar3;
  if (lVar12 != 0) {
    lVar9 = lVar12;
  }
  *(long *)(lVar8 + 0x38) = lVar9;
  thunk_FUN_02134474();
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar5;
  }
  *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x1c);
                    /* try { // try from 02311d4c to 02411e2b has its CatchHandler @ 02311d4c
                       catch() { ... } // from try @ 02311d4c with catch @ 02311d4c
                       catch() { ... } // from try @ 02311e34 with catch @ 02311d4c
                       catch() { ... } // from try @ 02311f50 with catch @ 02311d4c */
  if (param_1 != 0) {
    *(long *)(lVar8 + 0x48) = param_1;
    thunk_FUN_02134474((long *)(lVar8 + 0x48),param_1);
    lVar9 = *(long *)puVar5;
  }
  puVar3 = PTR_DAT_04caa200;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar5;
  }
  iVar1 = *(int *)(*(long *)(lVar9 + 0xb8) + 0x40);
  iVar2 = *(int *)(*(long *)puVar3 + 0xe4);
  *(bool *)(lVar8 + 0x50) = 0 < iVar1;
  if (iVar2 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = System_Math__Max_4830fc8(0,iVar1,0);
  *(undefined4 *)(lVar8 + 0x54) = uVar7;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar9 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
      if (lVar9 == 0) goto LAB_02311e84;
      lVar9 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar9,0);
      if (lVar9 != 0) {
        iVar1 = *(int *)(lVar9 + 0x104);
                    /* try { // try from 02311e2c to 02411e33 has its CatchHandler @ 02311f5c */
        *(bool *)(lVar8 + 0x51) = 0 < iVar1;
                    /* try { // try from 02311e34 to 02411f47 has its CatchHandler @ 02311d4c */
        if (iVar1 < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = Dino_BusSand_Core_StageEngine__get_SandLeftPermille_2426db8(lVar9,0);
        }
        goto LAB_02311e4c;
      }
    }
  }
  uVar7 = 0;
  *(undefined1 *)(lVar8 + 0x51) = 0;
LAB_02311e4c:
  lVar9 = *(long *)puVar4;
  *(undefined4 *)(lVar8 + 0x58) = uVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  puVar4 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0ee = 1;
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x28) = 1;
  fVar13 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  *(float *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c) = fVar13 + 0.5;
  return;
}

