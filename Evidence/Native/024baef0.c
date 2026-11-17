/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Paint
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Paint (uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Paint
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Paint (uint8_t color, const
   MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__Paint_23baef0
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c99f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbca68);
    FUN_02132f7c(PTR_DAT_04cbca70);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbca90);
    FUN_02132f7c(PTR_DAT_04cbcb88);
    FUN_02132f7c(PTR_DAT_04cbcb90);
    FUN_02132f7c(PTR_DAT_04cbcaa0);
    FUN_02132f7c(PTR_DAT_04cbcb98);
    bRam0000000004f9c99f = 1;
  }
  lVar5 = *(long *)puVar1;
  lStack_38 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (**(long **)(lVar5 + 0xb8),(param_5 & 0xff) + 2000,&lStack_38,
                       *(undefined8 *)PTR_DAT_04cbca68);
    lVar5 = lStack_38;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar6 & 1) != 0) {
        return lStack_38;
      }
    }
    puVar4 = PTR_DAT_04cbcb98;
    puVar2 = PTR_DAT_04cbbfb8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cbcb88;
    fVar8 = (float)Dino_BusSand_View_MaterialLibrary__PaintColor_23bae24(param_5);
    lVar5 = Dino_BusSand_View_MaterialLibrary__LitTemplate_23bab64(*(undefined8 *)puVar4);
    lStack_38 = lVar5;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = Dino_BusSand_Core_SandPalette__Name_2419630(param_5,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar7,0);
    if ((((lVar5 != 0) && (UnityEngine_Object__set_name_43c72ec(lVar5,uVar7,0), lStack_38 != 0)) &&
        (UnityEngine_Material__set_enableInstancing_437dbe4(lStack_38,1,0), lStack_38 != 0)) &&
       ((UnityEngine_Material__SetColor_43830b0
                   (fVar8,param_2,param_3,param_4,lStack_38,*(undefined8 *)PTR_DAT_04cbca90,0),
        lStack_38 != 0 &&
        (UnityEngine_Material__SetFloat_4383048
                   (*(undefined4 *)
                     (&UNK_00e6a0c8 +
                     (ulong)(param_3 * _UNK_00e20a34 +
                             fVar8 * _UNK_00e207cc + param_2 * _UNK_00e202a8 < _UNK_00e20390) * 4),
                    lStack_38,*(undefined8 *)PTR_DAT_04cbcaa0,0), lStack_38 != 0)))) {
      UnityEngine_Material__SetFloat_4383048
                (_UNK_00e2043c,lStack_38,*(undefined8 *)PTR_DAT_04cbcb90,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                  (**(long **)(lVar5 + 0xb8),(param_5 & 0xff) + 2000,lStack_38,
                   *(undefined8 *)PTR_DAT_04cbca70);
        return lStack_38;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

