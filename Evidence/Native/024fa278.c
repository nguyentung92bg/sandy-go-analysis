/* IL2CPP: Dino.BusSand.View.VehicleView$$get_DetailMaterial
UnityEngine_Material_o* Dino_BusSand_View_VehicleView__get_DetailMaterial (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_DetailMaterial
   UnityEngine_Material_o* Dino_BusSand_View_VehicleView__get_DetailMaterial (const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_VehicleView__get_DetailMaterial_23fa278(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar5 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cad3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdfa8);
    FUN_02132f7c(PTR_DAT_04cbdfb0);
    FUN_02132f7c(PTR_DAT_04cbcb20);
    FUN_02132f7c(PTR_DAT_04cbdfb8);
    FUN_02132f7c(PTR_DAT_04cbcaa0);
    FUN_02132f7c(PTR_DAT_04cbdfc0);
    FUN_02132f7c(PTR_DAT_04cbcf78);
    bRam0000000004f9cad3 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar5;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  puVar3 = PTR_DAT_04cb4ef0;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_024fa67c:
    return *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
  UnityEngine_Texture2D___ctor_439e07c(lVar6,4,1,4,0,0);
  if (lVar6 != 0) {
    UnityEngine_Texture__set_filterMode_4398f60(lVar6,0,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar6,1,0);
    UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)PTR_DAT_04cbdfb0,0);
    puVar4 = PTR_DAT_04cbc000;
    lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cbc000,4);
    uVar11 = _UNK_00e6b0e0;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 != 0) {
        *(undefined8 *)(lVar8 + 0x28) = _UNK_00e6b0e8;
        *(undefined8 *)(lVar8 + 0x20) = uVar11;
        uVar11 = _UNK_00e6b060;
        if (uVar1 != 1) {
          *(undefined8 *)(lVar8 + 0x38) = _UNK_00e6b068;
          *(undefined8 *)(lVar8 + 0x30) = uVar11;
          uVar11 = _UNK_00e6ae30;
          if (2 < uVar1) {
            *(undefined8 *)(lVar8 + 0x48) = _UNK_00e6ae38;
            *(undefined8 *)(lVar8 + 0x40) = uVar11;
            uVar11 = _UNK_00e6ab80;
            if (uVar1 != 3) {
              *(undefined8 *)(lVar8 + 0x58) = _UNK_00e6ab88;
              *(undefined8 *)(lVar8 + 0x50) = uVar11;
              UnityEngine_Texture2D__SetPixels_439e5d8(lVar6,lVar8,0);
              UnityEngine_Texture2D__Apply_439ea14(lVar6,0,1,0);
              lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
              UnityEngine_Texture2D___ctor_439e07c(lVar8,4,1,4,0,0);
              if (lVar8 != 0) {
                UnityEngine_Texture__set_filterMode_4398f60(lVar8,0,0);
                UnityEngine_Texture__set_wrapMode_4398ac8(lVar8,1,0);
                UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbdfa8,0);
                lVar9 = FUN_02133068(*(undefined8 *)puVar4,4);
                uVar2 = _UNK_00e6b0c8;
                uVar11 = _UNK_00e6b0c0;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = _UNK_00e6b0c8;
                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                    if (uVar1 != 1) {
                      *(undefined8 *)(lVar9 + 0x38) = uVar2;
                      *(undefined8 *)(lVar9 + 0x30) = uVar11;
                      uVar11 = _UNK_00e6ad10;
                      if (2 < uVar1) {
                        *(undefined8 *)(lVar9 + 0x48) = _UNK_00e6ad18;
                        *(undefined8 *)(lVar9 + 0x40) = uVar11;
                        uVar11 = _UNK_00e6b560;
                        if (uVar1 != 3) {
                          *(undefined8 *)(lVar9 + 0x58) = _UNK_00e6b568;
                          *(undefined8 *)(lVar9 + 0x50) = uVar11;
                          UnityEngine_Texture2D__SetPixels_439e5d8(lVar8,lVar9,0);
                          UnityEngine_Texture2D__Apply_439ea14(lVar8,0,1,0);
                          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar11 = Dino_BusSand_View_MaterialLibrary__Emissive_23bace0
                                             (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000
                                              ,*(undefined8 *)PTR_DAT_04cbdfb8,0);
                          lVar9 = *(long *)puVar5;
                          if (*(int *)(lVar9 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(lVar9);
                            lVar9 = *(long *)puVar5;
                          }
                          puVar10 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x58);
                          *puVar10 = uVar11;
                          thunk_FUN_02134474(puVar10,uVar11);
                          lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
                          if (lVar9 != 0) {
                            UnityEngine_Material__SetTexture_43831cc
                                      (lVar9,*(undefined8 *)PTR_DAT_04cbcb20,lVar6,0);
                            lVar6 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
                            if (lVar6 != 0) {
                              UnityEngine_Material__SetTexture_43831cc
                                        (lVar6,*(undefined8 *)PTR_DAT_04cbdfc0,lVar8,0);
                              lVar6 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
                              if (lVar6 != 0) {
                                UnityEngine_Material__SetColor_43830b0
                                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar6,
                                           *(undefined8 *)PTR_DAT_04cbcf78,0);
                                lVar6 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
                                if (lVar6 != 0) {
                                  UnityEngine_Material__SetFloat_4383048
                                            (_UNK_00e205e8,lVar6,*(undefined8 *)PTR_DAT_04cbcaa0,0);
                                  goto LAB_024fa67c;
                                }
                              }
                            }
                          }
                          goto LAB_024fa69c;
                        }
                      }
                    }
                  }
                  goto LAB_024fa698;
                }
              }
              goto LAB_024fa69c;
            }
          }
        }
      }
LAB_024fa698:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024fa69c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

