/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Pile
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Pile (uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Pile
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Pile (uint8_t color, const MethodInfo*
   method); */

long Dino_BusSand_View_MaterialLibrary__Pile_23ba3ec(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar12 [16];
  long lStack_48;
  
  puVar3 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c997 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbca68);
    FUN_02132f7c(PTR_DAT_04cbca70);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbca78);
    FUN_02132f7c(PTR_DAT_04cbca88);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cbcb20);
    FUN_02132f7c(PTR_DAT_04cbcb28);
    FUN_02132f7c(PTR_DAT_04cbca98);
    FUN_02132f7c(PTR_DAT_04cbcab0);
    FUN_02132f7c(PTR_DAT_04cbcac0);
    FUN_02132f7c(PTR_DAT_04cbcad8);
    FUN_02132f7c(PTR_DAT_04cbcb30);
    bRam0000000004f9c997 = 1;
  }
  lVar7 = *(long *)puVar3;
  lStack_48 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (**(long **)(lVar7 + 0xb8) != 0) {
    uVar8 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (**(long **)(lVar7 + 0xb8),(param_1 & 0xff) + 1000,&lStack_48,
                       *(undefined8 *)PTR_DAT_04cbca68);
    lVar7 = lStack_48;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar8 & 1) != 0) {
        return lStack_48;
      }
    }
    puVar4 = PTR_DAT_04cbbfb8;
    puVar2 = PTR_DAT_04cab588;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cbcb28;
    uVar9 = Dino_BusSand_View_MaterialLibrary__get_Toon_23b96f4();
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_Material___ctor_437b5a8(lVar7,uVar9,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_Core_SandPalette__Name_2419630(param_1,0);
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar5,uVar9,0);
    puVar2 = PTR_DAT_04cab208;
    if (lVar7 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar7,uVar9,0);
      lStack_48 = lVar7;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      uVar9 = 0;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
        if (lVar7 == 0) goto LAB_024ba8c4;
        uVar9 = Dino_BusSand_GameAssets__GetTexture_237ceb8(lVar7,*(undefined8 *)PTR_DAT_04cbcb30,0)
        ;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      puVar1 = PTR_DAT_04cbcb20;
      if ((uVar8 & 1) != 0) {
        if ((lStack_48 == 0) ||
           (UnityEngine_Material__SetTexture_43831cc
                      (lStack_48,*(undefined8 *)PTR_DAT_04cbcb20,uVar9,0), lStack_48 == 0))
        goto LAB_024ba8c4;
        UnityEngine_Material__SetTextureScale_4383dcc(lStack_48,*(undefined8 *)puVar1,0);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_1,0);
      if (lStack_48 != 0) {
        uVar9 = NEON_ushl(CONCAT44(uVar6,uVar6),_UNK_00e6a460,4);
        uVar8 = CONCAT26((short)((ulong)uVar9 >> 0x20),
                         CONCAT24((short)uVar9,CONCAT22((short)((uint)uVar6 >> 8),(short)uVar6))) &
                0xff00ff00ff00ff;
        auVar11._2_2_ = 0;
        auVar11._0_2_ = (ushort)uVar8;
        auVar11._4_2_ = (short)(uVar8 >> 0x10);
        auVar11._6_2_ = 0;
        auVar11._8_2_ = (short)(uVar8 >> 0x20);
        auVar11._10_2_ = 0;
        auVar11._12_2_ = (short)(uVar8 >> 0x30);
        auVar11._14_2_ = 0;
        auVar11 = NEON_ucvtf(auVar11,4);
        fVar10 = auVar11._0_4_ / 255.0;
        fVar13 = auVar11._4_4_ / 255.0;
        fVar14 = auVar11._8_4_ / 255.0;
        fVar15 = auVar11._12_4_ / 255.0;
        auVar11 = NEON_fmov(0x3f800000,4);
        auVar12._0_4_ = (fVar10 + (auVar11._0_4_ - fVar10) * 0.12) * 1.18;
        auVar12._4_4_ = (fVar13 + (auVar11._4_4_ - fVar13) * 0.12) * 1.18;
        auVar12._8_4_ = (fVar14 + (auVar11._8_4_ - fVar14) * 0.12) * 1.18;
        auVar12._12_4_ = (fVar15 + (auVar11._12_4_ - fVar15) * 0.12) * 1.18;
        UnityEngine_Material__SetColor_43830b0
                  (auVar12,auVar12._4_4_,auVar12._8_4_,auVar12._12_4_,lStack_48,
                   *(undefined8 *)PTR_DAT_04cb68b8,0);
        if ((((lStack_48 != 0) &&
             (UnityEngine_Material__SetColor_43830b0
                        (_UNK_00e200f8,_UNK_00e2071c,_UNK_00e20830,0x3f800000,lStack_48,
                         *(undefined8 *)PTR_DAT_04cbcab0,0), lStack_48 != 0)) &&
            (UnityEngine_Material__SetFloat_4383048(lStack_48,*(undefined8 *)PTR_DAT_04cbcac0,0),
            lStack_48 != 0)) &&
           (((UnityEngine_Material__SetFloat_4383048(lStack_48,*(undefined8 *)PTR_DAT_04cbcad8,0),
             lStack_48 != 0 &&
             (UnityEngine_Material__SetFloat_4383048(lStack_48,*(undefined8 *)PTR_DAT_04cbca88,0),
             lStack_48 != 0)) &&
            (UnityEngine_Material__SetFloat_4383048(lStack_48,*(undefined8 *)PTR_DAT_04cbca98,0),
            lStack_48 != 0)))) {
          UnityEngine_Material__SetFloat_4383048
                    (ZEXT816(0),lStack_48,*(undefined8 *)PTR_DAT_04cbca78,0);
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (**(long **)(lVar7 + 0xb8) != 0) {
            System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                      (**(long **)(lVar7 + 0xb8),(param_1 & 0xff) + 1000,lStack_48,
                       *(undefined8 *)PTR_DAT_04cbca70);
            return lStack_48;
          }
        }
      }
    }
  }
LAB_024ba8c4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

