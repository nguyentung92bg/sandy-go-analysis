/* IL2CPP: Dino.BusSand.View.SandBoardView$$Bind
void Dino_BusSand_View_SandBoardView__Bind (Dino_BusSand_View_SandBoardView_o* __this, Dino_BusSand_Core_SandGrid_o* grid, float grainSize, float grainWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$Bind
   void Dino_BusSand_View_SandBoardView__Bind (Dino_BusSand_View_SandBoardView_o* __this,
   Dino_BusSand_Core_SandGrid_o* grid, float grainSize, float grainWidth, const MethodInfo* method);
    */

void Dino_BusSand_View_SandBoardView__Bind_23e5274
               (float param_1,float param_2,long param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  
  if ((bRam0000000004f9ca7d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbda58);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbda60);
    FUN_02132f7c(PTR_DAT_04cbda68);
    FUN_02132f7c(PTR_DAT_04cbda70);
    FUN_02132f7c(PTR_DAT_04cbda78);
    FUN_02132f7c(PTR_DAT_04cbda80);
    FUN_02132f7c(PTR_DAT_04cbda88);
    FUN_02132f7c(PTR_DAT_04cbda90);
    bRam0000000004f9ca7d = 1;
  }
  *(long *)(param_3 + 0x20) = param_4;
  thunk_FUN_02134474((long *)(param_3 + 0x20),param_4);
  if (param_2 <= 0.0) {
    param_2 = param_1;
  }
  *(float *)(param_3 + 100) = param_1;
  *(float *)(param_3 + 0x68) = param_2;
  puVar6 = PTR_DAT_04ca9ae8;
  if (param_4 == 0) goto LAB_024e5738;
  uVar18 = NEON_scvtf(*(undefined8 *)(param_4 + 0x10),4);
  plVar16 = (long *)(param_3 + 0x28);
  lVar17 = *plVar16;
  lVar12 = *(long *)PTR_DAT_04ca9ae8;
  *(ulong *)(param_3 + 0x6c) =
       CONCAT44(param_1 * (float)((ulong)uVar18 >> 0x20),param_2 * (float)uVar18);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
  if ((uVar13 & 1) == 0) {
    plVar14 = (long *)*plVar16;
    if (plVar14 == (long *)0x0) goto LAB_024e5738;
    iVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (iVar10 != *(int *)(param_4 + 0x10)) goto LAB_024e5400;
    plVar14 = (long *)*plVar16;
    if (plVar14 == (long *)0x0) goto LAB_024e5738;
    iVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
    if (iVar10 != *(int *)(param_4 + 0x14)) goto LAB_024e5400;
  }
  else {
LAB_024e5400:
    lVar12 = *plVar16;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar7 = PTR_DAT_04cb4ef0;
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
    if ((uVar13 & 1) != 0) {
      lVar12 = *plVar16;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__Destroy_43c8114(lVar12,0);
    }
    uVar11 = *(undefined4 *)(param_4 + 0x10);
    uVar2 = *(undefined4 *)(param_4 + 0x14);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
    UnityEngine_Texture2D___ctor_439df00(lVar12,uVar11,uVar2,4,0,0,0);
    puVar8 = PTR_DAT_04cbda68;
    puVar7 = PTR_DAT_04cb6a60;
    if (lVar12 == 0) goto LAB_024e5738;
    UnityEngine_Texture__set_filterMode_4398f60(lVar12,0,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar12,1,0);
    UnityEngine_Object__set_name_43c72ec(lVar12,*(undefined8 *)puVar8,0);
    *(long *)(param_3 + 0x28) = lVar12;
    thunk_FUN_02134474(plVar16,lVar12);
    uVar18 = FUN_02133068(*(undefined8 *)puVar7,*(int *)(param_4 + 0x14) * *(int *)(param_4 + 0x10))
    ;
    *(undefined8 *)(param_3 + 0x30) = uVar18;
    thunk_FUN_02134474();
  }
  Dino_BusSand_View_SandBoardView__BuildMesh_23e573c(param_3);
  uVar13 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  if ((uVar13 & 1) == 0) {
    bVar9 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar18 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbda90,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    bVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar18,0,0);
  }
  lVar12 = *(long *)puVar6;
  plVar16 = (long *)(param_3 + 0x38);
  lVar17 = *plVar16;
  *(byte *)(param_3 + 0x50) = bVar9 & 1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
  if ((uVar13 & 1) != 0) {
    if (*(char *)(param_3 + 0x50) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar18 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbda88,0);
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b5a8(lVar12,uVar18,0);
      puVar5 = (undefined8 *)PTR_DAT_04cbda70;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar18 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbda90,0);
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b5a8(lVar12,uVar18,0);
      puVar5 = (undefined8 *)PTR_DAT_04cbda78;
    }
    if (lVar12 == 0) goto LAB_024e5738;
    UnityEngine_Object__set_name_43c72ec(lVar12,*puVar5,0);
    *plVar16 = lVar12;
    thunk_FUN_02134474(plVar16,lVar12);
  }
  puVar6 = PTR_DAT_04cbda58;
  if (*(char *)(param_3 + 0x50) != '\0') {
    Dino_BusSand_View_SandBoardView__BindPackPalette_23e5b88(param_3);
  }
  **(long **)(*(long *)puVar6 + 0xb8) = param_3;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar6 + 0xb8),param_3);
  Dino_BusSand_View_SandBoardView__ApplyStyle_23e5110(param_3);
  if (*(long *)(param_3 + 0x38) == 0) {
LAB_024e5738:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Material__SetTexture_43831cc
            (*(long *)(param_3 + 0x38),*(undefined8 *)PTR_DAT_04cbda80,
             *(undefined8 *)(param_3 + 0x28),0);
  if (*(char *)(param_3 + 0x50) != '\0') {
    if (*plVar16 == 0) goto LAB_024e5738;
    UnityEngine_Material__SetFloat_4383048(0xbf800000,*plVar16,*(undefined8 *)PTR_DAT_04cbda60,0);
  }
  if (*(long *)(param_3 + 0x40) == 0) goto LAB_024e5738;
  UnityEngine_Renderer__set_sharedMaterial_43743cc
            (*(long *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x38),0);
  *(undefined4 *)(param_3 + 0x60) = 0xffffffff;
  lVar12 = *(long *)(param_3 + 0x20);
  if (lVar12 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar12 + 0x38);
  lVar3 = *(long *)(lVar12 + 0x40);
  uVar4 = *(int *)(lVar12 + 0x14) * *(int *)(lVar12 + 0x10);
  if (*(char *)(param_3 + 0x50) == '\0') {
    if (0 < (int)uVar4) {
      if (lVar17 == 0) goto LAB_024e60d4;
      uVar13 = 0;
      do {
        if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_024e60d0;
        if (lVar3 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar3 + 0x18) <= uVar13) goto LAB_024e60d0;
        lVar12 = *(long *)(param_3 + 0x30);
        uVar11 = Dino_BusSand_View_SandBoardView__Texel_23e60d8
                           (param_3,*(undefined1 *)(lVar17 + 0x20 + uVar13),
                            *(undefined1 *)(lVar3 + 0x20 + uVar13));
        if (lVar12 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_024e60d0;
        lVar1 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(lVar12 + lVar1 + 0x20) = uVar11;
      } while (uVar4 != uVar13);
    }
  }
  else if (0 < (int)uVar4) {
    if (lVar17 == 0) goto LAB_024e60d4;
    uVar13 = 0;
    do {
      if (*(uint *)(lVar17 + 0x18) <= uVar13) {
LAB_024e60d0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      bVar9 = *(byte *)(lVar17 + 0x20 + uVar13);
      uVar15 = (uint)bVar9;
      lVar12 = *(long *)(param_3 + 0x30);
      if (bVar9 != 0) {
        if (lVar3 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar3 + 0x18) <= uVar13) goto LAB_024e60d0;
        uVar15 = (uint)bVar9 | (*(byte *)(lVar3 + 0x20 + uVar13) ^ 0x80) << 8 | 0xff000000;
      }
      if (lVar12 == 0) goto LAB_024e60d4;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_024e60d0;
      lVar1 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      *(uint *)(lVar12 + lVar1 + 0x20) = uVar15;
    } while (uVar4 != uVar13);
  }
  if (*(long *)(param_3 + 0x28) != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8
              (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),0);
    if (*(long *)(param_3 + 0x28) != 0) {
      UnityEngine_Texture2D__Apply_439ea78(*(long *)(param_3 + 0x28),0,0);
      lVar12 = *(long *)(param_3 + 0x20);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x74) = 0;
        *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(lVar12 + 0x7c);
        return;
      }
    }
  }
LAB_024e60d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

