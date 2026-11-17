/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Step
void Dino_BusSand_App_UI_HomePuffs__Step (Dino_BusSand_App_UI_HomePuffs_o* __this, float dt, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Step
   void Dino_BusSand_App_UI_HomePuffs__Step (Dino_BusSand_App_UI_HomePuffs_o* __this, float dt,
   UnityEngine_Camera_o* cam, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs__Step_22e607c
               (float param_1,float param_2,float param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000004f9c427 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb72f8);
    FUN_02132f7c(PTR_DAT_04cb7300);
    FUN_02132f7c(PTR_DAT_04cb7308);
    FUN_02132f7c(PTR_DAT_04cb7310);
    FUN_02132f7c(PTR_DAT_04cb7318);
    FUN_02132f7c(PTR_DAT_04cb7320);
    FUN_02132f7c(PTR_DAT_04cb72e8);
    FUN_02132f7c(PTR_DAT_04cb72f0);
    FUN_02132f7c(PTR_DAT_04cb7328);
    FUN_02132f7c(PTR_DAT_04cb7330);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c427 = 1;
  }
  puVar6 = PTR_DAT_04cb7330;
  puVar5 = PTR_DAT_04cb7328;
  puVar4 = PTR_DAT_04cb72e8;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
  if (*(long *)(param_4 + 0x10) != 0) {
    iVar11 = *(int *)(*(long *)(param_4 + 0x10) + 0x18);
    if (-1 < iVar11 + -1) {
      fVar12 = (float)expf(param_1 * _UNK_00e20280);
      do {
        uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
        if (*(long *)(param_4 + 0x10) == 0) goto LAB_023e66a8;
        iVar11 = iVar11 + -1;
        System_Collections_Generic_List_HomePuffs_P___get_Item_3b42a00
                  (&uStack_d0,*(long *)(param_4 + 0x10),iVar11,*(undefined8 *)puVar5);
        lVar8 = *(long *)(param_4 + 0x10);
        param_3 = fStack_b8 + param_1;
        uStack_e8 = uStack_a8;
        uStack_f0 = uStack_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        if (fStack_b4 <= param_3) {
          if (lVar8 == 0) goto LAB_023e66a8;
          param_2 = fStack_b4;
          System_Collections_Generic_List_HomePuffs_P___RemoveAt_3b447f4
                    (lVar8,iVar11,*(undefined8 *)puVar4);
        }
        else {
          uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
          if (lVar8 == 0) goto LAB_023e66a8;
          fVar23 = uStack_c8._4_4_ * param_1;
          fVar24 = fStack_c0 * param_1;
          fVar25 = fStack_bc * param_1;
          fStack_bc = fVar12 * fStack_bc;
          uStack_c8._4_4_ = fVar12 * uStack_c8._4_4_;
          fStack_c0 = param_1 * 0.25 + fVar12 * fStack_c0;
          uStack_d0 = CONCAT44((float)(uStack_d0 >> 0x20) + fVar24,(float)uStack_d0 + fVar23);
          uStack_c8._0_4_ = (float)uStack_c8 + fVar25;
          uVar15 = uStack_b0;
          uVar21 = uStack_a0;
          fStack_b8 = param_3;
          System_Collections_Generic_List_HomePuffs_P___set_Item_3b42a68
                    (lVar8,iVar11,&uStack_d0,*(undefined8 *)puVar6);
          param_2 = (float)uVar15;
          param_3 = (float)uVar21;
        }
      } while (0 < iVar11);
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
    if (param_5 != 0) {
      lVar8 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
      if (lVar8 != 0) {
        uVar13 = UnityEngine_Transform__get_right_43d15f4(lVar8,0);
        fVar12 = param_3;
        fVar23 = param_2;
        lVar8 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
        uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
        if (lVar8 != 0) {
          UnityEngine_Transform__get_up_43d16f4(lVar8,0);
          lVar8 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
          uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
          if (lVar8 != 0) {
            fVar24 = (float)UnityEngine_Transform__get_position_43d0e48(lVar8,0);
            uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
            if (*(long *)(param_4 + 0x10) != 0) {
              uVar3 = *(uint *)(*(long *)(param_4 + 0x10) + 0x18);
              if (0 < (int)uVar3) {
                uVar9 = 0;
                do {
                  lVar8 = *(long *)(param_4 + 0x70);
                  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
                  if (lVar8 == 0) goto LAB_023e66a8;
                  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_023e66ac;
                  *(int *)(lVar8 + uVar9 * 4 + 0x20) = (int)uVar9;
                  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
                  if (*(long *)(param_4 + 0x10) == 0) goto LAB_023e66a8;
                  lVar8 = *(long *)(param_4 + 0x68);
                  System_Collections_Generic_List_HomePuffs_P___get_Item_3b42a00
                            (&uStack_d0,*(long *)(param_4 + 0x10),uVar9 & 0xffffffff,
                             *(undefined8 *)puVar5);
                  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
                  if (lVar8 == 0) goto LAB_023e66a8;
                  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_023e66ac;
                  lVar2 = uVar9 * 4;
                  uVar9 = uVar9 + 1;
                  *(float *)(lVar8 + lVar2 + 0x20) =
                       ((float)uStack_d0 - fVar24) * ((float)uStack_d0 - fVar24) +
                       (uStack_d0._4_4_ - fVar23) * (uStack_d0._4_4_ - fVar23) +
                       ((float)uStack_c8 - fVar12) * ((float)uStack_c8 - fVar12);
                } while (uVar3 != uVar9);
              }
              System_Array__Sort_float__int__26a3b84
                        (*(undefined8 *)(param_4 + 0x68),*(undefined8 *)(param_4 + 0x70),0,
                         (ulong)uVar3,*(undefined8 *)PTR_DAT_04cb72f8);
              Dino_BusSand_App_UI_HomePuffs__Begin_22e6710(param_4);
              fVar25 = _UNK_00e20660;
              if (-1 < (int)(uVar3 - 1)) {
                uVar9 = (ulong)(uVar3 - 1);
                do {
                  lVar8 = *(long *)(param_4 + 0x70);
                  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
                  if (lVar8 == 0) goto LAB_023e66a8;
                  if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_023e66ac:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  uStack_c8 = (undefined8 *)CONCAT44(uStack_c8._4_4_,(float)uStack_c8);
                  if (*(long *)(param_4 + 0x10) == 0) goto LAB_023e66a8;
                  System_Collections_Generic_List_HomePuffs_P___get_Item_3b42a00
                            (&uStack_d0,*(long *)(param_4 + 0x10),
                             *(undefined4 *)(lVar8 + uVar9 * 4 + 0x20),*(undefined8 *)puVar5);
                  fVar18 = 1.0 - fStack_b8 / fStack_b4;
                  fVar22 = 1.0 - fVar18 * fVar18;
                  fVar18 = 1.0;
                  if (fVar22 <= 1.0) {
                    fVar18 = fVar22;
                  }
                  fVar14 = 0.0;
                  if (0.0 <= fVar22) {
                    fVar14 = fVar18;
                  }
                  Dino_BusSand_App_UI_HomePuffs__Quad_22e67c0
                            (uStack_d0 & 0xffffffff,uStack_d0._4_4_,(float)uStack_c8,
                             (float)uStack_b0 + (uStack_b0._4_4_ - (float)uStack_b0) * fVar14,
                             (fStack_b8 / fStack_b4) * uStack_a8._4_4_ * fVar25,uVar13,param_2,
                             param_3,param_4);
                  bVar1 = 0 < (long)uVar9;
                  uVar9 = uVar9 - 1;
                } while (bVar1);
              }
              Dino_BusSand_App_UI_HomePuffs__End_22e6f3c(param_4,*(undefined8 *)(param_4 + 0x20));
              Dino_BusSand_App_UI_HomePuffs__Begin_22e6710(param_4);
              if (*(long *)(param_4 + 0x18) != 0) {
                System_Collections_Generic_List_HomePuffs_P___GetEnumerator_3b438f0
                          (&uStack_140,*(long *)(param_4 + 0x18),*(undefined8 *)PTR_DAT_04cb7320);
                puVar6 = PTR_DAT_04cb7308;
                puVar5 = PTR_DAT_04caa208;
                puVar4 = PTR_DAT_04caa200;
                fVar18 = _UNK_00e20a08;
                fVar25 = _UNK_00e1fea8;
                uStack_d0 = 0;
                uStack_c8 = &uStack_140;
                while( true ) {
                  uVar9 = System_Collections_Generic_List_Enumerator_HomePuffs_P___MoveNext_3611544
                                    (&uStack_140,*(undefined8 *)puVar6);
                  uVar15 = uStack_130;
                  if ((uVar9 & 1) == 0) break;
                  fVar22 = (float)uStack_128;
                  uVar7 = (undefined4)uStack_110;
                  if (cRam0000000004f9b65c == '\0') {
                    FUN_02132f7c(puVar4);
                    cRam0000000004f9b65c = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  fVar26 = (float)uVar15;
                  fVar14 = fVar24 - fVar26;
                  fVar17 = (float)((ulong)uVar15 >> 0x20);
                  fVar16 = fVar23 - fVar17;
                  fVar19 = fVar12 - fVar22;
                  fVar20 = SQRT(fVar19 * fVar19 + fVar14 * fVar14 + fVar16 * fVar16);
                  if (fVar20 <= fVar18) {
                    if (cRam0000000004f9b65d == '\0') {
                      FUN_02132f7c(puVar5);
                      cRam0000000004f9b65d = '\x01';
                    }
                    puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                    uVar15 = *puVar10;
                    fVar19 = *(float *)(puVar10 + 1);
                  }
                  else {
                    fVar19 = fVar19 / fVar20;
                    uVar15 = CONCAT44(fVar16 / fVar20,fVar14 / fVar20);
                  }
                  fVar17 = fVar17 + (float)((ulong)uVar15 >> 0x20) * 0.9;
                  Dino_BusSand_App_UI_HomePuffs__Quad_22e67c0
                            (CONCAT44(fVar17,fVar26 + (float)uVar15 * 0.9),fVar17,
                             fVar22 + fVar19 * fVar25,uVar7,0,uVar13,param_2,param_3,param_4);
                }
                System_Collections_Generic_List_Enumerator_HomePuffs_P___Dispose_3611540
                          (&uStack_140,*(undefined8 *)PTR_DAT_04cb7300);
                lVar8 = *(long *)(param_4 + 0x18);
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x18) = 0;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  Dino_BusSand_App_UI_HomePuffs__End_22e6f3c
                            (param_4,*(undefined8 *)(param_4 + 0x28));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023e66a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

