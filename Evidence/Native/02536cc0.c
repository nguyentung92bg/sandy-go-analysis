/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Context
System_Collections_Generic_IReadOnlyDictionary_string__object__o* Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Context (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Context
   System_Collections_Generic_IReadOnlyDictionary_string__object__o*
   Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Context (const MethodInfo* method); */

long Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Context_2436cc0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cbf2f8;
  if ((bRam0000000004f9cc57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04cbf2f8);
    FUN_02132f7c(PTR_DAT_04cb49f0);
    bRam0000000004f9cc57 = 1;
  }
  lVar2 = Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Context_2434a18();
  uVar3 = System_String__IsNullOrEmpty_46d2084
                    (*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)puVar1;
  }
  else {
    if (cRam0000000004f9cca2 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbf200);
      cRam0000000004f9cca2 = '\x01';
    }
    lVar4 = *(long *)PTR_DAT_04cbf200;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  uVar3 = System_String__IsNullOrEmpty_46d2084(uVar5,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar2,*(undefined8 *)PTR_DAT_04cb49f0,uVar5,*(undefined8 *)PTR_DAT_04ca9b58);
  }
  return lVar2;
}

