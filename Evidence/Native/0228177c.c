/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Has
bool Dino_BusSand_App_UI_KitPrefabs__Has (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Has
   bool Dino_BusSand_App_UI_KitPrefabs__Has (System_String_o* key, const MethodInfo* method); */

uint Dino_BusSand_App_UI_KitPrefabs__Has_218177c(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b92d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab528);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    bRam0000000004f9b92d = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if ((**(char **)(lVar3 + 0xb8) != '\0') &&
     (uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0), (uVar4 & 1) == 0)) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_KitPrefabs__EnsureIndex_2181484();
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar3 != 0) {
      uVar2 = System_Collections_Generic_Dictionary_object__object___FindEntry_34b4a60
                        (lVar3,param_1,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)PTR_DAT_04cab528 + 0x20) + 0xc0) + 0x110));
      return ~uVar2 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

