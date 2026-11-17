/* IL2CPP: Dino.BusSand.View.GarageView$$StripeMaterial
UnityEngine_Material_o* Dino_BusSand_View_GarageView__StripeMaterial (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GarageView$$StripeMaterial
   UnityEngine_Material_o* Dino_BusSand_View_GarageView__StripeMaterial (const MethodInfo* method);
    */

undefined8 Dino_BusSand_View_GarageView__StripeMaterial_23b1378(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = PTR_DAT_04cbc7f8;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c977 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cbc7f8);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cbc8a8);
    FUN_02132f7c(PTR_DAT_04cbc8b0);
    bRam0000000004f9c977 = 1;
  }
  uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
    UnityEngine_Texture2D___ctor_439e07c(lVar5,0x20,4,4,0,0);
    if (lVar5 == 0) {
LAB_024b15a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar5,0,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar5,1,0);
    UnityEngine_Object__set_name_43c72ec(lVar5,*(undefined8 *)PTR_DAT_04cbc8a8,0);
    lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x80);
    iVar7 = 0;
    iVar9 = 0;
    lVar10 = 8;
    do {
      iVar11 = 0;
      lVar12 = lVar10;
      do {
        uVar1 = 0xff1cc2f6;
        if ((iVar7 + iVar11 & 4U) != 0) {
          uVar1 = 0xff30231e;
        }
        if (lVar6 == 0) goto LAB_024b15a8;
        if (*(uint *)(lVar6 + 0x18) <= (int)lVar12 - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar11 = iVar11 + 1;
        *(undefined4 *)(lVar6 + lVar12 * 4) = uVar1;
        lVar12 = lVar12 + 1;
      } while (iVar11 != 0x20);
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x20;
      iVar7 = iVar7 + 2;
    } while (iVar9 != 4);
    UnityEngine_Texture2D__SetPixels32_439edd8(lVar5,lVar6,0);
    UnityEngine_Texture2D__Apply_439ea14(lVar5,0,1,0);
    if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                       (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(undefined8 *)PTR_DAT_04cbc8b0,
                        lVar5,0,0);
    puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    *puVar8 = uVar13;
    thunk_FUN_02134474(puVar8,uVar13);
  }
  return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
}

