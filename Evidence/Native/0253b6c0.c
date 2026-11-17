/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$Install
void Dino_BusSand_Sdk_SdkBootstrap__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$Install
   void Dino_BusSand_Sdk_SdkBootstrap__Install (const MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap__Install_243b6c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f9cc76 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c88);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cac8c0);
                    /* try { // try from 0253b71c to 0263b7c7 has its CatchHandler @ 0253b71c
                       catch() { ... } // from try @ 0253b71c with catch @ 0253b71c
                       catch() { ... } // from try @ 0253b8dc with catch @ 0253b71c
                       catch() { ... } // from try @ 0253bb4c with catch @ 0253b71c
                       catch() { ... } // from try @ 0253bbe4 with catch @ 0253b71c */
    FUN_02132f7c(PTR_DAT_04cb41b8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cbf4a0);
    FUN_02132f7c(PTR_DAT_04cbf4a8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cad1e8);
    FUN_02132f7c(PTR_DAT_04cbf4b0);
    FUN_02132f7c(PTR_DAT_04cbf4b8);
    FUN_02132f7c(PTR_DAT_04cbf4c0);
    FUN_02132f7c(PTR_DAT_04cbf4c8);
    FUN_02132f7c(PTR_DAT_04cbf4d0);
    FUN_02132f7c(PTR_DAT_04cbf4d8);
    FUN_02132f7c(PTR_DAT_04cbf4e0);
    FUN_02132f7c(PTR_DAT_04cbf4e8);
    FUN_02132f7c(PTR_DAT_04cbf4f0);
                    /* try { // try from 0253b7c8 to 0263b7d7 has its CatchHandler @ 0253bb94 */
    FUN_02132f7c(PTR_DAT_04cbf4f8);
    bRam0000000004f9cc76 = 1;
  }
                    /* try { // try from 0253b7e0 to 0263b7e7 has its CatchHandler @ 0253bb90 */
  auStack_24[0] = 0;
  if (cRam0000000004f9ccaa == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf490);
    cRam0000000004f9ccaa = '\x01';
  }
                    /* try { // try from 0253b800 to 0263b837 has its CatchHandler @ 0253bb98 */
  puVar1 = PTR_DAT_04cbf490;
  pcVar8 = *(char **)(*(long *)PTR_DAT_04cbf490 + 0xb8);
  if (*pcVar8 == '\0') {
    if (cRam0000000004f9cca9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbf490);
      cRam0000000004f9cca9 = '\x01';
                    /* try { // try from 0253b838 to 0263b84f has its CatchHandler @ 0253bb8c */
      pcVar8 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    puVar1 = PTR_DAT_04cbf4b0;
    *pcVar8 = '\x01';
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(uVar3,0);
    Dino_IGlobalService_object___Set_37f769c(uVar3,*(undefined8 *)PTR_DAT_04cbf4a0);
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf4b8);
    System_Object___ctor_4870e5c(uVar3,0);
                    /* try { // try from 0253b890 to 0263b897 has its CatchHandler @ 0253bb98 */
    Dino_IGlobalService_object___Set_37f769c(uVar3,*(undefined8 *)PTR_DAT_04cbf4a8);
                    /* try { // try from 0253b8b0 to 0263b8b3 has its CatchHandler @ 0253bb78 */
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbeff0);
    System_Object___ctor_4870e5c(uVar3,0);
    Dino_BusSand_Sdk_DinoAdProvider__HookLoaded_24310a4();
    puVar1 = PTR_DAT_04cabaa8;
    lVar4 = *(long *)PTR_DAT_04cabaa8;
                    /* try { // try from 0253b8d0 to 0263b8db has its CatchHandler @ 0253bb98 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 0253b8dc to 0263b927 has its CatchHandler @ 0253b71c */
      lVar4 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar3;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf4f0);
    Dino_BusSand_Sdk_UnityIapProvider___ctor_243bbd4();
    puVar1 = PTR_DAT_04cad1f0;
    lVar4 = *(long *)PTR_DAT_04cad1f0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 0253b928 to 0263b92f has its CatchHandler @ 0253bb60 */
      lVar4 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar3;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
                    /* try { // try from 0253b94c to 0263b957 has its CatchHandler @ 0253bb5c */
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf4c0);
    Dino_BusSand_App_Iap_StorePriceLookup___ctor_217c5a8
              (uVar5,uVar3,*(undefined8 *)PTR_DAT_04cbf4e8,0);
                    /* try { // try from 0253b974 to 0263b97b has its CatchHandler @ 0253bbac */
    puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *puVar6 = uVar5;
    thunk_FUN_02134474(puVar6,uVar5);
    Dino_BusSand_Sdk_SandBusUpdateGate__Install_243bcb8();
    Dino_BusSand_Sdk_SandBusReview__Install_2438b20();
    Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Install_2434ec8();
    Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Install_2436db4();
    puVar1 = PTR_DAT_04cbf4e0;
                    /* try { // try from 0253b998 to 0263b99f has its CatchHandler @ 0253bb9c */
    lVar4 = *(long *)PTR_DAT_04cbf4e0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 0253b9b0 to 0263b9cb has its CatchHandler @ 0253bb58 */
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar6[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar3 = *puVar6;
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
                    /* try { // try from 0253b9f4 to 0263ba1b has its CatchHandler @ 0253bb88 */
      System_Func_bool____ctor_379d5fc(lVar9,uVar3,*(undefined8 *)PTR_DAT_04cbf4c8,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar7 = lVar9;
      thunk_FUN_02134474(plVar7,lVar9);
    }
    puVar2 = PTR_DAT_04cad1e8;
    **(long **)(*(long *)PTR_DAT_04cad1e8 + 0xb8) = lVar9;
                    /* try { // try from 0253ba2c to 0263ba33 has its CatchHandler @ 0253bb80 */
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar9);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 0253ba44 to 0263ba4b has its CatchHandler @ 0253bb7c */
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar6[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar3 = *puVar6;
                    /* try { // try from 0253ba7c to 0263ba93 has its CatchHandler @ 0253bb4c */
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2c88);
      System_Action_object____ctor_35f0008(lVar9,uVar3,*(undefined8 *)PTR_DAT_04cbf4d0,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar9;
      thunk_FUN_02134474(plVar7,lVar9);
    }
                    /* try { // try from 0253bab8 to 0263bacf has its CatchHandler @ 0253bb74 */
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = lVar9;
    thunk_FUN_02134474(plVar7,lVar9);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
                    /* try { // try from 0253badc to 0263baf3 has its CatchHandler @ 0253bb54 */
    lVar9 = puVar6[3];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar3 = *puVar6;
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb41b8);
                    /* try { // try from 0253bb18 to 0263bb1b has its CatchHandler @ 0253bba8 */
                    /* try { // try from 0253bb1c to 0263bb1f has its CatchHandler @ 0253bba4 */
                    /* try { // try from 0253bb20 to 0263bb23 has its CatchHandler @ 0253bba0 */
                    /* try { // try from 0253bb24 to 0263bb27 has its CatchHandler @ 0253bb84 */
      System_Func_object____ctor_379de3c(lVar9,uVar3,*(undefined8 *)PTR_DAT_04cbf4d8,0);
                    /* try { // try from 0253bb28 to 0263bb2b has its CatchHandler @ 0253bb90 */
                    /* try { // try from 0253bb2c to 0263bb2f has its CatchHandler @ 0253bb70 */
                    /* try { // try from 0253bb30 to 0263bb33 has its CatchHandler @ 0253bb6c */
                    /* try { // try from 0253bb34 to 0263bb37 has its CatchHandler @ 0253bb68 */
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar7 = lVar9;
                    /* try { // try from 0253bb38 to 0263bb3b has its CatchHandler @ 0253bb64 */
      thunk_FUN_02134474(plVar7,lVar9);
    }
                    /* try { // try from 0253bb3c to 0263bb3f has its CatchHandler @ 0253bb80 */
                    /* try { // try from 0253bb40 to 0263bb43 has its CatchHandler @ 0253bb7c */
                    /* try { // try from 0253bb44 to 0263bb47 has its CatchHandler @ 0253bb78 */
                    /* try { // try from 0253bb48 to 0263bb4b has its CatchHandler @ 0253bb50 */
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar7 = lVar9;
                    /* catch() { ... } // from try @ 0253ba7c with catch @ 0253bb4c
                       try { // try from 0253bb4c to 0263bbc7 has its CatchHandler @ 0253b71c */
    thunk_FUN_02134474(plVar7,lVar9);
                    /* catch() { ... } // from try @ 0253bb48 with catch @ 0253bb50 */
                    /* catch() { ... } // from try @ 0253badc with catch @ 0253bb54 */
                    /* catch() { ... } // from try @ 0253b9b0 with catch @ 0253bb58 */
                    /* catch() { ... } // from try @ 0253b94c with catch @ 0253bb5c */
                    /* catch() { ... } // from try @ 0253b928 with catch @ 0253bb60 */
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0253bb38 with catch @ 0253bb64 */
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0253bb34 with catch @ 0253bb68 */
                    /* catch() { ... } // from try @ 0253bb30 with catch @ 0253bb6c */
                    /* catch() { ... } // from try @ 0253bb2c with catch @ 0253bb70 */
    Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(1,0);
                    /* catch() { ... } // from try @ 0253bab8 with catch @ 0253bb74 */
    auStack_24[0] = Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_243bef4();
                    /* catch() { ... } // from try @ 0253b8b0 with catch @ 0253bb78
                       catch() { ... } // from try @ 0253bb44 with catch @ 0253bb78 */
                    /* catch() { ... } // from try @ 0253ba44 with catch @ 0253bb7c
                       catch() { ... } // from try @ 0253bb40 with catch @ 0253bb7c */
                    /* catch() { ... } // from try @ 0253ba2c with catch @ 0253bb80
                       catch() { ... } // from try @ 0253bb3c with catch @ 0253bb80 */
                    /* catch() { ... } // from try @ 0253bb24 with catch @ 0253bb84 */
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_24,0);
                    /* catch() { ... } // from try @ 0253b9f4 with catch @ 0253bb88 */
                    /* catch() { ... } // from try @ 0253b838 with catch @ 0253bb8c */
                    /* catch() { ... } // from try @ 0253b7e0 with catch @ 0253bb90
                       catch() { ... } // from try @ 0253bb28 with catch @ 0253bb90 */
                    /* catch() { ... } // from try @ 0253b7c8 with catch @ 0253bb94 */
                    /* catch() { ... } // from try @ 0253b800 with catch @ 0253bb98
                       catch() { ... } // from try @ 0253b890 with catch @ 0253bb98
                       catch() { ... } // from try @ 0253b8d0 with catch @ 0253bb98 */
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0253b998 with catch @ 0253bb9c */
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0253bb20 with catch @ 0253bba0 */
                    /* catch() { ... } // from try @ 0253bb1c with catch @ 0253bba4 */
                    /* catch() { ... } // from try @ 0253bb18 with catch @ 0253bba8 */
                    /* catch() { ... } // from try @ 0253b974 with catch @ 0253bbac */
    UnityEngine_Debug__Log_4360fc8(*(undefined8 *)PTR_DAT_04cbf4f8,0);
  }
  return;
}

