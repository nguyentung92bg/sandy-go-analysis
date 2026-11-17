/* IL2CPP: Dino.BusSand.View.WorldView$$Build
void Dino_BusSand_View_WorldView__Build (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$Build
   void Dino_BusSand_View_WorldView__Build (Dino_BusSand_View_WorldView_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_View_WorldView__Build_2402204(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long in_stack_ffffffffffffff78;
  
  if ((bRam0000000004f9cb0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    bRam0000000004f9cb0f = 1;
  }
  uVar15 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  puVar7 = PTR_DAT_04cbc2b8;
  if ((uVar15 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar16 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar7);
    }
    if ((bRam0000000004f9cb10 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbe0a8);
      FUN_02132f7c(PTR_DAT_04cbe0b0);
      FUN_02132f7c(PTR_DAT_04cbe0b8);
      FUN_02132f7c(PTR_DAT_04cb6dc0);
      FUN_02132f7c(PTR_DAT_04cb6dc8);
      FUN_02132f7c(PTR_DAT_04caa070);
      FUN_02132f7c(PTR_DAT_04cbe0c0);
      FUN_02132f7c(PTR_DAT_04cb6de0);
      FUN_02132f7c(PTR_DAT_04cb6de8);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cad748);
      bRam0000000004f9cb10 = 1;
    }
    lVar17 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    puVar11 = PTR_DAT_04cbe0b0;
    puVar10 = PTR_DAT_04cb6dc8;
    puVar9 = PTR_DAT_04cb6dc0;
    puVar8 = PTR_DAT_04caa070;
    puVar7 = PTR_DAT_04ca9ae8;
    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x50) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&stack0xffffffffffffff68,*(long *)(lVar17 + 0x50),*(undefined8 *)PTR_DAT_04cbe0c0);
    puVar6 = PTR_DAT_04ca9ac8;
    while( true ) {
      do {
        uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&stack0xffffffffffffff80,*(undefined8 *)puVar11);
        if ((uVar15 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&stack0xffffffffffffff80,*(undefined8 *)PTR_DAT_04cbe0a8);
          return;
        }
        if (in_stack_ffffffffffffff78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar27 = *(undefined8 *)(in_stack_ffffffffffffff78 + 0x18);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Equality_43c6f30(uVar27,0,0);
      } while ((uVar15 & 1) != 0);
      uVar28 = *(undefined8 *)(in_stack_ffffffffffffff78 + 0x10);
      plVar18 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
      uVar27 = *(undefined8 *)PTR_DAT_04cb6de0;
      if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar17 = System_Type__GetTypeFromHandle_483f0b4(uVar27,0);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0)) {
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar18[4] = lVar17;
      thunk_FUN_02134474(plVar18 + 4,lVar17);
      lVar17 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0)) {
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      if ((*(uint *)(plVar18 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar18[5] = lVar17;
      thunk_FUN_02134474(plVar18 + 5,lVar17);
      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
      UnityEngine_GameObject___ctor_43c2310(lVar17,uVar28,plVar18,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Transform__SetParent_43d1e34(lVar19,uVar16,0,0);
      lVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
      if (lVar19 == 0) break;
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(undefined4 *)(in_stack_ffffffffffffff78 + 0x28),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x2c),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x30),lVar19,0);
      lVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Transform__set_localRotation_43d156c
                (*(undefined4 *)(in_stack_ffffffffffffff78 + 0x34),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x38),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x3c),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x40),lVar19,0);
      lVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(in_stack_ffffffffffffff78 + 0x44),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x48),
                 *(undefined4 *)(in_stack_ffffffffffffff78 + 0x4c),lVar19,0);
      lVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar17,*(undefined8 *)puVar9);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_MeshFilter__set_sharedMesh_4389470
                (lVar19,*(undefined8 *)(in_stack_ffffffffffffff78 + 0x18),0);
      lVar17 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar17,*(undefined8 *)puVar10);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Renderer__set_sharedMaterials_43743d4
                (lVar17,*(undefined8 *)(in_stack_ffffffffffffff78 + 0x20),0);
      UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar17,0,0);
      UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar17,0,0);
      UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar17,0,0);
      UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar17,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_WorldView__BuildGround_2402758(param_1);
  Dino_BusSand_View_WorldView__BuildBackdrop_2402b80(param_1);
  Dino_BusSand_View_WorldView__BuildBoardFrame_2403938(param_1);
  if ((bRam0000000004f9cb1b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbe168);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbe170);
    FUN_02132f7c(PTR_DAT_04cbe178);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04cbe180);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cbc5b8);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbe188);
    FUN_02132f7c(PTR_DAT_04cbe0c8);
    FUN_02132f7c(PTR_DAT_04cbd180);
    FUN_02132f7c(PTR_DAT_04cbe190);
    FUN_02132f7c(PTR_DAT_04cbe198);
    FUN_02132f7c(PTR_DAT_04cbe1a0);
    FUN_02132f7c(PTR_DAT_04cbcf60);
    FUN_02132f7c(PTR_DAT_04cbd188);
    FUN_02132f7c(PTR_DAT_04cbd190);
    FUN_02132f7c(PTR_DAT_04cbd198);
    FUN_02132f7c(PTR_DAT_04cbe1a8);
    FUN_02132f7c(PTR_DAT_04cbda18);
    FUN_02132f7c(PTR_DAT_04cbd1a0);
    FUN_02132f7c(PTR_DAT_04cb76e0);
    FUN_02132f7c(PTR_DAT_04cbe1b0);
    FUN_02132f7c(PTR_DAT_04cbe1b8);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04cbd1a8);
    FUN_02132f7c(PTR_DAT_04cbe1c0);
    bRam0000000004f9cb1b = 1;
  }
  puVar8 = PTR_DAT_04cbc2b8;
  puVar7 = PTR_DAT_04cb6dd0;
  lVar17 = *(long *)(param_1 + 0x20);
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  if (lVar17 != 0) {
    lVar19 = *(long *)PTR_DAT_04cbc2b8;
    fVar43 = *(float *)(lVar17 + 0xcc);
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar19 = *(long *)puVar8;
    }
    puVar8 = PTR_DAT_04cbe188;
    lVar19 = *(long *)(lVar19 + 0xb8);
    uVar32 = *(undefined4 *)(lVar19 + 0x34);
    uVar36 = *(undefined4 *)(lVar19 + 0x38);
    uVar38 = *(undefined4 *)(lVar19 + 0x3c);
    uVar41 = *(undefined4 *)(lVar19 + 0x40);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar19 = Dino_BusSand_View_MaterialLibrary__Ground_23ba8c8
                       (uVar32,uVar36,uVar38,uVar41,*(undefined8 *)puVar8,0,0);
    puVar13 = PTR_DAT_04cbe1c0;
    puVar12 = PTR_DAT_04cbe178;
    puVar6 = PTR_DAT_04cbe168;
    puVar11 = PTR_DAT_04cbd198;
    puVar10 = PTR_DAT_04cbd188;
    puVar9 = PTR_DAT_04cbc5b8;
    puVar8 = PTR_DAT_04cb76e0;
    puVar7 = PTR_DAT_04caa170;
    if (lVar19 != 0) {
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar19,*(undefined8 *)PTR_DAT_04cbd1a8,0);
      UnityEngine_Material__SetColor_43830b0
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar19,*(undefined8 *)puVar13,0);
      uVar32 = _UNK_00e204d0;
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e204d0,_UNK_00e204d0,0x3f800000,0x3f800000,lVar19,*(undefined8 *)puVar11,0);
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar19,*(undefined8 *)puVar10,0);
      uVar36 = _UNK_00e20590;
      UnityEngine_Material__SetFloat_4383048(_UNK_00e20590,lVar19,*(undefined8 *)PTR_DAT_04cbd180,0)
      ;
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e205fc,_UNK_00e2067c,uVar32,0x3f800000,lVar19,
                 *(undefined8 *)PTR_DAT_04cbd190,0);
      UnityEngine_Material__SetFloat_4383048(_UNK_00e20af8,lVar19,*(undefined8 *)puVar8,0);
      UnityEngine_Material__SetColor_43830b0
                (_UNK_00e1ff28,_UNK_00e2023c,_UNK_00e20ad0,0x3f800000,lVar19,
                 *(undefined8 *)PTR_DAT_04caa108,0);
      UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar19,*(undefined8 *)PTR_DAT_04cbd1a0,0);
      lVar20 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe180);
      System_Collections_Generic_List_ValueTuple_Vector3__float__float_____ctor_39d8fc8
                (lVar20,*(undefined8 *)PTR_DAT_04cbe170);
      puVar8 = PTR_DAT_04cbc2b8;
      dVar5 = _UNK_00e69c40;
      fVar34 = _UNK_00e20660;
      iVar1 = *(int *)(lVar17 + 0xe8);
      iVar2 = *(int *)(lVar17 + 0xec);
      iVar21 = 0;
      dVar40 = (double)iVar1;
      do {
        dVar35 = (((double)((iVar2 + iVar1) * 2) - dVar40) * (double)iVar21) / dVar5 + dVar40;
        Dino_BusSand_View_StageLayout__RoadPose_23e8aec(dVar35,lVar17,&uStack_d0,&uStack_d4,0);
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        System_ValueTuple_Vector3__float__float____ctor_3110ad4
                  (uStack_d0 & 0xffffffff,uStack_d0._4_4_,uStack_c8,uStack_d4,
                   (float)((dVar35 * (double)*(float *)(lVar17 + 0x5c)) /
                          (double)(*(float *)(lVar17 + 0x60) * fVar34)),&uStack_e8,
                   *(undefined8 *)puVar9);
        if (lVar20 == 0) goto LAB_0250499c;
        lVar22 = *(long *)(lVar20 + 0x10);
        lVar25 = *(long *)puVar6;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_0250499c;
        uVar3 = *(uint *)(lVar20 + 0x18);
        if (uVar3 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (long)(int)uVar3 * 0x14;
          *(uint *)(lVar20 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar22 + 0x30) = uStack_d8;
          *(undefined8 *)(lVar22 + 0x28) = uStack_e0;
          *(undefined8 *)(lVar22 + 0x20) = uStack_e8;
        }
        else {
          uStack_b8 = uStack_e0;
          uStack_c0 = uStack_e8;
          uStack_b0 = uStack_d8;
          System_Collections_Generic_List_ValueTuple_Vector3__float__float____AddWithResize_39d98d0
                    (lVar20,&uStack_c0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xdd);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar16 = Dino_BusSand_View_WorldView__Ribbon_2407640(fVar43,lVar20);
      lVar22 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                         (param_1,*(undefined8 *)PTR_DAT_04cbda18,uVar16,lVar19,0,1);
      if ((lVar22 != 0) &&
         (lVar22 = UnityEngine_Component__get_transform_43bcd18(lVar22,0), lVar22 != 0)) {
        UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20488,0,lVar22,0);
        lVar22 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe180);
        System_Collections_Generic_List_ValueTuple_Vector3__float__float_____ctor_39d8fc8
                  (lVar22,*(undefined8 *)PTR_DAT_04cbe170);
        iVar21 = 0;
        fVar39 = *(float *)(lVar17 + 0x4c) + -3.0;
        fVar37 = *(float *)(lVar17 + 0x50) + 3.0;
        do {
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          fVar29 = (float)iVar21 / 40.0;
          fVar30 = 1.0;
          if (fVar29 <= 1.0) {
            fVar30 = fVar29;
          }
          fVar33 = 0.0;
          if (0.0 <= fVar29) {
            fVar33 = fVar30;
          }
          fVar30 = fVar39 + (fVar37 - fVar39) * fVar33;
          System_ValueTuple_Vector3__float__float____ctor_3110ad4
                    (fVar30,0,*(undefined4 *)(lVar17 + 0xc4),0,
                     (fVar30 - *(float *)(lVar17 + 0xd4)) / (*(float *)(lVar17 + 0x60) * fVar34),
                     &uStack_e8,*(undefined8 *)puVar9);
          if (lVar22 == 0) goto LAB_0250499c;
          lVar25 = *(long *)(lVar22 + 0x10);
          lVar26 = *(long *)puVar6;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_0250499c;
          uVar3 = *(uint *)(lVar22 + 0x18);
          if (uVar3 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (long)(int)uVar3 * 0x14;
            *(uint *)(lVar22 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar25 + 0x30) = uStack_d8;
            *(undefined8 *)(lVar25 + 0x28) = uStack_e0;
            *(undefined8 *)(lVar25 + 0x20) = uStack_e8;
          }
          else {
            uStack_b8 = uStack_e0;
            uStack_c0 = uStack_e8;
            uStack_b0 = uStack_d8;
            System_Collections_Generic_List_ValueTuple_Vector3__float__float____AddWithResize_39d98d0
                      (lVar22,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
          puVar8 = PTR_DAT_04cbc2b8;
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0x29);
        if (*(int *)(*(long *)PTR_DAT_04cbc2b8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar16 = Dino_BusSand_View_WorldView__Ribbon_2407640(fVar43,lVar22);
        lVar19 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                           (param_1,*(undefined8 *)PTR_DAT_04cbe1a0,uVar16,lVar19,0,1);
        puVar10 = PTR_DAT_04cb3c10;
        puVar9 = PTR_DAT_04caa1d0;
        if ((lVar19 != 0) &&
           (lVar19 = UnityEngine_Component__get_transform_43bcd18(lVar19,0), lVar19 != 0)) {
          UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20a5c,0,lVar19,0);
          fVar34 = _UNK_00e2065c;
          fVar30 = *(float *)(lVar17 + 0x60);
          lVar19 = *(long *)(*(long *)puVar8 + 0xb8);
          fVar29 = fVar30 * _UNK_00e206e4;
          uVar32 = *(undefined4 *)(lVar19 + 0x44);
          uVar41 = *(undefined4 *)(lVar19 + 0x48);
          uVar44 = *(undefined4 *)(lVar19 + 0x4c);
          uVar38 = *(undefined4 *)(lVar19 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar30 = fVar30 * fVar34;
          uVar16 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                             (uVar32,uVar41,uVar44,uVar38,uVar36,0,*(undefined8 *)PTR_DAT_04cbe198,0
                             );
          lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
          System_Collections_Generic_List_Vector3____ctor_3af944c(lVar19,*(undefined8 *)puVar10);
          fVar34 = _UNK_00e20a74;
          iVar21 = 0;
          fVar43 = fVar43 * 0.5;
          fVar42 = fVar29 * 0.5;
          fVar33 = fVar43 + fVar42;
          do {
            System_Collections_Generic_List_ValueTuple_Vector3__float__float____get_Item_39d9560
                      (&uStack_c0,lVar20,iVar21,*(undefined8 *)puVar12);
            fVar14 = (float)uStack_b8;
            fVar4 = (float)uStack_c0;
            fVar31 = uStack_c0._4_4_;
            sincosf(uStack_b8._4_4_ * fVar34,&fStack_ec,&fStack_f0);
            if (lVar19 == 0) goto LAB_0250499c;
            lVar22 = *(long *)(lVar19 + 0x10);
            lVar25 = *(long *)puVar7;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_0250499c;
            uVar3 = *(uint *)(lVar19 + 0x18);
            if (uVar3 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)uVar3 * 0xc;
              *(uint *)(lVar19 + 0x18) = uVar3 + 1;
              *(float *)(lVar22 + 0x20) = fVar4 - fVar33 * fStack_ec;
              *(float *)(lVar22 + 0x24) = fVar33 * 0.0 + fVar31;
              *(float *)(lVar22 + 0x28) = fVar14 - fVar33 * fStack_f0;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar19,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
            puVar8 = PTR_DAT_04cbc2b8;
            iVar21 = iVar21 + 1;
          } while (iVar21 != 0xdd);
          if (*(int *)(*(long *)PTR_DAT_04cbc2b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar27 = Dino_BusSand_View_WorldView__Curb_2407d34(fVar29,fVar30,lVar19);
          Dino_BusSand_View_WorldView__MeshObject_2405c94
                    (param_1,*(undefined8 *)PTR_DAT_04cbe190,uVar27,uVar16,0,1);
          fVar34 = *(float *)(lVar17 + 0xc4);
          fVar33 = *(float *)(lVar17 + 200);
          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar11 = PTR_DAT_04cbe1b0;
          fVar31 = _UNK_00e20994;
          fVar4 = _UNK_00e207cc;
          lVar19 = Dino_BusSand_View_MaterialLibrary__Ground_23ba8c8
                             (_UNK_00e203f4,_UNK_00e20994,_UNK_00e207cc,0x3f800000,
                              *(undefined8 *)PTR_DAT_04cbe1b0,0,0);
          if (lVar19 != 0) {
            fVar34 = fVar34 - fVar43;
            fVar33 = fVar43 + fVar33;
            UnityEngine_Material__SetColor_43830b0
                      (0x3f000000,_UNK_00e1fe68,_UNK_00e200b4,0x3f800000,lVar19,
                       *(undefined8 *)PTR_DAT_04cbcf60,0);
            UnityEngine_Material__SetVector_4383100
                      (fVar33,fVar34,0,0,lVar19,*(undefined8 *)PTR_DAT_04cbe0c8,0);
            UnityEngine_Material__SetFloat_4383048
                      (_UNK_00e201f4,lVar19,*(undefined8 *)PTR_DAT_04cb76e0,0);
            UnityEngine_Material__SetColor_43830b0
                      (_UNK_00e208e8,_UNK_00e20440,_UNK_00e20094,0x3f800000,lVar19,
                       *(undefined8 *)PTR_DAT_04caa108,0);
            UnityEngine_Material__SetFloat_4383048
                      (_UNK_00e200f8,lVar19,*(undefined8 *)PTR_DAT_04cbd1a0,0);
            fVar31 = *(float *)(lVar17 + 0xd0) * fVar31;
            uVar27 = Dino_BusSand_View_WorldView__RoundedRect_240889c
                               (*(float *)(lVar17 + 0xd4) - fVar31,fVar33,
                                *(float *)(lVar17 + 0xd8) + fVar31,fVar34,(fVar34 - fVar33) * 0.5,10
                               );
            lVar19 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                               (param_1,*(undefined8 *)puVar11,uVar27,lVar19,0,1);
            if ((lVar19 != 0) &&
               (lVar19 = UnityEngine_Component__get_transform_43bcd18(lVar19,0), lVar19 != 0)) {
              UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20294,0,lVar19,0);
              lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
              System_Collections_Generic_List_Vector3____ctor_3af944c(lVar19,*(undefined8 *)puVar10)
              ;
              if (lVar19 != 0) {
                lVar20 = *(long *)(lVar19 + 0x10);
                fVar34 = *(float *)(lVar17 + 0xc4);
                lVar22 = *(long *)puVar7;
                *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                if (lVar20 != 0) {
                  uVar3 = *(uint *)(lVar19 + 0x18);
                  if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                    lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
                    *(uint *)(lVar19 + 0x18) = uVar3 + 1;
                    *(float *)(lVar20 + 0x20) = fVar39;
                    *(undefined4 *)(lVar20 + 0x24) = 0;
                    *(float *)(lVar20 + 0x28) = fVar42 + fVar43 + fVar34;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                              (fVar39,0,lVar19,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar20 = *(long *)(lVar19 + 0x10);
                  fVar34 = *(float *)(lVar17 + 0xc4);
                  lVar22 = *(long *)puVar7;
                  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                  if (lVar20 != 0) {
                    uVar3 = *(uint *)(lVar19 + 0x18);
                    if (uVar3 < *(uint *)(lVar20 + 0x18)) {
                      lVar20 = lVar20 + (long)(int)uVar3 * 0xc;
                      *(uint *)(lVar19 + 0x18) = uVar3 + 1;
                      *(float *)(lVar20 + 0x20) = fVar37;
                      *(undefined4 *)(lVar20 + 0x24) = 0;
                      *(float *)(lVar20 + 0x28) = fVar42 + fVar43 + fVar34;
                    }
                    else {
                      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                                (fVar37,0,lVar19,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    uVar27 = Dino_BusSand_View_WorldView__Curb_2407d34(fVar29,fVar30,lVar19);
                    Dino_BusSand_View_WorldView__MeshObject_2405c94
                              (param_1,*(undefined8 *)PTR_DAT_04cbe1b8,uVar27,uVar16,0,1);
                    lVar19 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,2);
                    if (lVar19 != 0) {
                      iVar21 = (int)*(ulong *)(lVar19 + 0x18);
                      if ((iVar21 != 0) &&
                         (*(undefined4 *)(lVar19 + 0x20) = 0xbf800000, iVar21 != 1)) {
                        *(undefined4 *)(lVar19 + 0x24) = 0x3f800000;
                        puVar9 = PTR_DAT_04cab4b0;
                        puVar7 = PTR_DAT_04caa208;
                        fVar34 = _UNK_00e2094c;
                        if (0 < iVar21) {
                          NEON_fmov(0x3fa00000,4);
                          uVar15 = 0;
                          uVar23 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
                          do {
                            if (uVar23 <= uVar15) goto LAB_025049a0;
                            lVar20 = *(long *)puVar8;
                            fVar37 = *(float *)(lVar19 + 0x20 + uVar15 * 4);
                            if (*(int *)(lVar20 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar20 = *(long *)puVar8;
                            }
                            if (*(char *)(*(long *)(lVar20 + 0xb8) + 1) != '\0') {
                              fVar39 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34
                                                        (*(undefined4 *)(lVar17 + 0xc4),lVar17,0);
                              fVar33 = *(float *)(lVar17 + 0x60);
                              fVar30 = *(float *)(lVar17 + 0xc4);
                              if (cRam0000000004f9b88b == '\0') {
                                FUN_02132f7c(puVar9);
                                cRam0000000004f9b88b = '\x01';
                              }
                              puVar24 = *(undefined4 **)(*(long *)puVar9 + 0xb8);
                              uVar32 = *puVar24;
                              uVar36 = puVar24[1];
                              uVar38 = puVar24[2];
                              uVar41 = puVar24[3];
                              if (cRam0000000004f9b65e == '\0') {
                                FUN_02132f7c(puVar7);
                                cRam0000000004f9b65e = '\x01';
                              }
                              Dino_BusSand_View_WorldView__Model_24054f0
                                        (fVar37 * (fVar39 + fVar33 * fVar4),0,
                                         fVar33 * fVar34 + fVar29 + fVar43 + fVar30,uVar32,uVar36,
                                         uVar38,uVar41,param_1,*(undefined8 *)PTR_DAT_04cbe1a8,0);
                            }
                            uVar23 = (ulong)*(uint *)(lVar19 + 0x18);
                            uVar15 = uVar15 + 1;
                          } while ((long)uVar15 < (long)(int)*(uint *)(lVar19 + 0x18));
                        }
                        return;
                      }
LAB_025049a0:
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0250499c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

