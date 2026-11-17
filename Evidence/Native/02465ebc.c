/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Awake
void Dino_BusSand_Cheat_CheatManager__Awake (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Awake
   void Dino_BusSand_Cheat_CheatManager__Awake (Dino_BusSand_Cheat_CheatManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Awake_2365ebc(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  
  puVar4 = PTR_DAT_04cba458;
  if ((bRam0000000004f9c759 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cba440);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba938);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba940);
    FUN_02132f7c(PTR_DAT_04cba948);
    bRam0000000004f9c759 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c7a5 == '\0') {
    FUN_02132f7c(PTR_DAT_04cba458);
    cRam0000000004f9c7a5 = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 02465fd8 to 0256615f has its CatchHandler @ 02465fd8
                       catch() { ... } // from try @ 02465fd8 with catch @ 02465fd8
                       catch() { ... } // from try @ 02466234 with catch @ 02465fd8
                       catch() { ... } // from try @ 024662d4 with catch @ 02465fd8
                       catch() { ... } // from try @ 02466334 with catch @ 02465fd8 */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c7a5 == '\0') {
      FUN_02132f7c(PTR_DAT_04cba458);
      cRam0000000004f9c7a5 = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,param_1,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      puVar4 = PTR_DAT_04ca9ae8;
      uVar16 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar16 = extraout_x1_01;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar16 = extraout_x1_02;
      }
      puVar4 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar16);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar4 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar16 = 0;
      if (lVar9 != 0) {
        uVar16 = *(undefined8 *)(lVar9 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8680)(0,uVar16);
      return;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c7a6 == '\0') {
    FUN_02132f7c(PTR_DAT_04cba458);
    cRam0000000004f9c7a6 = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  plVar11 = (long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  *plVar11 = param_1;
  thunk_FUN_02134474(plVar11,param_1);
  Dino_BusSand_Cheat_CheatManager__LoadConfig_23646e4(param_1);
  puVar3 = PTR_DAT_04cab380;
  cVar2 = *(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
  if (cVar2 == '\0') {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_024662c0;
    bVar7 = *(char *)(*(long *)(param_1 + 0x100) + 0x3d) != '\0';
  }
  else {
    bVar7 = false;
  }
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  *(bool *)*(undefined8 *)(*(long *)PTR_DAT_04cab380 + 0xb8) = bVar7;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
    if (*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) == '\0') goto LAB_02466148;
LAB_0246612c:
    bVar7 = false;
  }
  else {
    if (cVar2 != '\0') goto LAB_0246612c;
LAB_02466148:
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_024662c0;
    bVar7 = *(char *)(*(long *)(param_1 + 0x100) + 0x3e) != '\0';
  }
  puVar6 = PTR_DAT_04cba938;
  puVar5 = PTR_DAT_04cba440;
  puVar4 = PTR_DAT_04caa458;
                    /* try { // try from 02466160 to 02566187 has its CatchHandler @ 024662fc */
  *(bool *)(*(long *)(*(long *)puVar3 + 0xb8) + 2) = bVar7;
  uVar8 = Dino_BusSand_Cheat_CheatManager__SpeedIndexOf_2365324(0x3f800000,param_1);
  *(undefined4 *)(param_1 + 0x13c) = uVar8;
  uVar16 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  uVar16 = Dino_BusSand_Cheat_CheatHint__Create_235b394(uVar16);
  *(undefined8 *)(param_1 + 0x118) = uVar16;
                    /* try { // try from 024661c4 to 025661eb has its CatchHandler @ 024662f8 */
  thunk_FUN_02134474(param_1 + 0x118,uVar16);
  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar16,0,*(undefined8 *)puVar6,0);
                    /* try { // try from 024661f4 to 025661fb has its CatchHandler @ 024662e8 */
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar12 = uVar16;
  thunk_FUN_02134474(puVar12,uVar16);
                    /* try { // try from 024661fc to 02566207 has its CatchHandler @ 024662ec */
  lVar9 = System_Environment__GetCommandLineArgs_4872d08(0);
  puVar4 = PTR_DAT_04cba940;
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
                    /* try { // try from 0246621c to 02566227 has its CatchHandler @ 024662e4 */
      uVar10 = 0;
      uVar14 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
                    /* try { // try from 02466228 to 02566233 has its CatchHandler @ 024662e0 */
      do {
                    /* try { // try from 02466234 to 025662cb has its CatchHandler @ 02465fd8 */
        if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar14 = System_String__op_Equality_46d1108
                           (*(undefined8 *)(lVar9 + 0x20 + uVar10 * 8),*(undefined8 *)puVar4,0);
        if ((uVar14 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x120) = 1;
        }
        uVar14 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    puVar3 = PTR_DAT_04cba948;
    puVar4 = PTR_DAT_04ca9af8;
    uVar16 = Dino_BusSand_Cheat_CheatConfig__get_FilePath_2359a40();
    uVar16 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar16,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    puVar4 = PTR_DAT_04ca9af8;
    uVar13 = 0;
    if ((bRam0000000004fa6262 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9af8,0);
      FUN_02132f7c(PTR_DAT_04ce7050);
      bRam0000000004fa6262 = 1;
      uVar13 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar13 = extraout_x1_00;
    }
    if (cRam0000000004f9d848 == '\0') {
      FUN_02132f7c(PTR_DAT_04ca9af8,uVar13);
      cRam0000000004f9d848 = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ce7050) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_044610b0;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ce7050,3);
LAB_044610b0:
                    /* WARNING: Could not recover jumptable at 0x044610c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar12)(plVar11,3,uVar16,puVar12[1]);
    return;
  }
LAB_024662c0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

