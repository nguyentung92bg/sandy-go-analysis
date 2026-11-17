/* IL2CPP: Dino.BusSand.View.VehicleView$$UseHeapShader
void Dino_BusSand_View_VehicleView__UseHeapShader (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$UseHeapShader
   void Dino_BusSand_View_VehicleView__UseHeapShader (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__UseHeapShader_23f723c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cacc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdf20);
    FUN_02132f7c(PTR_DAT_04cbdf28);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cbdf30);
    bRam0000000004f9cacc = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0xf0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  puVar4 = PTR_DAT_04cbc460;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04cbc460;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbdf20,0);
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_024f7708;
    lVar7 = UnityEngine_Renderer__get_sharedMaterial_43743c8(*(long *)(param_1 + 0xf0),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(lVar8,uVar12,0);
    if (lVar8 == 0) goto LAB_024f7708;
    UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbdf30,0);
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar8,1,0);
    lVar9 = *(long *)puVar4;
                    /* try { // try from 024f7438 to 025f77c7 has its CatchHandler @ 024f7438
                       catch() { ... } // from try @ 024f7438 with catch @ 024f7438
                       catch() { ... } // from try @ 024f7a80 with catch @ 024f7438
                       catch() { ... } // from try @ 024f7aa8 with catch @ 024f7438
                       catch() { ... } // from try @ 024f80c8 with catch @ 024f7438
                       catch() { ... } // from try @ 024f81c4 with catch @ 024f7438
                       catch() { ... } // from try @ 024f81d8 with catch @ 024f7438
                       catch() { ... } // from try @ 024f8260 with catch @ 024f7438
                       catch() { ... } // from try @ 024f8284 with catch @ 024f7438
                       catch() { ... } // from try @ 024f82c0 with catch @ 024f7438 */
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    plVar10 = (long *)(*(long *)(lVar9 + 0xb8) + 0x38);
    *plVar10 = lVar8;
    thunk_FUN_02134474(plVar10,lVar8);
    puVar3 = PTR_DAT_04cb72b0;
    if (lVar7 == 0) goto LAB_024f7708;
    uVar6 = UnityEngine_Material__HasProperty_437c10c(lVar7,*(undefined8 *)PTR_DAT_04cb72b0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x38);
      uVar12 = UnityEngine_Material__GetTexture_4383af4(lVar7,*(undefined8 *)puVar3,0);
      if (lVar8 == 0) goto LAB_024f7708;
      UnityEngine_Material__SetTexture_43831cc(lVar8,*(undefined8 *)puVar3,uVar12,0);
    }
  }
  lVar7 = *(long *)(param_1 + 0xf0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (lVar7 != 0) {
    UnityEngine_Renderer__set_sharedMaterial_43743cc
              (lVar7,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38),0);
    *(undefined1 *)(param_1 + 0x2c8) = 1;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*(long *)(param_1 + 0xf0),*(undefined8 *)PTR_DAT_04caa138);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) goto LAB_024f7708;
        uVar12 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar7,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
        if ((uVar6 & 1) != 0) {
          lVar8 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar7,0);
          if (lVar8 == 0) goto LAB_024f7708;
          UnityEngine_Mesh__get_bounds_438fac4(&fStack_58,lVar8,0);
          lVar8 = *(long *)puVar4;
          *(undefined4 *)(param_1 + 0x2d8) = 0;
          fStack_54 = fStack_54 + fStack_48;
          fVar15 = ABS(fStack_58 + fStack_4c);
          bVar1 = fStack_54 < _UNK_00e20a7c;
          fVar14 = ABS(fStack_50 - fStack_44);
          if (ABS(fStack_50 - fStack_44) <= ABS(fStack_50 + fStack_44)) {
            fVar14 = ABS(fStack_50 + fStack_44);
          }
          uVar6 = CONCAT44(_UNK_00e20a7c,ABS(fStack_58 - fStack_4c));
          *(float *)(param_1 + 0x2d4) = fVar14;
          *(ulong *)(param_1 + 0x2cc) =
               CONCAT44(fStack_54,fVar15) ^
               (CONCAT44(fStack_54,fVar15) ^ uVar6) &
               CONCAT44(-(uint)bVar1,-(uint)(fVar15 < ABS(fStack_58 - fStack_4c)));
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar4;
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
          if ((uVar6 & 1) != 0) {
            uVar12 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar7,0);
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar8);
              lVar8 = *(long *)puVar4;
            }
            puVar11 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
            *puVar11 = uVar12;
            thunk_FUN_02134474(puVar11,uVar12);
            lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
            if (lVar8 == 0) goto LAB_024f7708;
            UnityEngine_Material__SetVector_4383100
                      (*(undefined4 *)(param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x2d0),
                       *(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2d8),lVar8,
                       *(undefined8 *)PTR_DAT_04cbdf28,0);
          }
          uVar12 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar7,0);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar7);
            lVar7 = *(long *)puVar4;
          }
          uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          bVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,uVar13,0);
          *(byte *)(param_1 + 0x2dc) = bVar5 & 1;
        }
      }
      return;
    }
  }
LAB_024f7708:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

