/* IL2CPP: Dino.BusSand.App.LanguageFonts$$DefaultFallback
TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__DefaultFallback (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$DefaultFallback
   TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__DefaultFallback (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_LanguageFonts__DefaultFallback_2151ff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04cab530;
  if ((bRam0000000004f9b7cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab560);
    FUN_02132f7c(PTR_DAT_04cab538);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab568);
    FUN_02132f7c(PTR_DAT_04cab570);
    FUN_02132f7c(PTR_DAT_04cab578);
    FUN_02132f7c(PTR_DAT_04cab580);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b7cc = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    uVar8 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cab578,*(undefined8 *)PTR_DAT_04cab568);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar3 + 0xb8);
    if (*(char *)(lVar6 + 0x48) == '\0') {
LAB_022521c4:
      uVar9 = 0x800;
    }
    else {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      uVar4 = Dino_BusSand_App_LanguageFonts__KitFaceFits_2151c54(*(undefined8 *)(lVar6 + 0x30));
      if ((uVar4 & 1) == 0) goto LAB_022521c4;
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
      if (lVar6 == 0) goto LAB_022522f8;
      lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      lVar3 = *(long *)PTR_DAT_04ca9c30;
      if (lVar7 != 0) {
        lVar3 = lVar7;
      }
      uVar4 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                        (lVar6,lVar3,*(undefined8 *)PTR_DAT_04cab538);
      if ((uVar4 & 1) != 0) goto LAB_022521c4;
      uVar9 = 0x400;
    }
    if (*(int *)(*(long *)PTR_DAT_04cab570 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = TMPro_TMP_FontAsset__CreateFontAsset_42b2c14(uVar8,0x48,10,0x1045,uVar9,uVar9,1,1,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38);
    *puVar5 = uVar8;
    thunk_FUN_02134474(puVar5,uVar8);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar3 == 0) {
LAB_022522f8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec(lVar3,*(undefined8 *)PTR_DAT_04cab580,0);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    if (lVar3 == 0) goto LAB_022522f8;
    lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *(undefined1 *)(lVar3 + 0x154) = 1;
    if (lVar6 == 0) goto LAB_022522f8;
    System_Collections_Generic_HashSet_object___Add_37e654c
              (lVar6,lVar3,*(undefined8 *)PTR_DAT_04cab560);
  }
  else {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_022522d4;
    thunk_FUN_0218fdac();
  }
  lVar3 = *(long *)puVar2;
LAB_022522d4:
  return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38);
}

