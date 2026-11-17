/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Update
void Dino_BusSand_Cheat_CheatManager__Update (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047a0e1c) */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Update
   void Dino_BusSand_Cheat_CheatManager__Update (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Update_236653c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  puVar2 = PTR_DAT_04cabca8;
  if ((bRam0000000004f9c75c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cabca8);
                    /* try { // try from 0246657c to 025666ff has its CatchHandler @ 0246657c
                       catch() { ... } // from try @ 0246657c with catch @ 0246657c
                       catch() { ... } // from try @ 024667fc with catch @ 0246657c
                       catch() { ... } // from try @ 02466830 with catch @ 0246657c
                       catch() { ... } // from try @ 02466878 with catch @ 0246657c
                       catch() { ... } // from try @ 0246689c with catch @ 0246657c */
    FUN_02132f7c(PTR_DAT_04cba950);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c75c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  lVar12 = 0;
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) goto LAB_024667a8;
    lVar12 = *(long *)(lVar3 + 0x40);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  lVar13 = 0;
  if ((uVar4 & 1) != 0) {
    if (lVar12 == 0) goto LAB_024667a8;
    lVar13 = UnityEngine_GameObject__GetComponent_object__275a5dc
                       (lVar12,*(undefined8 *)PTR_DAT_04cba950);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  if ((uVar4 & 1) == 0) {
    cVar8 = '\0';
  }
  else {
    if (lVar13 == 0) goto LAB_024667a8;
    cVar8 = *(char *)(lVar13 + 0x260);
  }
  if ((*(char *)(param_1 + 0x121) == '\0') && (*(char *)(param_1 + 0x122) == '\0')) {
    cVar9 = *(char *)(param_1 + 0x78);
  }
  else {
    cVar9 = '\x01';
  }
  *(bool *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 4) = cVar9 != '\0' || cVar8 != '\0';
  Dino_BusSand_Cheat_CheatManager__UpdatePointerBlock_235f1b0(param_1);
  Dino_BusSand_Cheat_CheatManager__TickJumpBoxInput_235ef20(param_1);
  if (cVar9 == '\0' && cVar8 == '\0') {
    Dino_BusSand_Cheat_CheatManager__ReadHotkeys_23667ac(param_1);
  }
  Dino_BusSand_Cheat_CheatManager__ApplyTime_23669cc(param_1);
  Dino_BusSand_Cheat_CheatManager__TickCreative_235cd24(param_1);
  Dino_BusSand_Cheat_CheatManager__TickAutoSolve_2366c14(param_1);
  Dino_BusSand_Cheat_CheatManager__TickAutoPlay_235e358(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  lVar12 = 0;
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 02466700 to 02566707 has its CatchHandler @ 02466858 */
    if (lVar3 == 0) goto LAB_024667a8;
    lVar12 = *(long *)(lVar3 + 0x40);
  }
                    /* try { // try from 02466710 to 02566717 has its CatchHandler @ 02466854 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 02466798 to 025667fb has its CatchHandler @ 02466844 */
    return;
  }
  if (lVar12 != 0) {
                    /* try { // try from 02466730 to 0256673b has its CatchHandler @ 02466848 */
                    /* try { // try from 0246673c to 02566747 has its CatchHandler @ 0246684c */
    uVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (lVar12,*(undefined8 *)PTR_DAT_04cba950);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02466754 to 0256675f has its CatchHandler @ 0246683c */
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 02466760 to 0256676b has its CatchHandler @ 02466840 */
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (lVar3 != 0) {
      uVar5 = UnityEngine_EventSystems_EventSystem__get_baseEventDataCache_46a1ff4(lVar3,0,0);
      if ((bRam0000000004fac7df & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9af8);
        FUN_02132f7c(PTR_DAT_04d0a398);
        FUN_02132f7c(PTR_DAT_04d0a3a0);
        FUN_02132f7c(PTR_DAT_04cabcb8);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04d0a3a8);
        FUN_02132f7c(PTR_DAT_04d0a3b0);
        bRam0000000004fac7df = 1;
      }
      puVar1 = PTR_DAT_04ca9af8;
      puVar2 = PTR_DAT_04ca9ae8;
      if (*(char *)(lVar3 + 0x49) == '\0') {
        puVar6 = (undefined8 *)(lVar3 + 0x40);
        uVar7 = *puVar6;
        *(undefined1 *)(lVar3 + 0x49) = 1;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(0,uVar7,0);
        puVar2 = PTR_DAT_04cabcb8;
        if ((uVar4 & 1) == 0) {
          uVar7 = *puVar6;
          if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004fac842 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabcb8);
            cRam0000000004fac842 = '\x01';
          }
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar2;
          }
          UnityEngine_EventSystems_ExecuteEvents__Execute_object__2745da0
                    (uVar7,uVar5,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x70),
                     *(undefined8 *)PTR_DAT_04d0a398);
          *puVar6 = 0;
          thunk_FUN_02134474(puVar6,0);
          uVar7 = *puVar6;
          if (cRam0000000004fac843 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabcb8);
            cRam0000000004fac843 = '\x01';
          }
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar2;
          }
          UnityEngine_EventSystems_ExecuteEvents__Execute_object__2745da0
                    (uVar7,uVar5,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x68),
                     *(undefined8 *)PTR_DAT_04d0a3a0);
        }
        *(undefined1 *)(lVar3 + 0x49) = 0;
        return;
      }
      uVar5 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04d0a3a8,0,*(undefined8 *)PTR_DAT_04d0a3b0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      puVar2 = PTR_DAT_04ca9af8;
      uVar7 = 0;
      if ((bRam0000000004fa6266 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9af8,0);
        FUN_02132f7c(PTR_DAT_04ce7050);
        bRam0000000004fa6266 = 1;
        uVar7 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar7 = extraout_x1_00;
      }
      if (cRam0000000004f9d848 == '\0') {
        FUN_02132f7c(PTR_DAT_04ca9af8,uVar7);
        cRam0000000004f9d848 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      plVar11 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ce7050) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_044616fc;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ce7050,3);
LAB_044616fc:
                    /* WARNING: Could not recover jumptable at 0x04461714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar11,0,uVar5,puVar6[1]);
      return;
    }
  }
LAB_024667a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

