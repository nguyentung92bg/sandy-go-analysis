/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Preload
void Dino_BusSand_App_UI_KitPrefabs__Preload (System_String_array* keys, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Preload
   void Dino_BusSand_App_UI_KitPrefabs__Preload (System_String_array* keys, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitPrefabs__Preload_216b2fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b930 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac4f8);
    bRam0000000004f9b930 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if ((**(char **)(lVar2 + 0xb8) != '\0' && param_1 != 0) && (0 < (int)*(ulong *)(param_1 + 0x18)))
  {
    uVar5 = 0;
    uVar3 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20 + uVar5 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_KitPrefabs__Get_2181940(uVar4);
      uVar3 = (ulong)*(uint *)(param_1 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return;
}

