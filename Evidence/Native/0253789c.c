/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<Refresh>d__20$$MoveNext
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_d__20__MoveNext (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<Refresh>d__20$$MoveNext
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_d__20__MoveNext
   (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_d__20_o __this, const MethodInfo* method);
    */

void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_d__20__MoveNext_243789c(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cc5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf350);
    FUN_02132f7c(PTR_DAT_04cab0c0);
    FUN_02132f7c(PTR_DAT_04cab0c8);
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04cbf2e0);
    FUN_02132f7c(PTR_DAT_04cbf2d0);
    FUN_02132f7c(PTR_DAT_04cab0d8);
    FUN_02132f7c(PTR_DAT_04cbf320);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc5a = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_28 = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__HookCampaign_2437420(lVar11);
    puVar1 = PTR_DAT_04cbf2e0;
    *(undefined1 *)(lVar11 + 0x40) = 0;
                    /* try { // try from 02537970 to 02637977 has its CatchHandler @ 02537a94 */
    auVar12 = Dino_Common_RemoteConfigDataBase_object___FetchDataAsync_2e3fc0c
                        (lVar11,1,*(undefined8 *)puVar1);
                    /* try { // try from 02537978 to 02637a7f has its CatchHandler @ 0253775c */
    auStack_40._0_8_ = 0;
    auStack_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    auStack_40 = auVar12;
    thunk_FUN_02134474(auStack_40,0);
    auStack_50 = auStack_40;
    uVar4 = FUN_0224ca0c(auStack_50,*(undefined8 *)PTR_DAT_04cab0c8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
      thunk_FUN_02134474(param_1 + 8,0);
      FUN_02541018(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cbf350);
      return;
    }
  }
  uVar7 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ == (long *)0x0) {
    if (auStack_50[8] == '\0') goto LAB_02537b50;
  }
  else {
    uVar3 = auStack_50._10_2_;
    lVar5 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
    }
    lVar8 = *(long *)uVar7;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 02537a80 to 02637a83 has its CatchHandler @ 02537a90 */
        if (*(long *)(piVar9 + -2) == lVar5) {
                    /* try { // try from 02537ab0 to 02637ab3 has its CatchHandler @ 02537acc */
                    /* try { // try from 02537ab4 to 02637acf has its CatchHandler @ 0253775c */
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02537ab8;
        }
                    /* try { // try from 02537a84 to 02637a87 has its CatchHandler @ 02537a8c */
        uVar4 = uVar4 - 1;
                    /* try { // try from 02537a88 to 02637aaf has its CatchHandler @ 0253775c */
        piVar9 = piVar9 + 4;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02537a84 with catch @ 02537a8c
                        */
      } while (uVar4 != 0);
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02537a80 with catch @ 02537a90
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02537970 with catch @ 02537a94
                        */
    puVar6 = (undefined8 *)FUN_0216b7a4(uVar7,lVar5,0);
LAB_02537ab8:
    uVar4 = (*(code *)*puVar6)(uVar7,uVar3,puVar6[1]);
    if ((uVar4 & 1) == 0) goto LAB_02537b50;
  }
                    /* catch() { ... } // from try @ 02537ab0 with catch @ 02537acc */
                    /* try { // try from 02537ad0 to 02637ad7 has its CatchHandler @ 02537ae0 */
                    /* try { // try from 02537ad8 to 02637ae3 has its CatchHandler @ 0253775c */
  if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02537ad0 with catch @ 02537ae0
                        */
    thunk_FUN_0218fdac();
  }
  auStack_60 = System_DateTimeOffset__get_UtcNow_48145cc(0);
  uStack_28 = System_DateTimeOffset__ToUnixTimeSeconds_48160f8(auStack_60,0);
  uVar7 = System_Int64__ToString_482e7e4(&uStack_28,0);
  UnityEngine_PlayerPrefs__SetString_43b5744(*(undefined8 *)PTR_DAT_04cbf320,uVar7,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar11 + 0x40) == '\0') {
    Dino_Common_RemoteConfigDataBase_object___SetValue_2e40184
              (lVar11,*(undefined8 *)PTR_DAT_04ca9c30,*(undefined8 *)PTR_DAT_04cbf2d0);
  }
LAB_02537b50:
  cVar2 = cRam0000000004f9b797;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_02132f7c(PTR_DAT_04caafb8);
    cRam0000000004f9b797 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04caafb8) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02537bd8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04caafb8,2);
LAB_02537bd8:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

