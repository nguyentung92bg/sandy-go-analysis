/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$PersonDeadByStage
void Dino_BusSand_App_Meta_BattleRoyaleCore__PersonDeadByStage (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$PersonDeadByStage
   void Dino_BusSand_App_Meta_BattleRoyaleCore__PersonDeadByStage
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__PersonDeadByStage_2222c90(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  ulong uStack_78;
  int iStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  float fStack_5c;
  float fStack_58;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
LAB_02322e14:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(char *)(lVar12 + 0x80) == '\0') ||
     (iVar16 = *(int *)(lVar12 + 0x20), iVar16 <= *(int *)(lVar12 + 0x98))) {
    return param_1;
  }
  lVar12 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalStagePerson_2221590();
  lVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(param_1);
  iVar5 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4(*(undefined8 *)(param_1 + 0x10))
  ;
  if (lVar12 == 0) {
    fVar18 = 10.0;
  }
  else {
    fVar18 = ((float)(*(int *)(lVar12 + 0x20) + -1) - (float)*(int *)(lVar12 + 0x1c)) * 0.5 +
             (float)*(int *)(lVar12 + 0x1c);
  }
  uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_PersonalType_2221760(param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02322e14;
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
  lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona_2221430(param_1);
  if (lVar10 == 0) {
    fStack_5c = 0.0;
  }
  else {
    lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona_2221430(param_1);
    if (lVar10 == 0) goto LAB_02322e14;
    fStack_5c = (float)*(int *)(lVar10 + 0x1c);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02322e14;
  uVar19 = NEON_scvtf(uVar19,4);
  uStack_78 = (ulong)(iVar16 + 1U) | lVar9 << 0x20;
  fStack_58 = (float)*(int *)(*(long *)(param_1 + 0x10) + 0x5c);
  uStack_64 = NEON_rev64(uVar19,4);
  iStack_70 = iVar5 + 1;
  fStack_6c = fVar18;
  uStack_68 = uVar6;
  iVar7 = Dino_BusSand_App_Meta_BattleRoyaleRules__ComputeEliminations_2223290(&uStack_78);
  iVar8 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(param_1);
  if (iVar8 <= (int)(iVar16 + 1U)) {
    iVar7 = Dino_BusSand_App_Meta_BattleRoyaleRules__ApplyFinalStageRule_2223534
                      (iVar7,iVar5 + 1,lVar12,*(undefined8 *)(param_1 + 0x18));
  }
  lVar12 = *(long *)(param_1 + 0x10);
  uVar19 = *(undefined8 *)(param_1 + 0x18);
  if ((bRam0000000004f9bdf0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae210);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb2b00);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdf0 = 1;
  }
  if (((lVar12 == 0) || (*(char *)(lVar12 + 0x80) == '\0')) || (iVar16 <= *(int *)(lVar12 + 0x98)))
  {
    return 0;
  }
  Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists_221f420(lVar12);
  puVar2 = PTR_DAT_04cae200;
  uVar17 = *(undefined8 *)(lVar12 + 0x90);
  *(int *)(lVar12 + 0x98) = iVar16;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet_int____ctor_37dafa0
            (lVar9,uVar17,*(undefined8 *)PTR_DAT_04cb2b00);
  puVar3 = PTR_DAT_04caa1c8;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar10,*(undefined8 *)PTR_DAT_04cad6e8);
  puVar4 = PTR_DAT_04cae220;
  puVar2 = PTR_DAT_04caa160;
  if (0 < *(int *)(lVar12 + 0x84)) {
    if (lVar9 == 0) goto LAB_023239f0;
    iVar16 = 0;
    do {
      uVar11 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                         (lVar9,iVar16,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) {
        if (lVar10 == 0) goto LAB_023239f0;
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_023239f0;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = iVar16;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar10,iVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar12 + 0x84));
  }
  if (lVar10 != 0) {
    iVar16 = *(int *)(lVar10 + 0x18);
    if (iVar7 <= *(int *)(lVar10 + 0x18)) {
      iVar16 = iVar7;
    }
    Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
              (lVar10,uVar19,*(undefined8 *)PTR_DAT_04cae210);
    lVar9 = *(long *)(lVar12 + 0xa0);
    if (lVar9 != 0) {
      lVar13 = *(long *)PTR_DAT_04caa200;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = System_Math__Max_4830fc8(0,iVar16,0);
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_int____ctor_3a2b854
                (lVar9,uVar6,*(undefined8 *)PTR_DAT_04caa188);
      puVar3 = PTR_DAT_04cae230;
      puVar2 = PTR_DAT_04caa160;
      if (iVar16 < 1) {
        return lVar9;
      }
      iVar5 = 0;
      while (uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                               (lVar10,iVar5,*(undefined8 *)puVar3), lVar9 != 0) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar9,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar13 = *(long *)(lVar12 + 0x90);
        uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar10,iVar5,*(undefined8 *)puVar3);
        if (lVar13 == 0) break;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar13,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        }
        lVar13 = *(long *)(lVar12 + 0xa0);
        uVar6 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (lVar10,iVar5,*(undefined8 *)puVar3);
        if (lVar13 == 0) break;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar13,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        }
        iVar5 = iVar5 + 1;
        if (iVar16 == iVar5) {
          return lVar9;
        }
      }
    }
  }
LAB_023239f0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

