/* IL2CPP: Dino.BusSand.Core.Road$$.ctor
void Dino_BusSand_Core_Road___ctor (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadConfig_o* config, int32_t boardWidthGrains, int32_t sideMarginGrains, int32_t capacity, int32_t exitRunGrains, int32_t entryRunGrains, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$.ctor
   void Dino_BusSand_Core_Road___ctor (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadConfig_o* config, int32_t boardWidthGrains, int32_t sideMarginGrains,
   int32_t capacity, int32_t exitRunGrains, int32_t entryRunGrains, const MethodInfo* method); */

void Dino_BusSand_Core_Road___ctor_2411a80
               (long param_1,long param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar11 = PTR_DAT_04cbe5b0;
  puVar10 = PTR_DAT_04cbe5a8;
  puVar9 = PTR_DAT_04cbe5a0;
  puVar8 = PTR_DAT_04cbe598;
  puVar7 = PTR_DAT_04cbe590;
  puVar6 = PTR_DAT_04cbe588;
  if ((bRam0000000004f9cb51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe590);
    FUN_02132f7c(PTR_DAT_04cbe5b0);
    FUN_02132f7c(PTR_DAT_04cbe588);
    FUN_02132f7c(PTR_DAT_04cbe5a8);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04cbe5b8);
    FUN_02132f7c(PTR_DAT_04cbe5a0);
    FUN_02132f7c(PTR_DAT_04cbe598);
    FUN_02132f7c(PTR_DAT_04cbe5c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb51 = 1;
  }
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar14,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x48) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar14,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x50) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar14,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x58) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar10);
  System_Collections_Generic_Dictionary_int__double____ctor_3421cc8(uVar14,*(undefined8 *)puVar11);
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae200);
  System_Collections_Generic_HashSet_int____ctor_37daeb0(uVar14,*(undefined8 *)PTR_DAT_04cae208);
  *(undefined8 *)(param_1 + 0x68) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x68),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe5c0);
  System_Collections_Generic_List_GrainPoint____ctor_3a2676c(uVar14,*(undefined8 *)PTR_DAT_04cbe5b8)
  ;
  *(undefined8 *)(param_1 + 0x70) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar14,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x78),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar10);
  System_Collections_Generic_Dictionary_int__double____ctor_3421cc8(uVar14,*(undefined8 *)puVar11);
  *(undefined8 *)(param_1 + 0x80) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x80),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar10);
  System_Collections_Generic_Dictionary_int__double____ctor_3421cc8(uVar14,*(undefined8 *)puVar11);
  *(undefined8 *)(param_1 + 0x88) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x88),uVar14);
  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar14,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x90) = uVar14;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x90),uVar14);
  System_Object___ctor_4870e5c(param_1,0);
  puVar6 = PTR_DAT_04caa200;
  if (param_2 != 0) {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x10),param_2);
    lVar15 = *(long *)puVar6;
    iVar2 = *(int *)(param_2 + 0x10);
    iVar13 = param_4;
    if (param_6 != 0) {
      iVar13 = param_6;
    }
    *(undefined4 *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x1c) = param_4;
    iVar1 = *(int *)(lVar15 + 0xe4);
    *(int *)(param_1 + 0x28) = iVar13;
    *(undefined4 *)(param_1 + 0x2c) = param_7;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    auVar3 = SEXT816((long)iVar2 * 0x1f18e + 0x3a92) * SEXT816(0x45eedbb3a5b7215d);
    auVar4 = SEXT816((long)iVar2 * 0x187b8 + 0x3a92) * SEXT816(0x45eedbb3a5b7215d);
    auVar5 = SEXT816((long)iVar2 * 0x13338 + 0x3a92) * SEXT816(0x45eedbb3a5b7215d);
    uVar12 = System_Math__Min_4831118
                       ((int)(auVar4._8_8_ >> 0xd) - (auVar4._12_4_ >> 0x1f),
                        (int)(auVar3._8_8_ >> 0xd) - (auVar3._12_4_ >> 0x1f),0);
    iVar13 = System_Math__Min_4831118((int)(auVar5._8_8_ >> 0xd) - (auVar5._12_4_ >> 0x1f),uVar12,0)
    ;
    uVar14 = System_Math__Max_4830f98
                       (0x3ff0000000000000,
                        (double)*(int *)(param_1 + 0x2c) /
                        (double)(*(int *)(param_2 + 0x24) + iVar13),0);
    iVar2 = *(int *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = uVar14;
    iVar13 = *(int *)(param_1 + 0x18) + param_4 * 2;
    *(int *)(param_1 + 0x20) = iVar13;
    *(int *)(param_1 + 0x24) = (iVar2 + iVar13) * 2;
    uVar12 = System_Math__Max_4830fc8(1,param_5,0);
    *(undefined4 *)(param_1 + 0x38) = uVar12;
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x2c);
    return;
  }
  thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
  uVar14 = thunk_FUN_0216e89c();
  uVar16 = thunk_FUN_021985a8(PTR_DAT_04cbe5d0);
  System_ArgumentNullException___ctor_47afb54(uVar14,uVar16,0);
  uVar16 = thunk_FUN_021985a8(PTR_DAT_04cbe5d8);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar14,uVar16);
}

