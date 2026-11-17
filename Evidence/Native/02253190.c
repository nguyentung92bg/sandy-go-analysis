/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FaceForName
TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__FaceForName (System_String_o* lang, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$FaceForName
   TMPro_TMP_FontAsset_o* Dino_BusSand_App_LanguageFonts__FaceForName (System_String_o* lang, const
   MethodInfo* method); */

long Dino_BusSand_App_LanguageFonts__FaceForName_2153190(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
                    /* try { // try from 022531a0 to 023531ab has its CatchHandler @ 022531d0 */
                    /* try { // try from 022531ac to 023531fb has its CatchHandler @ 022530a8 */
  if ((bRam0000000004f9b7cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab600);
    FUN_02132f7c(PTR_DAT_04cab608);
                    /* catch() { ... } // from try @ 022531a0 with catch @ 022531d0 */
    FUN_02132f7c(PTR_DAT_04cab610);
                    /* catch() { ... } // from try @ 02253180 with catch @ 022531d8 */
    FUN_02132f7c(PTR_DAT_04cab560);
    FUN_02132f7c(PTR_DAT_04cab530);
                    /* catch() { ... } // from try @ 02253138 with catch @ 022531ec */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab568);
    FUN_02132f7c(PTR_DAT_04cab570);
    FUN_02132f7c(PTR_DAT_04cab658);
    FUN_02132f7c(PTR_DAT_04cab620);
    bRam0000000004f9b7cf = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar2 = PTR_DAT_04cab530;
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = *(long *)PTR_DAT_04cab530;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cab600;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar4,param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cab600);
    lVar4 = lStack_38;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        return lStack_38;
      }
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 0225333c with catch @ 022532e8 */
    if (*(char *)(lVar6 + 0x48) == '\0') {
                    /* catch() { ... } // from try @ 02253334 with catch @ 02253388 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_LanguageFonts__FallbackFor_2152b44(param_1);
      return lVar4;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x58) != 0) {
      uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*(long *)(lVar6 + 0x58),param_1,&lStack_40,*(undefined8 *)puVar1);
      if ((uVar3 & 1) != 0) {
        return lStack_40;
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
                    /* try { // try from 02253334 to 0235333b has its CatchHandler @ 02253388 */
      if (**(long **)(lVar4 + 0xb8) != 0) {
                    /* try { // try from 0225333c to 0235339b has its CatchHandler @ 022532e8 */
        uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                          (**(long **)(lVar4 + 0xb8),param_1,&uStack_48,
                           *(undefined8 *)PTR_DAT_04cab608);
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cab620,uStack_48,0);
          uVar5 = UnityEngine_Resources__Load_object__2891e2c(uVar5,*(undefined8 *)PTR_DAT_04cab568)
          ;
        }
        puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022533a8 to 023533ab has its CatchHandler @ 022533b4 */
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022533a8 with catch @ 022533b4
                        */
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022533b8 to 023533e7 has its CatchHandler @ 022533b8
                       catch() { ... } // from try @ 022533b8 with catch @ 022533b8
                       catch() { ... } // from try @ 022533f4 with catch @ 022533b8 */
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        lVar4 = 0;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab570 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 022533e8 to 023533f3 has its CatchHandler @ 02253414 */
                    /* try { // try from 022533f4 to 0235342f has its CatchHandler @ 022533b8 */
          lVar4 = TMPro_TMP_FontAsset__CreateFontAsset_42b2c14
                            (uVar5,0x5a,9,0x1045,0x100,0x100,1,1,0);
        }
                    /* catch() { ... } // from try @ 022533e8 with catch @ 02253414 */
        lStack_40 = lVar4;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02253430 to 023534a7 has its CatchHandler @ 02253430
                       catch() { ... } // from try @ 02253430 with catch @ 02253430
                       catch() { ... } // from try @ 022534bc with catch @ 02253430 */
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        lVar4 = lStack_40;
        if ((uVar3 & 1) != 0) {
          uVar5 = System_String__Concat_46c82e0(uStack_48,*(undefined8 *)PTR_DAT_04cab658,0);
          if (lVar4 == 0) goto LAB_022534ec;
          UnityEngine_Object__set_name_43c72ec(lVar4,uVar5,0);
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
          if (lVar4 == 0) goto LAB_022534ec;
          System_Collections_Generic_HashSet_object___Add_37e654c
                    (lVar4,lStack_40,*(undefined8 *)PTR_DAT_04cab560);
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 022534a8 to 023534bb has its CatchHandler @ 022534d0 */
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
        if (lVar4 != 0) {
                    /* try { // try from 022534bc to 023534e7 has its CatchHandler @ 02253430 */
                    /* catch() { ... } // from try @ 022534a8 with catch @ 022534d0 */
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar4,param_1,lStack_40,*(undefined8 *)PTR_DAT_04cab610);
          return lStack_40;
        }
      }
    }
  }
LAB_022534ec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

