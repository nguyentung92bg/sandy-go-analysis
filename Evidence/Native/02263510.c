/* IL2CPP: Dino.BusSand.App.UiAssets$$HasPrefab
bool Dino_BusSand_App_UiAssets__HasPrefab (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$HasPrefab
   bool Dino_BusSand_App_UiAssets__HasPrefab (System_String_o* key, const MethodInfo* method); */

uint Dino_BusSand_App_UiAssets__HasPrefab_2163510(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9b840 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab528);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9b840 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab490;
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UiAssets__Ensure_2162bb4();
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar2 = System_Collections_Generic_Dictionary_object__object___FindEntry_34b4a60
                      (lVar4,param_1,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)PTR_DAT_04cab528 + 0x20) + 0xc0) + 0x110));
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

