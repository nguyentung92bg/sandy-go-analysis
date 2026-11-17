/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Body
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Body (uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Body
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Body (uint8_t color, const MethodInfo*
   method); */

long Dino_BusSand_View_MaterialLibrary__Body_23b975c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
               uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lStack_68;
  
  puVar4 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c993 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbca68);
    FUN_02132f7c(PTR_DAT_04cbca70);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbca78);
    FUN_02132f7c(PTR_DAT_04cbca80);
    FUN_02132f7c(PTR_DAT_04cbca88);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cbca90);
    FUN_02132f7c(PTR_DAT_04cbca98);
    FUN_02132f7c(PTR_DAT_04cbcaa0);
    FUN_02132f7c(PTR_DAT_04cbcaa8);
    FUN_02132f7c(PTR_DAT_04cbcab0);
    FUN_02132f7c(PTR_DAT_04cbcab8);
    FUN_02132f7c(PTR_DAT_04cbcac0);
    FUN_02132f7c(PTR_DAT_04cbcac8);
    FUN_02132f7c(PTR_DAT_04cbcad0);
    FUN_02132f7c(PTR_DAT_04cbcad8);
    bRam0000000004f9c993 = 1;
  }
  lVar6 = *(long *)puVar4;
  lStack_68 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_024b9ed0;
  uVar1 = param_5 & 0xff;
  uVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                    (**(long **)(lVar6 + 0xb8),uVar1,&lStack_68,*(undefined8 *)PTR_DAT_04cbca68);
  lVar6 = lStack_68;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      return lStack_68;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar11 = (float)Dino_BusSand_View_MaterialLibrary__BodyColor_23b95d0(param_5);
  fVar13 = (float)param_2;
  fVar14 = (float)param_3;
  if ((param_5 & 0xff) == 0) {
LAB_024b996c:
    fVar15 = fVar11 * _UNK_00e2094c;
    uVar7 = CONCAT44(fVar14 * 0.45,fVar13 * 0.45);
  }
  else {
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar10 == 0) goto LAB_024b9ed0;
    if (*(int *)(lVar10 + 0x18) < (int)uVar1) goto LAB_024b996c;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      if (lVar10 == 0) goto LAB_024b9ed0;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar5 = Dino_BusSand_Core_LevelData__ParseHex_2410b28
                      (*(undefined8 *)(lVar10 + (ulong)(uVar1 - 1) * 8 + 0x20),0);
    uVar7 = NEON_ushl(CONCAT44(uVar5,uVar5),_UNK_00e6a7d0,4);
    fVar15 = (float)(uVar5 & 0xff) / 255.0;
    uVar8 = NEON_ucvtf(uVar7 & 0xff000000ff,4);
    uVar7 = CONCAT44((float)((ulong)uVar8 >> 0x20) / 255.0,(float)uVar8 / 255.0);
  }
  puVar3 = PTR_DAT_04cab208;
  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  uVar8 = 0;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (lVar6 == 0) goto LAB_024b9ed0;
    uVar8 = Dino_BusSand_GameAssets__GetMaterial_237c614(lVar6,*(undefined8 *)PTR_DAT_04cbca80,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_View_MaterialLibrary__get_Toon_23b96f4();
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(lVar6,uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_Core_SandPalette__Name_2419630(param_5,0);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbcaa8,uVar8,0);
    if (lVar6 == 0) goto LAB_024b9ed0;
    UnityEngine_Object__set_name_43c72ec(lVar6,uVar8,0);
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar6,1,0);
    lStack_68 = lVar6;
    UnityEngine_Material__SetColor_43830b0
              (fVar11,param_2,param_3,param_4,lVar6,*(undefined8 *)PTR_DAT_04cb68b8,0);
    if (lStack_68 == 0) goto LAB_024b9ed0;
    fVar15 = fVar15 / fVar11;
    uVar7 = CONCAT44((float)(uVar7 >> 0x20) / fVar14,(float)uVar7 / fVar13);
    uVar9 = NEON_fmov(0x3f800000,4);
    uVar7 = uVar7 ^ (uVar7 ^ uVar9) & ~CONCAT44(-(uint)(0.02 < fVar14),-(uint)(0.02 < fVar13));
    if (fVar11 <= _UNK_00e20844) {
      fVar15 = 1.0;
    }
    fVar13 = (float)(uVar7 >> 0x20);
    uVar9 = uVar7 ^ (uVar7 ^ 0x3f8ccccd3f8ccccd) &
                    CONCAT44(-(uint)(1.1 < fVar13),-(uint)(1.1 < (float)uVar7));
    fVar11 = _UNK_00e20170;
    if (fVar15 <= _UNK_00e20170) {
      fVar11 = fVar15;
    }
    uVar9 = uVar9 ^ (uVar9 ^ 0x3ec28f5c3ec28f5c) &
                    CONCAT44(-(uint)(fVar13 < 0.38),-(uint)((float)uVar7 < 0.38));
    fVar13 = _UNK_00e20104;
    if (_UNK_00e20104 <= fVar15) {
      fVar13 = fVar11;
    }
    UnityEngine_Material__SetColor_43830b0
              (fVar13,uVar9,uVar9 >> 0x20,0x3f800000,lStack_68,*(undefined8 *)PTR_DAT_04cbcab0,0);
    uVar12 = _UNK_00e205e8;
    if (((((lStack_68 == 0) ||
          (UnityEngine_Material__SetFloat_4383048
                     (_UNK_00e205e8,lStack_68,*(undefined8 *)PTR_DAT_04cbcac0,0), lStack_68 == 0))
         || (UnityEngine_Material__SetFloat_4383048
                       (uVar12,lStack_68,*(undefined8 *)PTR_DAT_04cbcad8,0), lStack_68 == 0)) ||
        ((UnityEngine_Material__SetFloat_4383048
                    (_UNK_00e201f4,lStack_68,*(undefined8 *)PTR_DAT_04cbca88,0), lStack_68 == 0 ||
         (UnityEngine_Material__SetFloat_4383048
                    (_UNK_00e208e8,lStack_68,*(undefined8 *)PTR_DAT_04cbca98,0), lStack_68 == 0))))
       || (UnityEngine_Material__SetFloat_4383048
                     (_UNK_00e1fe38,lStack_68,*(undefined8 *)PTR_DAT_04cbcaa0,0), lStack_68 == 0))
    goto LAB_024b9ed0;
    uVar8 = *(undefined8 *)PTR_DAT_04cbca78;
    uVar12 = _UNK_00e20aec;
  }
  else {
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b63c(lVar6,uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = Dino_BusSand_Core_SandPalette__Name_2419630(param_5,0);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbcaa8,uVar8,0);
    if (lVar6 == 0) goto LAB_024b9ed0;
    UnityEngine_Object__set_name_43c72ec(lVar6,uVar8,0);
    UnityEngine_Material__set_enableInstancing_437dbe4(lVar6,1,0);
    lStack_68 = lVar6;
    UnityEngine_Material__SetColor_43830b0
              (fVar11,param_2,param_3,param_4,lVar6,*(undefined8 *)PTR_DAT_04cbca90,0);
    if ((lStack_68 == 0) ||
       (UnityEngine_Material__SetColor_43830b0
                  (fVar15,uVar7,uVar7 >> 0x20,_UNK_00e2094c,lStack_68,
                   *(undefined8 *)PTR_DAT_04cbcab8,0), lStack_68 == 0)) goto LAB_024b9ed0;
    fVar11 = fVar14 * _UNK_00e20a34 + fVar11 * _UNK_00e207cc + fVar13 * _UNK_00e202a8;
    UnityEngine_Material__SetFloat_4383048
              (*(undefined4 *)(&UNK_00e6a7d8 + (ulong)(fVar11 < 0.25) * 4),lStack_68,
               *(undefined8 *)PTR_DAT_04cbcad0,0);
    if (lStack_68 == 0) goto LAB_024b9ed0;
    uVar8 = *(undefined8 *)PTR_DAT_04cbcac8;
    uVar12 = *(undefined4 *)(&UNK_00e6a510 + (ulong)(0.75 < fVar11) * 4);
  }
  UnityEngine_Material__SetFloat_4383048(uVar12,lStack_68,uVar8,0);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar4;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary_int__object___set_Item_3437318
              (**(long **)(lVar6 + 0xb8),uVar1,lStack_68,*(undefined8 *)PTR_DAT_04cbca70);
    return lStack_68;
  }
LAB_024b9ed0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

