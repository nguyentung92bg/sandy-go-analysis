/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$get_CustomParameters
System_Collections_Generic_IReadOnlyDictionary_string__object__o* Dino_BusSand_Sdk_SandBusAdsRemoteConfig__get_CustomParameters (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig$$get_CustomParameters
   System_Collections_Generic_IReadOnlyDictionary_string__object__o*
   Dino_BusSand_Sdk_SandBusAdsRemoteConfig__get_CustomParameters
   (Dino_BusSand_Sdk_SandBusAdsRemoteConfig_o* __this, const MethodInfo* method); */

long Dino_BusSand_Sdk_SandBusAdsRemoteConfig__get_CustomParameters_2434a14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  undefined4 uStack_60;
  uint uStack_5c;
  long *plStack_58;
  
  puVar3 = PTR_DAT_04caa210;
  puVar1 = PTR_DAT_04ca9b50;
  puVar2 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9cc48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caab40);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cbf200);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04caab30);
    FUN_02132f7c(PTR_DAT_04cb49f0);
    FUN_02132f7c(PTR_DAT_04cb2248);
    FUN_02132f7c(PTR_DAT_04cbf208);
    FUN_02132f7c(PTR_DAT_04cbf210);
    FUN_02132f7c(PTR_DAT_04cbf218);
    FUN_02132f7c(PTR_DAT_04caab50);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cb4af0);
    FUN_02132f7c(PTR_DAT_04caa838);
    FUN_02132f7c(PTR_DAT_04cbf220);
    FUN_02132f7c(PTR_DAT_04cb2258);
    bRam0000000004f9cc48 = 1;
  }
  plStack_58 = (long *)0x0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar10,*(undefined8 *)puVar1)
  ;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Application__get_version_435257c(0);
  puVar7 = PTR_DAT_04cbf220;
  puVar6 = PTR_DAT_04cbf218;
  puVar13 = (undefined8 *)PTR_DAT_04cbf208;
  puVar5 = PTR_DAT_04cb2258;
  puVar4 = PTR_DAT_04cb2248;
  puVar3 = PTR_DAT_04cacfe0;
  puVar1 = PTR_DAT_04caab30;
  puVar2 = PTR_DAT_04ca9b58;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
            (lVar10,*(undefined8 *)PTR_DAT_04caab50,uVar11,*(undefined8 *)PTR_DAT_04ca9b58);
  iVar9 = UnityEngine_Application__get_platform_4352d00(0);
  if (iVar9 != 8) {
    puVar13 = (undefined8 *)puVar6;
  }
  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
            (lVar10,*(undefined8 *)puVar7,*puVar13,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cabaf8;
  uVar11 = Dino_BusSand_App_Meta_Segments__get_MoneyName_220fb94(0);
  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
            (lVar10,*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar2);
  uVar11 = Dino_BusSand_App_Meta_Segments__get_LifeName_220fa78(0);
  System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
            (lVar10,*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar2);
  uVar12 = Sisus_Init_Service__TryGet_object__28b2b2c(&plStack_58,*(undefined8 *)puVar1);
  plVar8 = plStack_58;
  if (((uVar12 & 1) != 0) && (plStack_58 != (long *)0x0)) {
    lVar15 = *plStack_58;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04caab40) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02534cd4;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plStack_58,*(long *)PTR_DAT_04caab40,0);
LAB_02534cd4:
    uVar11 = (*(code *)*puVar13)(plVar8,puVar13[1]);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar10,*(undefined8 *)PTR_DAT_04caa838,uVar11,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar15 = *(long *)puVar3;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar3;
  }
  puVar7 = PTR_DAT_04cbf210;
  puVar6 = PTR_DAT_04cbf200;
  puVar5 = PTR_DAT_04cb4af0;
  puVar4 = PTR_DAT_04cabc00;
  puVar3 = PTR_DAT_04cabaa8;
  puVar1 = PTR_DAT_04ca9ac8;
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (lVar15 != 0) {
    uStack_5c = *(uint *)(lVar15 + 0x14);
    uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_5c);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar10,*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_60 = Dino_BusSand_App_Ads__get_InstallDay_2176334(0);
    uVar11 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_60);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar10,*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar2);
    uVar11 = *(undefined8 *)puVar7;
    uStack_5c = 0;
    if (*(long *)(lVar15 + 0x110) != 0) {
      uStack_5c = (uint)(0 < *(int *)(*(long *)(lVar15 + 0x110) + 0x18));
    }
    uVar14 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_5c);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar10,uVar11,uVar14,*(undefined8 *)puVar2);
  }
  uVar12 = System_String__IsNullOrEmpty_46d2084
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),0);
  if ((uVar12 & 1) == 0) {
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar10,*(undefined8 *)PTR_DAT_04cb49f0,
               *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),*(undefined8 *)puVar2);
  }
  return lVar10;
}

