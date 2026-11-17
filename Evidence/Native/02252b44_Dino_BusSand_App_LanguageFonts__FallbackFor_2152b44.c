/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FallbackFor
TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__FallbackFor (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FallbackFor
   TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__FallbackFor (System_String_o* lang, const
   MethodInfo* method); */

long Dino_BusSand_App_LanguageFonts__FallbackFor_2152b44(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f9b7d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab600);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cab610);
    FUN_02132f7c(PTR_DAT_04cab560);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab568);
    FUN_02132f7c(PTR_DAT_04cab570);
    FUN_02132f7c(PTR_DAT_04cab618);
    FUN_02132f7c(PTR_DAT_04cab620);
    bRam0000000004f9b7d1 = 1;
  }
  lStack_28 = 0;
  uStack_38 = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab530;
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar3 = *(long *)PTR_DAT_04cab530;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar3,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cab600);
    if ((uVar2 & 1) != 0) {
      return lStack_28;
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* catch() { ... } // from try @ 02252cb8 with catch @ 02252c74 */
      uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (**(long **)(lVar3 + 0xb8),param_1,&uStack_38,
                         *(undefined8 *)PTR_DAT_04cab608);
      if ((uVar2 & 1) == 0) {
        lVar3 = 0;
      }
      else {
        uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cab620,uStack_38,0);
                    /* try { // try from 02252cac to 02352cb7 has its CatchHandler @ 02252d5c */
        uVar4 = UnityEngine_Resources__Load_object__2891e2c(uVar4,*(undefined8 *)PTR_DAT_04cab568);
                    /* try { // try from 02252cb8 to 02352d7b has its CatchHandler @ 02252c74 */
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
        lVar3 = 0;
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab570 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = TMPro_TMP_FontAsset__CreateFontAsset_42b2b98(uVar4,0);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar4 = System_String__Concat_46c82e0(uStack_38,*(undefined8 *)PTR_DAT_04cab618,0);
                    /* catch() { ... } // from try @ 02252cac with catch @ 02252d5c */
        if (lVar3 == 0) goto LAB_02252dfc;
        UnityEngine_Object__set_name_43c72ec(lVar3,uVar4,0);
        lVar5 = *(long *)puVar1;
        *(undefined1 *)(lVar3 + 0x154) = 1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
        if (lVar5 == 0) goto LAB_02252dfc;
        System_Collections_Generic_HashSet_object___Add_37e654c
                  (lVar5,lVar3,*(undefined8 *)PTR_DAT_04cab560);
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      if (lVar5 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar5,param_1,lVar3,*(undefined8 *)PTR_DAT_04cab610);
        return lVar3;
      }
    }
  }
LAB_02252dfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

