/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Create
Dino_BusSand_View_PaintingLayer_o* Dino_BusSand_View_PaintingLayer__Create (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* L, Dino_BusSand_Core_SandGrid_o* grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PaintingLayer$$Create
   Dino_BusSand_View_PaintingLayer_o* Dino_BusSand_View_PaintingLayer__Create
   (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* L,
   Dino_BusSand_Core_SandGrid_o* grid, const MethodInfo* method); */

long Dino_BusSand_View_PaintingLayer__Create_23d860c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9ca32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbd7c0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd7c8);
    FUN_02132f7c(PTR_DAT_04cbd7d0);
    bRam0000000004f9ca32 = 1;
  }
  puVar3 = PTR_DAT_04cbd7d0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar3,0);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((param_3 == 0) || ((uVar5 & 1) != 0)) {
    return 0;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)PTR_DAT_04cbd7c8,0);
  if ((lVar8 != 0) && (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar6 != 0))
  {
    UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    if ((param_2 != 0) && (lVar6 != 0)) {
      UnityEngine_Transform__set_localPosition_43cfda8
                ((float)*(undefined8 *)(param_2 + 0x74) +
                 (float)*(undefined8 *)(param_2 + 0x8c) * 0.001,
                 (float)((ulong)*(undefined8 *)(param_2 + 0x74) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_2 + 0x8c) >> 0x20) * 0.001,
                 *(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x94) * _UNK_00e20a7c,lVar6,0);
      lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
      if (lVar6 != 0) {
        UnityEngine_Transform__set_localRotation_43d156c
                  (*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xa8),
                   *(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0),lVar6,0);
        lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar8,*(undefined8 *)PTR_DAT_04cbd7c0);
        uVar11 = *(undefined4 *)(param_2 + 0x70);
        uVar12 = *(undefined4 *)(param_2 + 0x5c);
        uVar7 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar5 & 1) == 0) {
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
                    /* try { // try from 024d8834 to 025d89a7 has its CatchHandler @ 024d8834
                       catch() { ... } // from try @ 024d8834 with catch @ 024d8834
                       catch() { ... } // from try @ 024d89b0 with catch @ 024d8834
                       catch() { ... } // from try @ 024d8a08 with catch @ 024d8834
                       catch() { ... } // from try @ 024d8a30 with catch @ 024d8834
                       catch() { ... } // from try @ 024d8a54 with catch @ 024d8834 */
            cRam0000000004f9b948 = '\x01';
          }
          puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          puVar10 = puVar9 + 1;
        }
        else {
          lVar6 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
          if (lVar6 == 0) goto LAB_024d8890;
          puVar9 = (undefined4 *)(lVar6 + 0x74);
          puVar10 = (undefined4 *)(lVar6 + 0x78);
        }
        if (lVar8 != 0) {
          Dino_BusSand_View_PaintingLayer__Build_23d8894
                    (uVar11,uVar12,*puVar9,*puVar10,lVar8,param_3,uVar4);
          return lVar8;
        }
      }
    }
  }
LAB_024d8890:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

