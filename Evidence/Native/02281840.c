/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Spawn
UnityEngine_GameObject_o* Dino_BusSand_App_UI_KitPrefabs__Spawn (System_String_o* key, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Spawn
   UnityEngine_GameObject_o* Dino_BusSand_App_UI_KitPrefabs__Spawn (System_String_o* key,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b92e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b92e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_UI_KitPrefabs__Get_2181940(param_1);
  puVar1 = PTR_DAT_04cad390;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    lVar2 = UnityEngine_Object__Instantiate_object__2805310(uVar4,param_2,0,*(undefined8 *)puVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec(lVar2,param_1,0);
    uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar2,0);
    if ((uVar3 & 1) == 0) {
      UnityEngine_GameObject__SetActive_43c1408(lVar2,1,0);
    }
  }
  return lVar2;
}

