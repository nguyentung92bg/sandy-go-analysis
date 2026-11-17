/* IL2CPP: Dino.BusSand.View.GameView$$Drafts
void Dino_BusSand_View_GameView__Drafts (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0249fa14) */
/* WARNING: Removing unreachable block (ram,0x0249fae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Drafts
   void Dino_BusSand_View_GameView__Drafts (Dino_BusSand_View_GameView_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_GameView__Drafts_239f6c0(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  
  if ((bRam0000000004f9c912 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4c8);
    FUN_02132f7c(PTR_DAT_04cbc4d0);
    FUN_02132f7c(PTR_DAT_04cbc4d8);
    FUN_02132f7c(PTR_DAT_04cbc4f0);
    FUN_02132f7c(PTR_DAT_04cbc4e0);
    bRam0000000004f9c912 = 1;
  }
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  lStack_a0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  Dino_BusSand_View_GameView__CollectParked_239fb7c(param_1);
  puVar6 = PTR_DAT_04cbc4f0;
  puVar5 = PTR_DAT_04cbc4e0;
  puVar4 = PTR_DAT_04cbc4d0;
  puVar3 = PTR_DAT_04cbc4c8;
  if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_e8,*(long *)(param_1 + 0x178),*(undefined8 *)PTR_DAT_04cbc4e0);
  fVar2 = _UNK_00e20448;
  fVar1 = _UNK_00e20094;
  lStack_a0 = lStack_d8;
  puStack_a8 = puStack_e0;
  uStack_b0 = uStack_e8;
  while( true ) {
    do {
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_b0,*(undefined8 *)puVar4);
        lVar7 = lStack_a0;
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_b0,*(undefined8 *)puVar3);
          return;
        }
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while (*(char *)(lStack_a0 + 0x378) != '\0');
      fVar12 = (float)Dino_BusSand_View_VehicleView__get_EscapeSpeed_2400fa4(lStack_a0,0);
      fVar20 = *(float *)(param_1 + 0x108);
      if (*(float *)(param_1 + 0x108) <= fVar2) {
        fVar20 = fVar2;
      }
      fVar12 = fVar12 / fVar20;
    } while (fVar12 < fVar1);
    fVar24 = fVar2;
    lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar13 = (float)UnityEngine_Transform__get_position_43d0e48(lVar9,0);
    fVar25 = fVar24;
    fVar21 = fVar20;
    lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
    if (lVar9 == 0) break;
    fVar14 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar9,0);
    fVar26 = fVar25;
    fVar22 = fVar21;
    lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar15 = (float)UnityEngine_Transform__get_right_43d15f4(lVar9,0);
    if (*(long *)(param_1 + 0x188) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar27 = fVar26;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_e8,*(long *)(param_1 + 0x188),*(undefined8 *)puVar5);
    uStack_d0 = uStack_e8;
    uStack_e8 = 0;
    puStack_c8 = puStack_e0;
    uVar8 = 0;
    lStack_c0 = lStack_d8;
    fVar17 = 1.0;
    if (fVar12 <= 1.0) {
      fVar17 = fVar12;
    }
    puStack_e0 = &uStack_d0;
    fVar16 = 0.0;
    if (0.0 <= fVar12) {
      fVar16 = fVar17;
    }
    while( true ) {
      fVar12 = (float)uVar8;
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_d0,*(undefined8 *)puVar4);
      lVar9 = lStack_c0;
      if ((uVar8 & 1) == 0) break;
      if (lStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = UnityEngine_Component__get_transform_43bcd18(lStack_c0,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(lVar10,0);
      fVar18 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar7,0);
      fVar19 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lVar9,0);
      fVar17 = fVar17 - fVar13;
      fVar23 = fVar27 - fVar24;
      uVar8 = (ulong)(uint)fVar23;
      fVar27 = fVar17;
      if (ABS(fVar25 * fVar23 + fVar14 * fVar17 + fVar21 * (fVar12 - fVar20)) <=
          fVar18 * 0.5 + fVar19 * 0.25) {
        uVar8 = (ulong)(uint)(fVar26 * fVar23);
        fVar17 = fVar26 * fVar23 + fVar15 * fVar17 + fVar22 * (fVar12 - fVar20);
        fVar27 = fVar26;
        fVar12 = (float)Dino_BusSand_View_GameView__DraftProximity_239fdc8
                                  (fVar17,param_1,lVar7,lVar9);
        if (0.0 < fVar12) {
          fVar18 = (float)Dino_BusSand_View_VehicleView__get_WidthWorld_23ff030(lVar9,0);
          fVar27 = 0.25;
          uVar8 = (ulong)(uint)ABS(fVar17);
          if (fVar18 * 0.25 <= ABS(fVar17)) {
            if (*(long *)(param_1 + 0x180) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar11 = System_Collections_Generic_HashSet_long___Add_37e2edc
                               (*(long *)(param_1 + 0x180),
                                CONCAT44(*(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar9 + 0x20)
                                        ),*(undefined8 *)puVar6);
            if ((uVar11 & 1) != 0) {
              fVar18 = -1.0;
              if (0.0 <= fVar17) {
                fVar18 = 1.0;
              }
              uVar8 = (ulong)(uint)(fVar22 * fVar18);
              fVar27 = fVar26 * fVar18;
              Dino_BusSand_View_VehicleView__Draft_23fdb94
                        (fVar15 * fVar18,uVar8,fVar27,fVar16 * fVar12,lVar9,0);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_d0,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

