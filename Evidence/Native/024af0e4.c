/* IL2CPP: Dino.BusSand.View.GameView.<Spotlight>d__241$$MoveNext
bool Dino_BusSand_View_GameView__Spotlight_d__241__MoveNext (Dino_BusSand_View_GameView__Spotlight_d__241_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<Spotlight>d__241$$MoveNext
   bool Dino_BusSand_View_GameView__Spotlight_d__241__MoveNext
   (Dino_BusSand_View_GameView__Spotlight_d__241_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__Spotlight_d__241__MoveNext_23af0e4(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  float fStack_84;
  long lStack_80;
  long *plStack_78;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9c969 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cb7298);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    FUN_02132f7c(PTR_DAT_04cbc7d8);
    bRam0000000004f9c969 = 1;
  }
  lVar18 = *(long *)(param_1 + 0x20);
  plStack_78 = &lStack_28;
  lStack_80 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = *(undefined8 *)PTR_DAT_04caa070;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar18 + 0x248);
    uVar7 = thunk_FUN_0216e89c(uVar7);
    puVar6 = PTR_DAT_04cbc7d8;
    UnityEngine_GameObject___ctor_43c20cc(uVar7,*(undefined8 *)PTR_DAT_04cbc7d8,0);
    *(undefined8 *)(lStack_28 + 0x30) = uVar7;
    thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x30),uVar7);
    if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(lStack_28 + 0x30),0);
    if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar18 + 0x38),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar7,uVar7);
    }
    UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar7,0,0);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cb7298,0);
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(uVar9,uVar7,0);
    *(undefined8 *)(lStack_28 + 0x38) = uVar9;
    thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x38),uVar9);
    if (*(long *)(lStack_28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Material__SetFloat_4383048
              (0x40a00000,*(long *)(lStack_28 + 0x38),*(undefined8 *)PTR_DAT_04cb72a0,0);
    if (*(long *)(lStack_28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Material__SetFloat_4383048
              (0x41200000,*(long *)(lStack_28 + 0x38),*(undefined8 *)PTR_DAT_04cb72c0,0);
    if (*(long *)(lStack_28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Material__set_renderQueue_437c9d8(*(long *)(lStack_28 + 0x38),0xbae,0);
    if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (*(long *)(lStack_28 + 0x30),*(undefined8 *)PTR_DAT_04cb72d8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar8,*(undefined8 *)(lStack_28 + 0x38),0);
    UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar8,0,0);
    UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar8,0,0);
    uVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,0xc);
    *(undefined8 *)(lStack_28 + 0x40) = uVar7;
    thunk_FUN_02134474();
    uVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04cbc000,0xc);
    *(undefined8 *)(lStack_28 + 0x48) = uVar7;
    thunk_FUN_02134474();
    lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0x30);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar19 = *(uint *)(lVar8 + 0x18);
    iVar12 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      iVar16 = 0;
      iVar17 = 0;
      do {
        uVar2 = iVar14 + iVar16;
        if (uVar19 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar3 = iVar12 + iVar17;
        *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar3;
        if (uVar19 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar5 = iVar17 + 1U & 3 | iVar15 << 2;
        *(uint *)(lVar8 + (long)(int)(uVar2 + 1) * 4 + 0x20) = uVar5;
        if (uVar19 <= uVar2 + 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = uVar5 + 4;
        *(int *)(lVar8 + (long)(iVar14 + iVar16 + 2) * 4 + 0x20) = iVar1;
        if (uVar19 <= uVar2 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(int *)(lVar8 + (long)(iVar14 + iVar16 + 3) * 4 + 0x20) = iVar3;
        if (uVar19 <= uVar2 + 4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar4 = iVar14 + iVar16;
        *(int *)(lVar8 + (long)(iVar4 + 4) * 4 + 0x20) = iVar1;
        if (uVar19 <= uVar2 + 5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar16 = iVar16 + 6;
        iVar17 = iVar17 + 1;
        *(int *)(lVar8 + (long)(iVar4 + 5) * 4 + 0x20) = iVar3 + 4;
      } while (iVar16 != 0x18);
      iVar15 = iVar15 + 1;
      iVar14 = iVar14 + 0x18;
      iVar12 = iVar12 + 4;
    } while (iVar15 != 2);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec(lVar10,*(undefined8 *)puVar6,0);
    *(long *)(lStack_28 + 0x50) = lVar10;
    thunk_FUN_02134474((long *)(lStack_28 + 0x50),lVar10);
    if (*(long *)(lStack_28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Mesh__set_vertices_4390e48
              (*(long *)(lStack_28 + 0x50),*(undefined8 *)(lStack_28 + 0x40),0);
    if (*(long *)(lStack_28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Mesh__set_triangles_4393ee8(*(long *)(lStack_28 + 0x50),lVar8,0);
    if (*(long *)(lStack_28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Mesh__set_colors_43915ac
              (*(long *)(lStack_28 + 0x50),*(undefined8 *)(lStack_28 + 0x48),0);
    lVar8 = *(long *)(lStack_28 + 0x50);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar6 = PTR_DAT_04caa208;
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc);
    fStack_84 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14) * 1000.0 * 0.5;
    uStack_8c = CONCAT44((float)((ulong)uVar9 >> 0x20) * 1000.0 * 0.5,(float)uVar9 * 1000.0 * 0.5);
    uStack_98 = uVar7;
    uStack_90 = uVar27;
    UnityEngine_Mesh__set_bounds_438fbac(lVar8,&uStack_98,0);
    if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (*(long *)(lStack_28 + 0x30),*(undefined8 *)PTR_DAT_04cb72d0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar8,*(undefined8 *)(lStack_28 + 0x50),0);
    *(undefined4 *)(lStack_28 + 0x10) = 0xfffffffd;
    *(undefined4 *)(lStack_28 + 0x58) = 0;
    param_1 = lStack_28;
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(param_1 + 0x28) == *(int *)(lVar18 + 0x248)) {
    uVar7 = *(undefined8 *)(lVar18 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    lVar8 = lStack_28;
    param_1 = lStack_28;
    if ((uVar11 & 1) != 0) {
      fVar26 = 1.0;
      fVar28 = *(float *)(lStack_28 + 0x58);
      if ((*(char *)(lVar18 + 0x264) != '\0') || (fVar26 = 0.0, 0.0 < fVar28)) {
        fVar20 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
        fVar25 = 0.5;
        if (*(char *)(lVar18 + 0x264) != '\0') {
          fVar25 = _UNK_00e2098c;
        }
        fVar20 = fVar20 / fVar25;
        fVar25 = -fVar20;
        if (0.0 <= fVar26 - fVar28) {
          fVar25 = fVar20;
        }
        fVar25 = fVar28 + fVar25;
        if (ABS(fVar26 - fVar28) <= fVar20) {
          fVar25 = fVar26;
        }
        *(float *)(lVar8 + 0x58) = fVar25;
        fVar28 = *(float *)(lStack_28 + 0x58);
        lVar8 = *(long *)(lVar18 + 0x30);
        fVar26 = 1.0;
        if (fVar28 <= 1.0) {
          fVar26 = fVar28;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar28) {
          fVar25 = fVar26;
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar28 = 3.4028235e+38;
        uVar19 = 0;
        fVar26 = _UNK_00e20948;
        if (_UNK_00e20948 <= *(float *)(lVar8 + 100)) {
          fVar26 = *(float *)(lVar8 + 100);
        }
        fVar20 = _UNK_00e20948;
        if (_UNK_00e20948 <= *(float *)(lVar8 + 0x68)) {
          fVar20 = *(float *)(lVar8 + 0x68);
        }
        fVar26 = *(float *)(lVar8 + 0x6c) / fVar26;
        fVar25 = fVar25 * fVar25 * 3.0 - fVar25 * fVar25 * (fVar25 + fVar25);
        fVar20 = *(float *)(lVar8 + 0x6c) / fVar20;
        fVar13 = -3.4028235e+38;
        fVar22 = (fVar25 + (1.0 - fVar25) * 0.0) * _UNK_00e1fdd0;
        fVar25 = fVar28;
        fVar24 = fVar13;
        do {
          if (*(long *)(lVar18 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(lVar18 + 0x38);
          fVar21 = -fVar26;
          if ((uVar19 & 1) != 0) {
            fVar21 = fVar26 + 1.0;
          }
          fVar23 = -fVar20;
          if (1 < uVar19) {
            fVar23 = fVar20 + 1.0;
          }
          Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                    (fVar21,fVar23,0,*(long *)(lVar18 + 0x30),0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar21 = (float)UnityEngine_Camera__WorldToViewportPoint_435c574(lVar8,0);
          uVar19 = uVar19 + 1;
          if (fVar21 <= fVar25) {
            fVar25 = fVar21;
          }
          if (fVar23 <= fVar28) {
            fVar28 = fVar23;
          }
          if (fVar13 <= fVar21) {
            fVar13 = fVar21;
          }
          if (fVar24 <= fVar23) {
            fVar24 = fVar23;
          }
        } while (uVar19 != 4);
        if (*(long *)(lVar18 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar26 = (float)UnityEngine_Camera__get_nearClipPlane_4355b8c(*(long *)(lVar18 + 0x38),0);
        fVar26 = fVar26 + 1.0;
        Dino_BusSand_View_GameView__SetRing_23a9d0c
                  (_UNK_00e202d8,_UNK_00e202d8,_UNK_00e20178,_UNK_00e20178,fVar26,lVar18,
                   *(undefined8 *)(lStack_28 + 0x40),0,0);
        uVar7 = *(undefined8 *)(lStack_28 + 0x40);
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b949 = '\x01';
        }
        fVar21 = *(float *)(*(long *)(*(long *)PTR_DAT_04cacfc0 + 0xb8) + 0xc) * _UNK_00e20488;
        fVar20 = *(float *)(*(long *)(*(long *)PTR_DAT_04cacfc0 + 0xb8) + 8) * _UNK_00e20488;
        Dino_BusSand_View_GameView__SetRing_23a9d0c
                  (fVar25 - fVar20,fVar28 - fVar21,fVar13 + fVar20,fVar24 + fVar21,fVar26,lVar18,
                   uVar7,4,0);
        Dino_BusSand_View_GameView__SetRing_23a9d0c
                  (fVar25,fVar28,fVar13,fVar24,fVar26,lVar18,*(undefined8 *)(lStack_28 + 0x40),8,0);
        fVar25 = *(float *)(lVar18 + 0x250);
        fVar28 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
        puVar6 = PTR_DAT_04cb2870;
        fVar28 = fVar28 / _UNK_00e207cc;
        lVar8 = *(long *)PTR_DAT_04cb2870;
        iVar15 = *(int *)(lVar8 + 0xe4);
        fVar26 = -fVar28;
        if (0.0 <= 0.0 - fVar25) {
          fVar26 = fVar28;
        }
        fVar26 = fVar25 + fVar26;
        if (ABS(0.0 - fVar25) <= fVar28) {
          fVar26 = 0.0;
        }
        *(float *)(lVar18 + 0x250) = fVar26;
        if (iVar15 == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar6;
          fVar26 = *(float *)(lVar18 + 0x250);
        }
        fVar20 = *(float *)(lVar18 + 0x25c);
        uVar9 = *(undefined8 *)(lVar18 + 0x254);
        fVar25 = fVar26 * _UNK_00e2065c;
        lVar18 = 0;
        uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x80);
        fVar26 = fVar26 * _UNK_00e20370;
        fVar28 = 1.0;
        if (fVar25 <= 1.0) {
          fVar28 = fVar25;
        }
        fVar24 = *(float *)(*(long *)(lVar8 + 0xb8) + 0x88);
        uVar11 = 0;
        fVar13 = 0.0;
        if (0.0 <= fVar25) {
          fVar13 = fVar28;
        }
        fVar28 = (float)uVar7;
        fVar25 = (float)((ulong)uVar7 >> 0x20);
        do {
          fVar21 = fVar22 * (fVar26 + 1.0);
          if (7 < uVar11) {
            fVar21 = 0.0;
          }
          lVar8 = *(long *)(lStack_28 + 0x48);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar11 = uVar11 + 1;
          lVar8 = lVar8 + lVar18;
          lVar18 = lVar18 + 0x10;
          *(ulong *)(lVar8 + 0x20) =
               CONCAT44(fVar25 + ((float)((ulong)uVar9 >> 0x20) - fVar25) * fVar13,
                        fVar28 + ((float)uVar9 - fVar28) * fVar13);
          *(float *)(lVar8 + 0x28) = fVar24 + (fVar20 - fVar24) * fVar13;
          *(float *)(lVar8 + 0x2c) = fVar21;
        } while (uVar11 != 0xc);
        if (*(long *)(lStack_28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_Mesh__set_vertices_4390e48
                  (*(long *)(lStack_28 + 0x50),*(undefined8 *)(lStack_28 + 0x40),0);
        if (*(long *)(lStack_28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_Mesh__set_colors_43915ac
                  (*(long *)(lStack_28 + 0x50),*(undefined8 *)(lStack_28 + 0x48),0);
        *(undefined8 *)(lStack_28 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(lStack_28 + 0x18),0);
        *(undefined4 *)(lStack_28 + 0x10) = 1;
        return 1;
      }
    }
  }
  Dino_BusSand_View_GameView__Spotlight_d__241____m__Finally1_23afc58(param_1);
  lVar18 = lStack_80;
  if (lStack_80 == 0) {
    return 0;
  }
  FUN_01e7b168(&plStack_78);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar18);
}

