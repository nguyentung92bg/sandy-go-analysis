/* IL2CPP: Dino.BusSand.AudioHub$$Clip
UnityEngine_AudioClip_o* Dino_BusSand_AudioHub__Clip (Dino_BusSand_AudioHub_o* __this, System_String_o* asset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Clip
   UnityEngine_AudioClip_o* Dino_BusSand_AudioHub__Clip (Dino_BusSand_AudioHub_o* __this,
   System_String_o* asset, const MethodInfo* method); */

undefined8 Dino_BusSand_AudioHub__Clip_23742fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uStack_38;
  
                    /* try { // try from 02474300 to 02574347 has its CatchHandler @ 024741fc */
  if ((bRam0000000004f9c7ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb1c8);
                    /* try { // try from 02474348 to 0257434b has its CatchHandler @ 02474350 */
                    /* try { // try from 0247434c to 0257436f has its CatchHandler @ 024741fc */
    FUN_02132f7c(PTR_DAT_04cbb1d0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02474348 with catch @ 02474350
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024742f8 with catch @ 02474354
                        */
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab7e0);
                    /* try { // try from 02474370 to 02574373 has its CatchHandler @ 0247438c */
    FUN_02132f7c(PTR_DAT_04cab538);
                    /* try { // try from 02474374 to 0257438f has its CatchHandler @ 024741fc */
    FUN_02132f7c(PTR_DAT_04cbb1d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 02474370 with catch @ 0247438c */
                    /* try { // try from 02474390 to 02574397 has its CatchHandler @ 024743a0 */
    FUN_02132f7c(PTR_DAT_04cbb1e0);
                    /* try { // try from 02474398 to 025743a3 has its CatchHandler @ 024741fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02474390 with catch @ 024743a0
                        */
    FUN_02132f7c(PTR_DAT_04cbb1e8);
                    /* try { // try from 024743a4 to 025744df has its CatchHandler @ 024743a4
                       catch() { ... } // from try @ 024743a4 with catch @ 024743a4
                       catch() { ... } // from try @ 02474520 with catch @ 024743a4
                       catch() { ... } // from try @ 02474640 with catch @ 024743a4
                       catch() { ... } // from try @ 0247466c with catch @ 024743a4
                       catch() { ... } // from try @ 02474690 with catch @ 024743a4 */
    bRam0000000004f9c7ed = 1;
  }
  uStack_38 = 0;
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_024746f8;
  uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_1 + 0x38),param_2,&uStack_38,*(undefined8 *)PTR_DAT_04cbb1c8);
  uVar7 = uStack_38;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return uStack_38;
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_024746f8;
  uVar4 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                    (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_04cab538);
  puVar3 = PTR_DAT_04cbb1e8;
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) goto LAB_024746f8;
  uVar4 = System_String__StartsWith_46d117c(param_2,*(undefined8 *)PTR_DAT_04cbb1e8,0);
  puVar2 = PTR_DAT_04cab1f0;
  lVar5 = *(long *)PTR_DAT_04cab1f0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_04cab208;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar9 != 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* try { // try from 024744e0 to 025744e7 has its CatchHandler @ 0247464c */
        lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_024746f8;
      }
      pcVar8 = *(code **)(lVar9 + 0x18);
      uVar7 = *(undefined8 *)(lVar9 + 0x40);
      uVar6 = *(undefined8 *)(lVar9 + 0x28);
      lVar5 = param_2;
      goto LAB_024744fc;
    }
                    /* catch() { ... } // from try @ 02474668 with catch @ 02474684 */
                    /* try { // try from 02474688 to 0257468f has its CatchHandler @ 02474698 */
                    /* try { // try from 02474690 to 0257469b has its CatchHandler @ 024743a4 */
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02474688 with catch @ 02474698
                        */
    uVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
                    /* try { // try from 0247469c to 025747d7 has its CatchHandler @ 0247469c
                       catch() { ... } // from try @ 0247469c with catch @ 0247469c
                       catch() { ... } // from try @ 02474818 with catch @ 0247469c
                       catch() { ... } // from try @ 02474928 with catch @ 0247469c
                       catch() { ... } // from try @ 02474954 with catch @ 0247469c
                       catch() { ... } // from try @ 02474978 with catch @ 0247469c */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
      if (lVar5 == 0) goto LAB_024746f8;
      uVar7 = Dino_BusSand_GameAssets__GetClip_2374df0(lVar5,param_2);
    }
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    uVar7 = 0;
    if (lVar9 != 0) {
      lVar5 = System_String__Substring_46d6a94(param_2,6,0);
      uVar7 = *(undefined8 *)(lVar9 + 0x40);
      pcVar8 = *(code **)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x28);
LAB_024744fc:
      uVar7 = (*pcVar8)(uVar7,lVar5,uVar6);
    }
  }
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02474518 to 0257451f has its CatchHandler @ 02474644 */
  uStack_38 = uVar7;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02474520 to 0257463b has its CatchHandler @ 024743a4 */
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_024746f8;
    uVar4 = System_Collections_Generic_HashSet_object___Add_37e654c
                      (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_04cab7e0);
    if ((uVar4 & 1) != 0) {
      uVar4 = System_String__StartsWith_46d117c(param_2,*(undefined8 *)puVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) goto LAB_024745f0;
      }
      uVar7 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb1e0,param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogWarning_4357a30(uVar7,0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_024746f8;
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (*(long *)(param_1 + 0x38),param_2,uStack_38,*(undefined8 *)PTR_DAT_04cbb1d0);
  }
LAB_024745f0:
  uVar7 = uStack_38;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = System_String__StartsWith_46d117c(param_2,*(undefined8 *)puVar3,0), (uVar4 & 1) != 0))
  {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 0247463c to 0257463f has its CatchHandler @ 02474648 */
      lVar5 = *(long *)puVar2;
    }
                    /* try { // try from 02474640 to 02574667 has its CatchHandler @ 024743a4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02474518 with catch @ 02474644
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0247463c with catch @ 02474648
                        */
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024744e0 with catch @ 0247464c
                        */
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_024746f8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_HashSet_object___Remove_37e5c2c
                (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_04cbb1d8);
    }
  }
                    /* try { // try from 0247466c to 02574687 has its CatchHandler @ 024743a4 */
  return uStack_38;
}

